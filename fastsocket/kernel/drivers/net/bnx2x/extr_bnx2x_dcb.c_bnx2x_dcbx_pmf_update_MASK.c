
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bnx2x {int dev; int dcbx_error; int dcbx_local_feat; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ,int) ;
 int VAR_2 ;
 scalar_t__ FUNC_1 (struct bnx2x*,int ) ;
 int FUNC_2 (struct bnx2x*,int ) ;
 int FUNC_3 (struct bnx2x*,int) ;
 scalar_t__ FUNC_4 (struct bnx2x*) ;
 int FUNC_5 (struct bnx2x*) ;
 int FUNC_6 (struct bnx2x*,int *,int ) ;
 int FUNC_7 (struct bnx2x*,int *,int ) ;
 int FUNC_8 (int ,int ,int ,int ,int ) ;
 int VAR_3 ;

void FUNC_9(struct bnx2x *VAR_4)
{



 if (FUNC_1(VAR_4, VAR_3) &&
    FUNC_0(FUNC_2(VAR_4, VAR_3), 1 << VAR_1)) {

  if (FUNC_4(VAR_4))
   return;

  FUNC_6(VAR_4, &VAR_4->dcbx_local_feat,
       VAR_4->dcbx_error);
  FUNC_7(VAR_4, &VAR_4->dcbx_local_feat,
      VAR_4->dcbx_error);
  FUNC_5(VAR_4);
 }
}
