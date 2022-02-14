
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tcm_loop_tmr {int tl_tmr_wait; int tmr_complete; } ;
struct se_tmr_req {struct tcm_loop_tmr* fabric_tmr_ptr; } ;
struct se_cmd {struct se_tmr_req* se_tmr_req; } ;


 int FUNC_0 (int *,int) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static int FUNC_2(struct se_cmd *VAR_0)
{
 struct se_tmr_req *VAR_1 = VAR_0->se_tmr_req;
 struct tcm_loop_tmr *VAR_2 = VAR_1->fabric_tmr_ptr;




 FUNC_0(&VAR_2->tmr_complete, 1);
 FUNC_1(&VAR_2->tl_tmr_wait);
 return 0;
}
