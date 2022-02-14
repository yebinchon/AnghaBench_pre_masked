
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct pci_dev {int dev; } ;
struct firmware {int size; scalar_t__ data; } ;


 struct firmware const* bfi_fw ;
 int pr_alert (char*,char*) ;
 scalar_t__ request_firmware (struct firmware const**,char*,int *) ;

__attribute__((used)) static u32 *
cna_read_firmware(struct pci_dev *pdev, u32 **bfi_image,
   u32 *bfi_image_size, char *fw_name)
{
 const struct firmware *fw;

 if (request_firmware(&fw, fw_name, &pdev->dev)) {
  pr_alert("Can't locate firmware %s\n", fw_name);
  goto error;
 }

 *bfi_image = (u32 *)fw->data;
 *bfi_image_size = fw->size/sizeof(u32);
 bfi_fw = fw;

 return *bfi_image;
error:
 return ((void*)0);
}
