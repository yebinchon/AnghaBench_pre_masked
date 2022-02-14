
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct bnx2x {int pdev; } ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int FUNC_1 (struct bnx2x*) ;
 scalar_t__ FUNC_2 (struct bnx2x*) ;
 int FUNC_3 (int ,char*,...) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_4 (struct bnx2x*,int ,int) ;
 int FUNC_5 (struct bnx2x*) ;
 int FUNC_6 (struct bnx2x*) ;
 scalar_t__ FUNC_7 (int ) ;
 scalar_t__ FUNC_8 (struct bnx2x*,int ) ;
 scalar_t__ FUNC_9 (struct bnx2x*,int ,int ) ;
 int FUNC_10 (struct bnx2x*,int ) ;
 int FUNC_11 (int) ;

__attribute__((used)) static int FUNC_12(struct bnx2x *VAR_4)
{
 u32 VAR_5 = FUNC_5(VAR_4);

 FUNC_3(VAR_0, "Cleanup after FLR PF[%d]\n", FUNC_1(VAR_4));


 FUNC_4(VAR_4, VAR_3, 1);


 FUNC_3(VAR_0, "Polling usage counters\n");
 if (FUNC_8(VAR_4, VAR_5))
  return -VAR_1;




 if (FUNC_9(VAR_4, (u8)FUNC_2(VAR_4), VAR_5))
  return -VAR_1;




 FUNC_10(VAR_4, VAR_5);


 FUNC_11(100);


 if (FUNC_7(VAR_4->pdev))
  FUNC_0("PCIE Transactions still pending\n");


 FUNC_6(VAR_4);





 FUNC_4(VAR_4, VAR_2, 1);

 return 0;
}
