
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bnx2x {int pdev; } ;


 int VAR_0 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (struct bnx2x*) ;
 int FUNC_2 (struct bnx2x*) ;
 int FUNC_3 (int ) ;

void FUNC_4(struct bnx2x *VAR_1)
{

 if (!FUNC_1(VAR_1))
  return;

 FUNC_0(VAR_0, "about to call disable sriov\n");
 FUNC_3(VAR_1->pdev);
 FUNC_0(VAR_0, "sriov disabled\n");


 FUNC_2(VAR_1);
}
