
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mthca_dev {int mthca_flags; int pdev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct mthca_dev*,char*) ;
 int FUNC_1 (struct mthca_dev*,char*) ;
 scalar_t__ FUNC_2 (int ,int ) ;
 scalar_t__ FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (int ,int) ;
 int FUNC_5 (int ) ;
 scalar_t__ FUNC_6 (int ,int ) ;
 int VAR_3 ;

__attribute__((used)) static int FUNC_7(struct mthca_dev *VAR_4)
{
 if (!VAR_3)
  return 0;


 if (FUNC_2(VAR_4->pdev, VAR_2)) {
  if (FUNC_6(VAR_4->pdev, FUNC_5(VAR_4->pdev))) {
   FUNC_0(VAR_4, "Couldn't set PCI-X max read count, "
    "aborting.\n");
   return -VAR_0;
  }
 } else if (!(VAR_4->mthca_flags & VAR_1))
  FUNC_1(VAR_4, "No PCI-X capability, not setting RBC.\n");

 if (FUNC_3(VAR_4->pdev)) {
  if (FUNC_4(VAR_4->pdev, 4096)) {
   FUNC_0(VAR_4, "Couldn't write PCI Express read request, "
    "aborting.\n");
   return -VAR_0;
  }
 } else if (VAR_4->mthca_flags & VAR_1)
  FUNC_1(VAR_4, "No PCI Express capability, "
      "not setting Max Read Request Size.\n");

 return 0;
}
