
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pci_dev {int dev; } ;
struct TYPE_2__ {int name; } ;


 unsigned char VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int,int,int ) ;
 TYPE_1__ VAR_8 ;
 int VAR_9 ;
 int FUNC_1 (int *,char*,int) ;
 int FUNC_2 (int *,char*,...) ;
 int FUNC_3 (int *,char*) ;
 int FUNC_4 (struct pci_dev*,int ,unsigned char*) ;
 int FUNC_5 (struct pci_dev*,int ,int*) ;
 int FUNC_6 (struct pci_dev*,int ,int) ;
 int FUNC_7 (int,int) ;
 int FUNC_8 (int,int,int ) ;

__attribute__((used)) static int FUNC_9(struct pci_dev *VAR_10)
{
 int VAR_11 = -VAR_2;
 unsigned char VAR_12;
 FUNC_5(VAR_10, VAR_3, &VAR_9);
 VAR_9 &= (0xffff & ~(VAR_1 - 1));
 if (VAR_9 == 0) {
  FUNC_3(&VAR_10->dev,
   "ALI1535_smb region uninitialized - upgrade BIOS?\n");
  goto exit;
 }

 VAR_11 = FUNC_0(VAR_9, VAR_1,
       VAR_8.name);
 if (VAR_11)
  goto exit;

 if (!FUNC_8(VAR_9, VAR_1,
       VAR_8.name)) {
  FUNC_2(&VAR_10->dev, "ALI1535_smb region 0x%x already in use!\n",
   VAR_9);
  goto exit;
 }


 FUNC_4(VAR_10, VAR_4, &VAR_12);
 if ((VAR_12 & VAR_0) == 0) {
  FUNC_2(&VAR_10->dev, "SMB device not enabled - upgrade BIOS?\n");
  goto exit_free;
 }


 FUNC_4(VAR_10, VAR_6, &VAR_12);
 if ((VAR_12 & 1) == 0) {
  FUNC_2(&VAR_10->dev, "SMBus controller not enabled - upgrade BIOS?\n");
  goto exit_free;
 }


 FUNC_6(VAR_10, VAR_5, 0x20);
 FUNC_4(VAR_10, VAR_7, &VAR_12);
 FUNC_1(&VAR_10->dev, "SMBREV = 0x%X\n", VAR_12);
 FUNC_1(&VAR_10->dev, "ALI1535_smba = 0x%X\n", VAR_9);

 VAR_11 = 0;
exit:
 return VAR_11;

exit_free:
 FUNC_7(VAR_9, VAR_1);
 return VAR_11;
}
