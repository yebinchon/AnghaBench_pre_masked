
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct se_cmd {int se_cmd_flags; scalar_t__ t_task_cdb; scalar_t__ __t_task_cdb; scalar_t__ check_release; TYPE_1__* se_tfo; int se_sess; int se_tmr_req; } ;
struct TYPE_2__ {int (* release_cmd ) (struct se_cmd*) ;} ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (struct se_cmd*) ;
 int FUNC_4 (int ,struct se_cmd*) ;

__attribute__((used)) static void FUNC_5(struct se_cmd *VAR_1)
{
 FUNC_0(!VAR_1->se_tfo);

 if (VAR_1->se_cmd_flags & VAR_0)
  FUNC_1(VAR_1->se_tmr_req);
 if (VAR_1->t_task_cdb != VAR_1->__t_task_cdb)
  FUNC_2(VAR_1->t_task_cdb);




  if (VAR_1->check_release != 0) {
  FUNC_4(VAR_1->se_sess, VAR_1);
  return;
 }
 VAR_1->se_tfo->release_cmd(VAR_1);
}
