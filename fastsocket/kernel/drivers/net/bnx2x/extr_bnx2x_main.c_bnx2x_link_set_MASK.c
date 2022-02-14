
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bnx2x {int link_vars; int link_params; } ;


 int FUNC_0 (char*) ;
 int FUNC_1 (struct bnx2x*) ;
 int FUNC_2 (struct bnx2x*) ;
 int FUNC_3 (struct bnx2x*) ;
 int FUNC_4 (struct bnx2x*) ;
 int FUNC_5 (int *,int *) ;
 int FUNC_6 (struct bnx2x*) ;

void FUNC_7(struct bnx2x *VAR_0)
{
 if (!FUNC_1(VAR_0)) {
  FUNC_2(VAR_0);
  FUNC_5(&VAR_0->link_params, &VAR_0->link_vars);
  FUNC_6(VAR_0);

  FUNC_4(VAR_0);

  FUNC_3(VAR_0);
 } else
  FUNC_0("Bootcode is missing - can not set link\n");
}
