
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef unsigned char u8 ;
struct se_cmd {unsigned char* sense_buffer; int se_cmd_flags; TYPE_1__* se_tfo; int scsi_sense_length; int scsi_status; int t_state_lock; } ;
typedef int sense_reason_t ;
struct TYPE_2__ {int (* queue_status ) (struct se_cmd*) ;} ;


 unsigned char VAR_0 ;
 unsigned char VAR_1 ;
 unsigned char VAR_2 ;
 unsigned char VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 size_t VAR_7 ;
 size_t VAR_8 ;
 size_t VAR_9 ;
 size_t VAR_10 ;
 int VAR_11 ;
 unsigned char VAR_12 ;
 int FUNC_0 (struct se_cmd*,unsigned char*,unsigned char*) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (struct se_cmd*) ;
 int FUNC_4 (struct se_cmd*,unsigned char*,unsigned char*) ;

int
FUNC_5(struct se_cmd *VAR_13,
  sense_reason_t VAR_14, int VAR_15)
{
 unsigned char *VAR_16 = VAR_13->sense_buffer;
 unsigned long VAR_17;
 u8 VAR_18 = 0, VAR_19 = 0;

 FUNC_1(&VAR_13->t_state_lock, VAR_17);
 if (VAR_13->se_cmd_flags & VAR_6) {
  FUNC_2(&VAR_13->t_state_lock, VAR_17);
  return 0;
 }
 VAR_13->se_cmd_flags |= VAR_6;
 FUNC_2(&VAR_13->t_state_lock, VAR_17);

 if (!VAR_14 && VAR_15)
  goto after_reason;

 if (!VAR_15)
  VAR_13->se_cmd_flags |= VAR_5;





 switch (VAR_14) {
 case 136:

  VAR_16[0] = 0x70;
  VAR_16[VAR_7] = 10;

  VAR_16[VAR_10] = VAR_3;

  VAR_16[VAR_9] = 0;
  VAR_16[VAR_8] = 0;
  break;
 case 137:

  VAR_16[0] = 0x70;
  VAR_16[VAR_7] = 10;

  VAR_16[VAR_10] = VAR_2;

  VAR_16[VAR_9] = 0x25;
  break;
 case 129:
 case 134:

  VAR_16[0] = 0x70;
  VAR_16[VAR_7] = 10;

  VAR_16[VAR_10] = VAR_2;

  VAR_16[VAR_9] = 0x20;
  break;
 case 130:

  VAR_16[0] = 0x70;
  VAR_16[VAR_7] = 10;

  VAR_16[VAR_10] = VAR_2;

  VAR_16[VAR_9] = 0x24;
  break;
 case 144:

  VAR_16[0] = 0x70;
  VAR_16[VAR_7] = 10;

  VAR_16[VAR_10] = VAR_0;

  VAR_16[VAR_9] = 0x29;
  VAR_16[VAR_8] = 0x03;
  break;
 case 141:

  VAR_16[0] = 0x70;
  VAR_16[VAR_7] = 10;

  VAR_16[VAR_10] = VAR_0;

  VAR_16[VAR_9] = 0x0c;

  VAR_16[VAR_8] = 0x0d;
  break;
 case 140:

  VAR_16[0] = 0x70;
  VAR_16[VAR_7] = 10;

  VAR_16[VAR_10] = VAR_2;

  VAR_16[VAR_9] = 0x24;
  break;
 case 139:

  VAR_16[0] = 0x70;
  VAR_16[VAR_7] = 10;

  VAR_16[VAR_10] = VAR_2;

  VAR_16[VAR_9] = 0x26;
  break;
 case 135:

  VAR_16[0] = 0x70;
  VAR_16[VAR_7] = 10;

  VAR_16[VAR_10] = VAR_2;

  VAR_16[VAR_9] = 0x1a;
  break;
 case 131:

  VAR_16[0] = 0x70;
  VAR_16[VAR_7] = 10;

  VAR_16[VAR_10] = VAR_0;

  VAR_16[VAR_9] = 0x0c;

  VAR_16[VAR_8] = 0x0c;
  break;
 case 133:

  VAR_16[0] = 0x70;
  VAR_16[VAR_7] = 10;

  VAR_16[VAR_10] = VAR_0;

  VAR_16[VAR_9] = 0x47;

  VAR_16[VAR_8] = 0x05;
  break;
 case 132:

  VAR_16[0] = 0x70;
  VAR_16[VAR_7] = 10;

  VAR_16[VAR_10] = VAR_0;

  VAR_16[VAR_9] = 0x11;

  VAR_16[VAR_8] = 0x13;
  break;
 case 128:

  VAR_16[0] = 0x70;
  VAR_16[VAR_7] = 10;

  VAR_16[VAR_10] = VAR_1;

  VAR_16[VAR_9] = 0x27;
  break;
 case 145:

  VAR_16[0] = 0x70;
  VAR_16[VAR_7] = 10;

  VAR_16[VAR_10] = VAR_2;

  VAR_16[VAR_9] = 0x21;
  break;
 case 142:

  VAR_16[0] = 0x70;
  VAR_16[VAR_7] = 10;

  VAR_16[VAR_10] = VAR_12;
  FUNC_0(VAR_13, &VAR_18, &VAR_19);
  VAR_16[VAR_9] = VAR_18;
  VAR_16[VAR_8] = VAR_19;
  break;
 case 143:

  VAR_16[0] = 0x70;
  VAR_16[VAR_7] = 10;

  VAR_16[VAR_10] = VAR_3;
  FUNC_4(VAR_13, &VAR_18, &VAR_19);
  VAR_16[VAR_9] = VAR_18;
  VAR_16[VAR_8] = VAR_19;
  break;
 case 138:
 default:

  VAR_16[0] = 0x70;
  VAR_16[VAR_7] = 10;






  VAR_16[VAR_10] = VAR_3;

  VAR_16[VAR_9] = 0x08;
  break;
 }



 VAR_13->scsi_status = VAR_4;




 VAR_13->scsi_sense_length = VAR_11;

after_reason:
 return VAR_13->se_tfo->queue_status(VAR_13);
}
