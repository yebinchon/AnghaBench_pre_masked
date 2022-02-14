
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct qeth_trap_id {int dummy; } ;
struct TYPE_3__ {int subcmd_len; int type; int action; int options; int ext; scalar_t__ cdata; int subcmd; } ;
struct TYPE_4__ {TYPE_1__ diagass; } ;
struct qeth_ipa_cmd {TYPE_2__ data; } ;
struct qeth_cmd_buffer {scalar_t__ data; } ;
struct qeth_card {int dummy; } ;
typedef enum qeth_diags_trap_action { ____Placeholder_qeth_diags_trap_action } qeth_diags_trap_action ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int ,int,char*) ;
 int VAR_2 ;



 int VAR_3 ;
 struct qeth_cmd_buffer* FUNC_1 (struct qeth_card*,int ,int ) ;
 int FUNC_2 (struct qeth_card*,struct qeth_trap_id*) ;
 int VAR_4 ;
 int FUNC_3 (struct qeth_card*,struct qeth_cmd_buffer*,int ,int *) ;

int FUNC_4(struct qeth_card *VAR_5, enum qeth_diags_trap_action VAR_6)
{
 struct qeth_cmd_buffer *VAR_7;
 struct qeth_ipa_cmd *VAR_8;

 FUNC_0(VAR_3, 2, "diagtrap");
 VAR_7 = FUNC_1(VAR_5, VAR_0, 0);
 VAR_8 = (struct qeth_ipa_cmd *)(VAR_7->data+VAR_1);
 VAR_8->data.diagass.subcmd_len = 80;
 VAR_8->data.diagass.subcmd = VAR_2;
 VAR_8->data.diagass.type = 1;
 VAR_8->data.diagass.action = VAR_6;
 switch (VAR_6) {
 case 130:
  VAR_8->data.diagass.options = 0x0003;
  VAR_8->data.diagass.ext = 0x00010000 +
   sizeof(struct qeth_trap_id);
  FUNC_2(VAR_5,
   (struct qeth_trap_id *)VAR_8->data.diagass.cdata);
  break;
 case 128:
  VAR_8->data.diagass.options = 0x0001;
  break;
 case 129:
  break;
 }
 return FUNC_3(VAR_5, VAR_7, VAR_4, ((void*)0));
}
