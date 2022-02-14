
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct qib_devdata {int msi_data; int flags; int pcidev; int msi_hi; int msi_lo; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ,int,int*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,scalar_t__,int ) ;
 int FUNC_4 (int ,int,int) ;
 int FUNC_5 (struct qib_devdata*,char*) ;
 int FUNC_6 (int ) ;

int FUNC_7(struct qib_devdata *VAR_7)
{
 int VAR_8;
 u16 VAR_9;
 int VAR_10 = 0;


 if (!VAR_7->msi_lo)
  goto bail;

 VAR_8 = FUNC_0(VAR_7->pcidev, VAR_0);
 if (!VAR_8) {
  FUNC_5(VAR_7,
   "Can't find MSI capability, can't restore MSI settings\n");
  VAR_10 = 0;

  goto bail;
 }
 FUNC_3(VAR_7->pcidev, VAR_8 + VAR_2,
          VAR_7->msi_lo);
 FUNC_3(VAR_7->pcidev, VAR_8 + VAR_1,
          VAR_7->msi_hi);
 FUNC_1(VAR_7->pcidev, VAR_8 + VAR_3, &VAR_9);
 if (!(VAR_9 & VAR_5)) {
  VAR_9 |= VAR_5;
  FUNC_4(VAR_7->pcidev, VAR_8 + VAR_3,
          VAR_9);
 }

 FUNC_4(VAR_7->pcidev, VAR_8 +
         ((VAR_9 & VAR_4) ? 12 : 8),
         VAR_7->msi_data);
 VAR_10 = 1;
bail:
 if (!VAR_10 && (VAR_7->flags & VAR_6)) {
  FUNC_6(VAR_7->pcidev);
  VAR_10 = 1;
 }


 FUNC_2(VAR_7->pcidev);

 return VAR_10;
}
