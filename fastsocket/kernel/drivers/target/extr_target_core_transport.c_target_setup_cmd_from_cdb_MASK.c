
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct se_device {TYPE_1__* transport; } ;
struct se_cmd {TYPE_4__* se_lun; int t_state_lock; int se_cmd_flags; int scsi_status; int * t_task_cdb; int * __t_task_cdb; struct se_device* se_dev; } ;
typedef scalar_t__ sense_reason_t ;
struct TYPE_8__ {int lun_sep_lock; TYPE_3__* lun_sep; } ;
struct TYPE_6__ {int cmd_pdus; } ;
struct TYPE_7__ {TYPE_2__ sep_stats; } ;
struct TYPE_5__ {scalar_t__ (* parse_cdb ) (struct se_cmd*) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 unsigned long VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int * FUNC_0 (int,int ) ;
 int FUNC_1 (int *,unsigned char*,int) ;
 int FUNC_2 (char*,int,unsigned long) ;
 int FUNC_3 (unsigned char*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *,unsigned long) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *,unsigned long) ;
 scalar_t__ FUNC_8 (struct se_cmd*) ;
 scalar_t__ FUNC_9 (struct se_cmd*) ;
 scalar_t__ FUNC_10 (struct se_cmd*) ;
 scalar_t__ FUNC_11 (struct se_cmd*) ;
 scalar_t__ FUNC_12 (struct se_cmd*) ;

sense_reason_t
FUNC_13(struct se_cmd *VAR_6, unsigned char *VAR_7)
{
 struct se_device *VAR_8 = VAR_6->se_dev;
 unsigned long VAR_9;
 sense_reason_t VAR_10;





 if (FUNC_3(VAR_7) > VAR_3) {
  FUNC_2("Received SCSI CDB with command_size: %d that"
   " exceeds SCSI_MAX_VARLEN_CDB_SIZE: %d\n",
   FUNC_3(VAR_7), VAR_3);
  return VAR_4;
 }





 if (FUNC_3(VAR_7) > sizeof(VAR_6->__t_task_cdb)) {
  VAR_6->t_task_cdb = FUNC_0(FUNC_3(VAR_7),
      VAR_0);
  if (!VAR_6->t_task_cdb) {
   FUNC_2("Unable to allocate cmd->t_task_cdb"
    " %u > sizeof(cmd->__t_task_cdb): %lu ops\n",
    FUNC_3(VAR_7),
    (unsigned long)sizeof(VAR_6->__t_task_cdb));
   return VAR_5;
  }
 } else
  VAR_6->t_task_cdb = &VAR_6->__t_task_cdb[0];



 FUNC_1(VAR_6->t_task_cdb, VAR_7, FUNC_3(VAR_7));




 VAR_10 = FUNC_11(VAR_6);
 if (VAR_10)
  return VAR_10;

 VAR_10 = FUNC_9(VAR_6);
 if (VAR_10)
  return VAR_10;

 VAR_10 = FUNC_10(VAR_6);
 if (VAR_10) {
  VAR_6->scsi_status = VAR_1;
  return VAR_10;
 }

 VAR_10 = VAR_8->transport->parse_cdb(VAR_6);
 if (VAR_10)
  return VAR_10;

 VAR_10 = FUNC_12(VAR_6);
 if (VAR_10)
  return VAR_10;

 FUNC_5(&VAR_6->t_state_lock, VAR_9);
 VAR_6->se_cmd_flags |= VAR_2;
 FUNC_7(&VAR_6->t_state_lock, VAR_9);

 FUNC_4(&VAR_6->se_lun->lun_sep_lock);
 if (VAR_6->se_lun->lun_sep)
  VAR_6->se_lun->lun_sep->sep_stats.cmd_pdus++;
 FUNC_6(&VAR_6->se_lun->lun_sep_lock);
 return 0;
}
