
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct cpc_sja1000_params {int acc_code0; int acc_code1; int acc_code2; int acc_code3; int acc_mask0; int acc_mask1; int acc_mask2; int acc_mask3; int mode; int outp_contr; scalar_t__ btr1; scalar_t__ btr0; } ;
struct TYPE_4__ {struct cpc_sja1000_params sja1000; } ;
struct TYPE_5__ {int cc_type; TYPE_1__ cc_params; } ;
struct TYPE_6__ {TYPE_2__ can_params; } ;
struct ems_cpc_msg {int length; TYPE_3__ msg; scalar_t__ msgid; int type; } ;
struct cpc_can_params {int dummy; } ;


 int CPC_CC_TYPE_SJA1000 ;
 int CPC_CMD_TYPE_CAN_PARAMS ;
 int SJA1000_DEFAULT_OUTPUT_CONTROL ;
 int SJA1000_MOD_RM ;

__attribute__((used)) static void init_params_sja1000(struct ems_cpc_msg *msg)
{
 struct cpc_sja1000_params *sja1000 =
  &msg->msg.can_params.cc_params.sja1000;

 msg->type = CPC_CMD_TYPE_CAN_PARAMS;
 msg->length = sizeof(struct cpc_can_params);
 msg->msgid = 0;

 msg->msg.can_params.cc_type = CPC_CC_TYPE_SJA1000;


 sja1000->acc_code0 = 0x00;
 sja1000->acc_code1 = 0x00;
 sja1000->acc_code2 = 0x00;
 sja1000->acc_code3 = 0x00;


 sja1000->acc_mask0 = 0xFF;
 sja1000->acc_mask1 = 0xFF;
 sja1000->acc_mask2 = 0xFF;
 sja1000->acc_mask3 = 0xFF;

 sja1000->btr0 = 0;
 sja1000->btr1 = 0;

 sja1000->outp_contr = SJA1000_DEFAULT_OUTPUT_CONTROL;
 sja1000->mode = SJA1000_MOD_RM;
}
