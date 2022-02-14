
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int sin_addr; int sin_port; int sin_family; int sin_len; } ;
struct ip_fw_compat_64 {int fw_flg; int fw_reject_code_compat; TYPE_1__ fw_fwd_ip_compat; int fw_divert_port_compat; int fw_skipto_rule_compat; } ;
struct ip_fw_64 {int cmd_len; int act_ofs; } ;
struct TYPE_8__ {int sin_addr; int sin_port; int sin_family; int sin_len; } ;
struct TYPE_9__ {TYPE_2__ sa; } ;
typedef TYPE_3__ ipfw_insn_sa ;
struct TYPE_10__ {int opcode; int arg1; } ;
typedef TYPE_4__ ipfw_insn ;


 TYPE_4__* FUNC_0 (struct ip_fw_64*) ;
 scalar_t__ FUNC_1 (TYPE_4__*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
__attribute__((used)) static void
FUNC_2(struct ip_fw_64 *VAR_11, struct ip_fw_compat_64 *VAR_12)
{
 int VAR_13;
 ipfw_insn *VAR_14;
 for (VAR_13 = VAR_11->cmd_len - VAR_11->act_ofs, VAR_14 = FUNC_0(VAR_11);
   VAR_13 > 0 ;
   VAR_13 -= FUNC_1(VAR_14), VAR_14 += FUNC_1(VAR_14)) {
  switch (VAR_14->opcode) {
   case 138:
    VAR_12->fw_flg |= VAR_0;
    break;
   case 136:
    VAR_12->fw_flg |= VAR_2;
    break;
   case 132:
    VAR_12->fw_flg |= VAR_6;
    VAR_12->fw_divert_port_compat = VAR_14->arg1;
    break;
   case 131:
    VAR_12->fw_flg |= VAR_7;
    VAR_12->fw_divert_port_compat = VAR_14->arg1;
    break;
   case 129:
    VAR_12->fw_flg |= VAR_9;
    VAR_12->fw_skipto_rule_compat = VAR_14->arg1;
    break;
   case 134:
    VAR_12->fw_flg |= VAR_4;
    VAR_12->fw_divert_port_compat = VAR_14->arg1;
    break;
   case 128:
    VAR_12->fw_flg |= VAR_10;
    VAR_12->fw_divert_port_compat = VAR_14->arg1;
    break;
   case 133:
   {
    ipfw_insn_sa *VAR_15 = (ipfw_insn_sa *)VAR_14;

    VAR_12->fw_flg |= VAR_5;
    VAR_12->fw_fwd_ip_compat.sin_len = VAR_15->sa.sin_len;
    VAR_12->fw_fwd_ip_compat.sin_family = VAR_15->sa.sin_family;
    VAR_12->fw_fwd_ip_compat.sin_port = VAR_15->sa.sin_port;
    VAR_12->fw_fwd_ip_compat.sin_addr = VAR_15->sa.sin_addr;

    break;
   }
   case 135:
    VAR_12->fw_flg |= VAR_3;
    break;
   case 130:
    VAR_12->fw_flg |= VAR_8;
    VAR_12->fw_reject_code_compat = VAR_14->arg1;
    break;
   case 137:
    VAR_12->fw_flg |= VAR_1;
    break;
   default:
    break;
  }
 }
}
