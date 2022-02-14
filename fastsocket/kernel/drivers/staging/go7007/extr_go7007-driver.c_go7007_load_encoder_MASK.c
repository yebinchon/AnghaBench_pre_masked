
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct go7007 {int dev; } ;
struct firmware {int size; scalar_t__ data; } ;


 int GFP_KERNEL ;
 scalar_t__ go7007_interface_reset (struct go7007*) ;
 scalar_t__ go7007_read_interrupt (struct go7007*,int*,int*) ;
 scalar_t__ go7007_send_firmware (struct go7007*,void*,int) ;
 int kfree (void*) ;
 void* kmalloc (int,int ) ;
 scalar_t__ memcmp (scalar_t__,char*,int) ;
 int memcpy (void*,scalar_t__,int) ;
 int release_firmware (struct firmware const*) ;
 scalar_t__ request_firmware (struct firmware const**,char*,int ) ;
 int v4l2_err (struct go7007*,char*,...) ;

__attribute__((used)) static int go7007_load_encoder(struct go7007 *go)
{
 const struct firmware *fw_entry;
 char fw_name[] = "go7007fw.bin";
 void *bounce;
 int fw_len, rv = 0;
 u16 intr_val, intr_data;

 if (request_firmware(&fw_entry, fw_name, go->dev)) {
  v4l2_err(go, "unable to load firmware from file "
   "\"%s\"\n", fw_name);
  return -1;
 }
 if (fw_entry->size < 16 || memcmp(fw_entry->data, "WISGO7007FW", 11)) {
  v4l2_err(go, "file \"%s\" does not appear to be "
    "go7007 firmware\n", fw_name);
  release_firmware(fw_entry);
  return -1;
 }
 fw_len = fw_entry->size - 16;
 bounce = kmalloc(fw_len, GFP_KERNEL);
 if (bounce == ((void*)0)) {
  v4l2_err(go, "unable to allocate %d bytes for "
    "firmware transfer\n", fw_len);
  release_firmware(fw_entry);
  return -1;
 }
 memcpy(bounce, fw_entry->data + 16, fw_len);
 release_firmware(fw_entry);
 if (go7007_interface_reset(go) < 0 ||
   go7007_send_firmware(go, bounce, fw_len) < 0 ||
   go7007_read_interrupt(go, &intr_val, &intr_data) < 0 ||
   (intr_val & ~0x1) != 0x5a5a) {
  v4l2_err(go, "error transferring firmware\n");
  rv = -1;
 }
 kfree(bounce);
 return rv;
}
