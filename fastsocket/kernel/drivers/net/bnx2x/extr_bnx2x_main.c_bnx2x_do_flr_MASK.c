
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u16 ;
struct pci_dev {int dev; } ;
struct TYPE_2__ {scalar_t__ bc_ver; } ;
struct bnx2x {TYPE_1__ common; struct pci_dev* pdev; } ;


 int FUNC_0 (char*) ;
 int FUNC_1 (char*,scalar_t__) ;
 scalar_t__ FUNC_2 (struct bnx2x*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_3 (struct bnx2x*,int ,int ) ;
 int FUNC_4 (int *,char*) ;
 int FUNC_5 (int) ;
 int FUNC_6 (struct pci_dev*,int ,int*) ;

__attribute__((used)) static int FUNC_7(struct bnx2x *VAR_5)
{
 int VAR_6;
 u16 VAR_7;
 struct pci_dev *VAR_8 = VAR_5->pdev;

 if (FUNC_2(VAR_5)) {
  FUNC_0("FLR not supported in E1/E1H\n");
  return -VAR_1;
 }


 if (VAR_5->common.bc_ver < VAR_4) {
  FUNC_1("FLR not supported by BC_VER: 0x%x\n",
     VAR_5->common.bc_ver);
  return -VAR_1;
 }


 for (VAR_6 = 0; VAR_6 < 4; VAR_6++) {
  if (VAR_6)
   FUNC_5((1 << (VAR_6 - 1)) * 100);

  FUNC_6(VAR_8, VAR_2, &VAR_7);
  if (!(VAR_7 & VAR_3))
   goto clear;
 }

 FUNC_4(&VAR_8->dev,
  "transaction is not cleared; proceeding with reset anyway\n");

clear:

 FUNC_0("Initiating FLR\n");
 FUNC_3(VAR_5, VAR_0, 0);

 return 0;
}
