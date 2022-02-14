
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct se_cmd {int* t_task_cdb; TYPE_1__* se_dev; } ;
typedef int sense_reason_t ;
struct TYPE_2__ {int dev_reservation_flags; } ;


 int VAR_0 ;
 int VAR_1 ;




 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct se_cmd*) ;
 int FUNC_1 (struct se_cmd*) ;
 int FUNC_2 (struct se_cmd*) ;
 int FUNC_3 (struct se_cmd*) ;
 int FUNC_4 (char*,...) ;
 int FUNC_5 (struct se_cmd*,int ) ;

sense_reason_t
FUNC_6(struct se_cmd *VAR_4)
{
 sense_reason_t VAR_5;
 if (VAR_4->se_dev->dev_reservation_flags & VAR_0) {
  FUNC_4("Received PERSISTENT_RESERVE CDB while legacy"
   " SPC-2 reservation is held, returning"
   " RESERVATION_CONFLICT\n");
  return VAR_3;
 }

 switch (VAR_4->t_task_cdb[1] & 0x1f) {
 case 130:
  VAR_5 = FUNC_1(VAR_4);
  break;
 case 129:
  VAR_5 = FUNC_2(VAR_4);
  break;
 case 128:
  VAR_5 = FUNC_3(VAR_4);
  break;
 case 131:
  VAR_5 = FUNC_0(VAR_4);
  break;
 default:
  FUNC_4("Unknown PERSISTENT_RESERVE_IN service"
   " action: 0x%02x\n", VAR_4->t_task_cdb[1] & 0x1f);
  return VAR_2;
 }

 if (!VAR_5)
  FUNC_5(VAR_4, VAR_1);
 return VAR_5;
}
