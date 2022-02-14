
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bnx2x {int requested_nr_virtfn; int pdev; } ;


 int FUNC_0 (char*,int) ;
 int VAR_0 ;
 int FUNC_1 (int ,char*,int) ;
 int FUNC_2 (int ,int) ;

int FUNC_3(struct bnx2x *VAR_1)
{
 int VAR_2 = 0, VAR_3 = VAR_1->requested_nr_virtfn;

 VAR_2 = FUNC_2(VAR_1->pdev, VAR_3);
 if (VAR_2) {
  FUNC_0("pci_enable_sriov failed with %d\n", VAR_2);
  return VAR_2;
 }
 FUNC_1(VAR_0, "sriov enabled (%d vfs)\n", VAR_3);
 return VAR_3;
}
