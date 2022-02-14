
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct xc {int no; int version; int type; int dev; } ;
struct fw_header {int magic; TYPE_1__* fw_desc; int version; int type; } ;
struct firmware {void* data; } ;
struct TYPE_2__ {int ofs; int size; int patch_ofs; unsigned int patch_entries; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char*,...) ;
 scalar_t__ FUNC_1 (unsigned long) ;
 int FUNC_2 (void*,void const*,unsigned int) ;
 int FUNC_3 (struct firmware const*) ;
 int FUNC_4 (struct firmware const**,char*,int ) ;
 int FUNC_5 (char*,char*,int) ;
 scalar_t__ FUNC_6 (struct xc*,unsigned long,unsigned int) ;
 int FUNC_7 (struct xc*,void const*,unsigned int) ;

int FUNC_8(struct xc *VAR_2)
{
 int VAR_3;
 char VAR_4[16];
 const struct firmware *VAR_5;
 struct fw_header *VAR_6;
 unsigned int VAR_7;
 int VAR_8;
 const void *VAR_9;
 unsigned long VAR_10;

 FUNC_5(VAR_4, "xc%d.bin", VAR_2->no);

 VAR_3 = FUNC_4(&VAR_5, VAR_4, VAR_2->dev);

 if (VAR_3 < 0) {
  FUNC_0(VAR_2->dev, "request_firmware failed\n");
  return VAR_3;
 }

 VAR_6 = (struct fw_header *)VAR_5->data;
 if (VAR_6->magic != 0x4e657458) {
  if (VAR_6->magic == 0x5874654e) {
   FUNC_0(VAR_2->dev,
       "firmware magic is 'XteN'. Endianess problems?\n");
   VAR_3 = -VAR_1;
   goto exit_release_firmware;
  }
  FUNC_0(VAR_2->dev, "unrecognized firmware magic 0x%08x\n",
   VAR_6->magic);
  VAR_3 = -VAR_1;
  goto exit_release_firmware;
 }

 VAR_2->type = VAR_6->type;
 VAR_2->version = VAR_6->version;

 VAR_3 = -VAR_0;

 for (VAR_8 = 0; VAR_8 < 3; VAR_8++) {
  VAR_9 = VAR_5->data + VAR_6->fw_desc[VAR_8].ofs;
  VAR_10 = *(unsigned int *)VAR_9;
  VAR_9 += sizeof (unsigned int);
  VAR_7 = VAR_6->fw_desc[VAR_8].size - sizeof (unsigned int);

  if (FUNC_6(VAR_2, VAR_10, VAR_7))
   goto exit_release_firmware;

  FUNC_2((void *)FUNC_1(VAR_10), VAR_9, VAR_7);

  VAR_9 = VAR_5->data + VAR_6->fw_desc[VAR_8].patch_ofs;
  VAR_7 = VAR_6->fw_desc[VAR_8].patch_entries;
  VAR_3 = FUNC_7(VAR_2, VAR_9, VAR_7);
  if (VAR_3 < 0)
   goto exit_release_firmware;
 }

 VAR_3 = 0;

      exit_release_firmware:
 FUNC_3(VAR_5);

 return VAR_3;
}
