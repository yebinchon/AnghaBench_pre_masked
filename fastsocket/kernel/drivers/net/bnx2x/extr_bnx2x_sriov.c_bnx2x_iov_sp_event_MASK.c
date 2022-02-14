
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bnx2x_virtf {int op_in_progress; } ;
struct bnx2x {int sp_task; } ;


 int FUNC_0 (struct bnx2x*) ;
 int FUNC_1 (int *,int) ;
 int FUNC_2 (struct bnx2x*,int) ;
 struct bnx2x_virtf* FUNC_3 (struct bnx2x*,int) ;
 int VAR_0 ;
 int FUNC_4 (int ,int *,int ) ;

void FUNC_5(struct bnx2x *VAR_1, int VAR_2, bool VAR_3)
{
 struct bnx2x_virtf *VAR_4;


 if (!FUNC_0(VAR_1) || !FUNC_2(VAR_1, VAR_2))
  return;

 VAR_4 = FUNC_3(VAR_1, VAR_2);
 if (VAR_4) {

  FUNC_1(&VAR_4->op_in_progress, 1);
  if (VAR_3)
   FUNC_4(VAR_0, &VAR_1->sp_task, 0);
 }
}
