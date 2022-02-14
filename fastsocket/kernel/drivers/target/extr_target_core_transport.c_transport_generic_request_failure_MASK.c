
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct se_cmd {int t_state; int transport_state; TYPE_4__* se_dev; int * t_task_cdb; TYPE_3__* se_tfo; int orig_fe_lun; TYPE_2__* se_sess; int scsi_status; } ;
typedef int sense_reason_t ;
struct TYPE_5__ {int emulate_ua_intlck_ctrl; } ;
struct TYPE_8__ {TYPE_1__ dev_attrib; } ;
struct TYPE_7__ {int (* get_cmd_state ) (struct se_cmd*) ;int (* queue_status ) (struct se_cmd*) ;int (* get_task_tag ) (struct se_cmd*) ;} ;
struct TYPE_6__ {int se_node_acl; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int ,int ,int,int ) ;
 int FUNC_1 (char*,...) ;
 int FUNC_2 (char*,int ,int) ;
 int FUNC_3 (struct se_cmd*) ;
 int FUNC_4 (struct se_cmd*) ;
 int FUNC_5 (struct se_cmd*) ;
 int FUNC_6 (struct se_cmd*) ;
 int FUNC_7 (struct se_cmd*) ;
 int FUNC_8 (struct se_cmd*,TYPE_4__*) ;
 int FUNC_9 (struct se_cmd*) ;
 int FUNC_10 (struct se_cmd*,int,int ) ;

void FUNC_11(struct se_cmd *VAR_8,
  sense_reason_t VAR_9)
{
 int VAR_10 = 0;

 FUNC_1("-----[ Storage Engine Exception for cmd: %p ITT: 0x%08x"
  " CDB: 0x%02x\n", VAR_8, VAR_8->se_tfo->get_task_tag(VAR_8),
  VAR_8->t_task_cdb[0]);
 FUNC_1("-----[ i_state: %d t_state: %d sense_reason: %d\n",
  VAR_8->se_tfo->get_cmd_state(VAR_8),
  VAR_8->t_state, VAR_9);
 FUNC_1("-----[ CMD_T_ACTIVE: %d CMD_T_STOP: %d CMD_T_SENT: %d\n",
  (VAR_8->transport_state & VAR_1) != 0,
  (VAR_8->transport_state & VAR_3) != 0,
  (VAR_8->transport_state & VAR_2) != 0);




 FUNC_7(VAR_8);

 switch (VAR_9) {
 case 134:
 case 129:
 case 137:
 case 136:
 case 132:
 case 135:
 case 130:
 case 128:
 case 141:
 case 140:
 case 138:
 case 139:
  break;
 case 133:
  VAR_9 = 135;
  break;
 case 131:






  VAR_8->scsi_status = VAR_6;







  if (VAR_8->se_sess &&
      VAR_8->se_dev->dev_attrib.emulate_ua_intlck_ctrl == 2)
   FUNC_0(VAR_8->se_sess->se_node_acl,
    VAR_8->orig_fe_lun, 0x2C,
    VAR_0);

  VAR_10 = VAR_8->se_tfo->queue_status(VAR_8);
  if (VAR_10 == -VAR_4 || VAR_10 == -VAR_5)
   goto queue_full;
  goto check_stop;
 default:
  FUNC_2("Unknown transport error for CDB 0x%02x: %d\n",
   VAR_8->t_task_cdb[0], VAR_9);
  VAR_9 = 129;
  break;
 }

 VAR_10 = FUNC_10(VAR_8, VAR_9, 0);
 if (VAR_10 == -VAR_4 || VAR_10 == -VAR_5)
  goto queue_full;

check_stop:
 FUNC_9(VAR_8);
 if (!FUNC_6(VAR_8))
  ;
 return;

queue_full:
 VAR_8->t_state = VAR_7;
 FUNC_8(VAR_8, VAR_8->se_dev);
}
