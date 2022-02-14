
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
struct se_cmd {unsigned char* t_task_cdb; int data_length; int se_sess; TYPE_1__* se_dev; } ;
typedef int sense_reason_t ;
struct TYPE_2__ {int dev_reservation_flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct se_cmd*,int ) ;
 int FUNC_1 (struct se_cmd*,int,int,int ,int ,int) ;
 int FUNC_2 (struct se_cmd*,int ,int ,int,int,int,int) ;
 int FUNC_3 (struct se_cmd*,int ,int ,int,int) ;
 int FUNC_4 (struct se_cmd*,int,int,int ) ;
 int FUNC_5 (struct se_cmd*,int,int,int ) ;
 int FUNC_6 (unsigned char*) ;
 int FUNC_7 (char*,...) ;
 int FUNC_8 (char*,int) ;
 int FUNC_9 (struct se_cmd*,int ) ;
 unsigned char* FUNC_10 (struct se_cmd*) ;
 int FUNC_11 (struct se_cmd*) ;

sense_reason_t
FUNC_12(struct se_cmd *VAR_6)
{
 unsigned char *VAR_7 = &VAR_6->t_task_cdb[0];
 unsigned char *VAR_8;
 u64 VAR_9, VAR_10;
 int VAR_11, VAR_12, VAR_13, VAR_14;
 int VAR_15 = 0, VAR_16 = 0, VAR_17 = 0;
 sense_reason_t VAR_18;
 if (VAR_6->se_dev->dev_reservation_flags & VAR_0) {
  FUNC_7("Received PERSISTENT_RESERVE CDB while legacy"
   " SPC-2 reservation is held, returning"
   " RESERVATION_CONFLICT\n");
  return VAR_5;
 }





 if (!VAR_6->se_sess)
  return VAR_4;

 if (VAR_6->data_length < 24) {
  FUNC_8("SPC-PR: Received PR OUT parameter list"
   " length too small: %u\n", VAR_6->data_length);
  return VAR_3;
 }




 VAR_11 = (VAR_7[1] & 0x1f);
 VAR_12 = (VAR_7[2] & 0xf0);
 VAR_13 = (VAR_7[2] & 0x0f);

 VAR_8 = FUNC_10(VAR_6);
 if (!VAR_8)
  return VAR_4;




 VAR_9 = FUNC_6(&VAR_8[0]);
 VAR_10 = FUNC_6(&VAR_8[8]);




 if (VAR_11 != 130) {
  VAR_15 = (VAR_8[20] & 0x08);
  VAR_16 = (VAR_8[20] & 0x04);
  VAR_14 = (VAR_8[20] & 0x01);
 } else {
  VAR_14 = (VAR_8[17] & 0x01);
  VAR_17 = (VAR_8[17] & 0x02);
 }
 FUNC_11(VAR_6);
 VAR_8 = ((void*)0);




 if (VAR_15 && ((VAR_7[1] & 0x1f) != 132))
  return VAR_3;
 if (!VAR_15 && ((VAR_7[1] & 0x1f) != 130) &&
     (VAR_6->data_length != 24)) {
  FUNC_8("SPC-PR: Received PR OUT illegal parameter"
   " list length: %u\n", VAR_6->data_length);
  return VAR_3;
 }






 switch (VAR_11) {
 case 132:
  VAR_18 = FUNC_2(VAR_6,
   VAR_9, VAR_10, VAR_14, VAR_16, VAR_15, 0);
  break;
 case 128:
  VAR_18 = FUNC_5(VAR_6, VAR_13, VAR_12, VAR_9);
  break;
 case 129:
  VAR_18 = FUNC_4(VAR_6, VAR_13, VAR_12, VAR_9);
  break;
 case 135:
  VAR_18 = FUNC_0(VAR_6, VAR_9);
  break;
 case 134:
  VAR_18 = FUNC_1(VAR_6, VAR_13, VAR_12,
     VAR_9, VAR_10, 0);
  break;
 case 133:
  VAR_18 = FUNC_1(VAR_6, VAR_13, VAR_12,
     VAR_9, VAR_10, 1);
  break;
 case 131:
  VAR_18 = FUNC_2(VAR_6,
   0, VAR_10, VAR_14, VAR_16, VAR_15, 1);
  break;
 case 130:
  VAR_18 = FUNC_3(VAR_6, VAR_9,
    VAR_10, VAR_14, VAR_17);
  break;
 default:
  FUNC_7("Unknown PERSISTENT_RESERVE_OUT service"
   " action: 0x%02x\n", VAR_7[1] & 0x1f);
  return VAR_2;
 }

 if (!VAR_18)
  FUNC_9(VAR_6, VAR_1);
 return VAR_18;
}
