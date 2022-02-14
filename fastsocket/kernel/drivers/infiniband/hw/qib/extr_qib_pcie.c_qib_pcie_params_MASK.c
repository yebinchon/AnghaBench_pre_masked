
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
typedef int u16 ;
struct qib_msix_entry {int dummy; } ;
struct qib_devdata {int lbus_width; int lbus_speed; int lbus_info; int pcidev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int ,int*) ;
 int FUNC_3 (struct qib_devdata*,char*,...) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (struct qib_devdata*,int) ;
 int FUNC_6 (struct qib_devdata*,int,int*,struct qib_msix_entry*) ;
 int FUNC_7 (struct qib_devdata*) ;
 int FUNC_8 (struct qib_devdata*) ;
 int FUNC_9 (int ,int,char*,int,int) ;

int FUNC_10(struct qib_devdata *VAR_3, u32 VAR_4, u32 *VAR_5,
      struct qib_msix_entry *VAR_6)
{
 u16 VAR_7, VAR_8;
 int VAR_9 = 0, VAR_10 = 1;

 if (!FUNC_1(VAR_3->pcidev)) {
  FUNC_3(VAR_3, "Can't find PCI Express capability!\n");

  VAR_3->lbus_width = 1;
  VAR_3->lbus_speed = 2500;
  goto bail;
 }

 VAR_9 = FUNC_0(VAR_3->pcidev, VAR_1);
 if (VAR_5 && *VAR_5 && VAR_9) {
  FUNC_6(VAR_3, VAR_9, VAR_5, VAR_6);
  VAR_10 = 0;
 } else {
  VAR_9 = FUNC_0(VAR_3->pcidev, VAR_0);
  if (VAR_9)
   VAR_10 = FUNC_5(VAR_3, VAR_9);
  else
   FUNC_3(VAR_3, "No PCI MSI or MSIx capability!\n");
 }
 if (!VAR_9)
  FUNC_4(VAR_3->pcidev);

 FUNC_2(VAR_3->pcidev, VAR_2, &VAR_7);




 VAR_8 = VAR_7 & 0xf;
 VAR_7 >>= 4;
 VAR_7 &= 0x1f;
 VAR_3->lbus_width = VAR_7;

 switch (VAR_8) {
 case 1:
  VAR_3->lbus_speed = 2500;
  break;
 case 2:
  VAR_3->lbus_speed = 5000;
  break;
 default:
  VAR_3->lbus_speed = 2500;
  break;
 }





 if (VAR_4 && VAR_7 < VAR_4)
  FUNC_3(VAR_3,
       "PCIe width %u (x%u HCA), performance reduced\n",
       VAR_7, VAR_4);

 FUNC_7(VAR_3);

 FUNC_8(VAR_3);

bail:

 FUNC_9(VAR_3->lbus_info, sizeof(VAR_3->lbus_info),
   "PCIe,%uMHz,x%u\n", VAR_3->lbus_speed, VAR_3->lbus_width);
 return VAR_10;
}
