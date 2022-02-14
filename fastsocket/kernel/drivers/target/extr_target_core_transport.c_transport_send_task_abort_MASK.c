
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct se_cmd {int se_cmd_flags; scalar_t__ data_direction; TYPE_1__* se_tfo; int * t_task_cdb; int scsi_status; int transport_state; int t_state_lock; } ;
struct TYPE_2__ {scalar_t__ (* write_pending_status ) (struct se_cmd*) ;int (* queue_status ) (struct se_cmd*) ;int (* get_task_tag ) (struct se_cmd*) ;} ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (char*,int ,int ) ;
 int FUNC_1 () ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;
 scalar_t__ FUNC_4 (struct se_cmd*) ;
 int FUNC_5 (struct se_cmd*) ;
 int FUNC_6 (struct se_cmd*) ;
 int FUNC_7 (struct se_cmd*) ;

void FUNC_8(struct se_cmd *VAR_5)
{
 unsigned long VAR_6;

 FUNC_2(&VAR_5->t_state_lock, VAR_6);
 if (VAR_5->se_cmd_flags & (VAR_3 | VAR_4)) {
  FUNC_3(&VAR_5->t_state_lock, VAR_6);
  return;
 }
 FUNC_3(&VAR_5->t_state_lock, VAR_6);







 if (VAR_5->data_direction == VAR_1) {
  if (VAR_5->se_tfo->write_pending_status(VAR_5) != 0) {
   VAR_5->transport_state |= VAR_0;
   FUNC_1();
  }
 }
 VAR_5->scsi_status = VAR_2;

 FUNC_7(VAR_5);

 FUNC_0("Setting SAM_STAT_TASK_ABORTED status for CDB: 0x%02x,"
  " ITT: 0x%08x\n", VAR_5->t_task_cdb[0],
  VAR_5->se_tfo->get_task_tag(VAR_5));

 VAR_5->se_tfo->queue_status(VAR_5);
}
