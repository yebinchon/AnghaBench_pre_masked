
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct lpfc_vport {int fc_flag; } ;
struct lpfc_hba {int wait_4_mlo_maint_flg; int fc_topology; int hbalock; int link_flag; } ;
struct TYPE_4__ {int* varWords; } ;
struct TYPE_5__ {int mbxCommand; TYPE_1__ un; } ;
typedef TYPE_2__ MAILBOX_t ;


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
 int FUNC_0 (struct lpfc_hba*,int ,int ,char*,int,...) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static int FUNC_3(struct lpfc_hba *VAR_10,
 MAILBOX_t *VAR_11, struct lpfc_vport *VAR_12)
{

 switch (VAR_11->mbxCommand) {

 case 162:
 case 166:
 case 170:
 case 168:
 case 142:
 case 133:
 case 171:
 case 164:
 case 138:
 case 141:
 case 136:
  if (!(VAR_12->fc_flag & VAR_1)) {
   FUNC_0(VAR_10, VAR_3, VAR_5,
    "2743 Command 0x%x is illegal in on-line "
    "state\n",
    VAR_11->mbxCommand);
   return -VAR_0;
  }
 case 130:
 case 129:
 case 158:
 case 151:
 case 155:
 case 150:
 case 147:
 case 145:
 case 149:
 case 152:
 case 163:
 case 165:
 case 132:
 case 161:
 case 146:
 case 160:
 case 159:
 case 172:
 case 167:
 case 137:
 case 128:
 case 134:
 case 154:
 case 153:
 case 131:
 case 157:
 case 156:
 case 139:
  break;
 case 135:
  FUNC_0(VAR_10, VAR_2, VAR_4,
   "1226 mbox: set_variable 0x%x, 0x%x\n",
   VAR_11->un.varWords[0],
   VAR_11->un.varWords[1]);
  if ((VAR_11->un.varWords[0] == VAR_8)
   && (VAR_11->un.varWords[1] == 1)) {
   VAR_10->wait_4_mlo_maint_flg = 1;
  } else if (VAR_11->un.varWords[0] == VAR_9) {
   FUNC_1(&VAR_10->hbalock);
   VAR_10->link_flag &= ~VAR_7;
   FUNC_2(&VAR_10->hbalock);
   VAR_10->fc_topology = VAR_6;
  }
  break;
 case 148:
 case 144:
 case 143:
 case 169:
 case 140:
 default:
  FUNC_0(VAR_10, VAR_3, VAR_5,
   "2742 Unknown Command 0x%x\n",
   VAR_11->mbxCommand);
  return -VAR_0;
 }

 return 0;
}
