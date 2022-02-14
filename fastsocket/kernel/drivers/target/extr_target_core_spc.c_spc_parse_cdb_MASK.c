
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct se_device {TYPE_1__* transport; } ;
struct se_cmd {unsigned char* t_task_cdb; unsigned int data_length; TYPE_2__* se_tfo; void* execute_cmd; void* sam_task_attr; struct se_device* se_dev; } ;
typedef int sense_reason_t ;
struct TYPE_4__ {int (* get_fabric_name ) () ;} ;
struct TYPE_3__ {int (* get_device_type ) (struct se_device*) ;} ;
 unsigned char VAR_0 ;




 unsigned char VAR_1 ;
 void* VAR_2 ;
 int VAR_3 ;

 int VAR_4 ;


 unsigned int FUNC_0 (unsigned char*) ;
 unsigned int FUNC_1 (unsigned char*) ;
 int FUNC_2 (char*,int ,unsigned char) ;
 void* VAR_5 ;
 void* VAR_6 ;
 void* VAR_7 ;
 void* VAR_8 ;
 void* VAR_9 ;
 void* VAR_10 ;
 int FUNC_3 (struct se_device*) ;
 int FUNC_4 (struct se_device*) ;
 int FUNC_5 () ;
 void* VAR_11 ;
 void* VAR_12 ;
 void* VAR_13 ;
 void* VAR_14 ;
 void* VAR_15 ;
 void* VAR_16 ;

sense_reason_t
FUNC_6(struct se_cmd *VAR_17, unsigned int *VAR_18)
{
 struct se_device *VAR_19 = VAR_17->se_dev;
 unsigned char *VAR_20 = VAR_17->t_task_cdb;

 switch (VAR_20[0]) {
 case 148:
  *VAR_18 = VAR_20[4];
  VAR_17->execute_cmd = VAR_6;
  break;
 case 147:
  *VAR_18 = (VAR_20[7] << 8) + VAR_20[8];
  VAR_17->execute_cmd = VAR_6;
  break;
 case 146:
  *VAR_18 = VAR_20[4];
  VAR_17->execute_cmd = VAR_7;
  break;
 case 145:
  *VAR_18 = (VAR_20[7] << 8) + VAR_20[8];
  VAR_17->execute_cmd = VAR_7;
  break;
 case 152:
 case 151:
  *VAR_18 = (VAR_20[7] << 8) + VAR_20[8];
  break;
 case 144:
  *VAR_18 = (VAR_20[7] << 8) + VAR_20[8];
  VAR_17->execute_cmd = VAR_15;
  break;
 case 143:
  *VAR_18 = (VAR_20[7] << 8) + VAR_20[8];
  VAR_17->execute_cmd = VAR_16;
  break;
 case 139:
 case 138:
  if (VAR_20[0] == 138)
   *VAR_18 = (VAR_20[7] << 8) | VAR_20[8];
  else
   *VAR_18 = VAR_17->data_length;

  VAR_17->execute_cmd = VAR_13;
  break;
 case 135:
 case 134:




  if (VAR_20[0] == 134)
   *VAR_18 = (VAR_20[7] << 8) | VAR_20[8];
  else
   *VAR_18 = VAR_17->data_length;

  VAR_17->execute_cmd = VAR_14;
  break;
 case 136:
  *VAR_18 = VAR_20[4];
  VAR_17->execute_cmd = VAR_9;
  break;
 case 153:
  *VAR_18 = (VAR_20[3] << 8) + VAR_20[4];





  VAR_17->sam_task_attr = VAR_2;
  VAR_17->execute_cmd = VAR_5;
  break;
 case 133:
 case 132:
  *VAR_18 = (VAR_20[6] << 24) | (VAR_20[7] << 16) | (VAR_20[8] << 8) | VAR_20[9];
  break;
 case 154:
 case 142:
 case 141:
 case 129:
  *VAR_18 = (VAR_20[10] << 24) | (VAR_20[11] << 16) |
         (VAR_20[12] << 8) | VAR_20[13];
  break;
 case 140:
 case 131:
  *VAR_18 = (VAR_20[3] << 8) | VAR_20[4];
  break;
 case 128:
  *VAR_18 = (VAR_20[6] << 16) + (VAR_20[7] << 8) + VAR_20[8];
  break;
 case 137:
  VAR_17->execute_cmd = VAR_8;
  *VAR_18 = (VAR_20[6] << 24) | (VAR_20[7] << 16) | (VAR_20[8] << 8) | VAR_20[9];




  VAR_17->sam_task_attr = VAR_2;
  break;
 case 130:
  VAR_17->execute_cmd = VAR_10;
  *VAR_18 = 0;
  break;
 case 150:
  if (VAR_19->transport->get_device_type(VAR_19) != VAR_4) {




   if ((VAR_20[1] & 0x1f) == VAR_0) {
    VAR_17->execute_cmd =
     VAR_11;
   }
   *VAR_18 = FUNC_1(&VAR_20[6]);
  } else {



   *VAR_18 = FUNC_0(&VAR_20[8]);
  }
  break;
 case 149:
  if (VAR_19->transport->get_device_type(VAR_19) != VAR_4) {




   if (VAR_20[1] == VAR_1) {
    VAR_17->execute_cmd =
     VAR_12;
   }
   *VAR_18 = FUNC_1(&VAR_20[6]);
  } else {



   *VAR_18 = FUNC_0(&VAR_20[8]);
  }
  break;
 default:
  FUNC_2("TARGET_CORE[%s]: Unsupported SCSI Opcode"
   " 0x%02x, sending CHECK_CONDITION.\n",
   VAR_17->se_tfo->get_fabric_name(), VAR_20[0]);
  return VAR_3;
 }

 return 0;
}
