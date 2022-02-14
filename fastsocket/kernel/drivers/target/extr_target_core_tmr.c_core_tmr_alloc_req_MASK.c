
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct se_tmr_req {int tmr_list; int function; void* fabric_tmr_ptr; struct se_cmd* task_cmd; } ;
struct se_cmd {struct se_tmr_req* se_tmr_req; int se_cmd_flags; } ;
typedef int gfp_t ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int VAR_1 ;
 struct se_tmr_req* FUNC_1 (int,int ) ;
 int FUNC_2 (char*) ;

int FUNC_3(
 struct se_cmd *VAR_2,
 void *VAR_3,
 u8 VAR_4,
 gfp_t VAR_5)
{
 struct se_tmr_req *VAR_6;

 VAR_6 = FUNC_1(sizeof(struct se_tmr_req), VAR_5);
 if (!VAR_6) {
  FUNC_2("Unable to allocate struct se_tmr_req\n");
  return -VAR_0;
 }

 VAR_2->se_cmd_flags |= VAR_1;
 VAR_2->se_tmr_req = VAR_6;
 VAR_6->task_cmd = VAR_2;
 VAR_6->fabric_tmr_ptr = VAR_3;
 VAR_6->function = VAR_4;
 FUNC_0(&VAR_6->tmr_list);

 return 0;
}
