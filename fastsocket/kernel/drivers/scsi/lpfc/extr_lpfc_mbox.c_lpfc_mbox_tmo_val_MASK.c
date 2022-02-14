
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int uint8_t ;
struct lpfc_hba {int dummy; } ;
struct TYPE_8__ {int mbxCommand; } ;
struct TYPE_7__ {TYPE_2__ mb; } ;
struct TYPE_9__ {TYPE_1__ u; } ;
typedef TYPE_2__ MAILBOX_t ;
typedef TYPE_3__ LPFC_MBOXQ_t ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct lpfc_hba*,TYPE_3__*) ;
 int FUNC_1 (struct lpfc_hba*,TYPE_3__*) ;

int
FUNC_2(struct lpfc_hba *VAR_6, LPFC_MBOXQ_t *VAR_7)
{
 MAILBOX_t *VAR_8 = &VAR_7->u.mb;
 uint8_t VAR_9, VAR_10;

 switch (VAR_8->mbxCommand) {
 case 130:
 case 135:
 case 131:
 case 136:
 case 137:
 case 129:
 case 134:
 case 128:
 case 133:
 case 138:
  return VAR_5;
 case 132:
  VAR_9 = FUNC_1(VAR_6, VAR_7);
  VAR_10 = FUNC_0(VAR_6, VAR_7);
  if (VAR_9 == VAR_2) {
   switch (VAR_10) {
   case 147:
   case 139:
   case 146:
   case 154:
   case 149:
   case 143:
   case 150:
   case 140:
   case 152:
   case 151:
   case 144:
   case 145:
   case 142:
   case 148:
   case 141:
    return VAR_0;
   }
  }
  if (VAR_9 == VAR_3) {
   switch (VAR_10) {
   case 153:
    return VAR_0;
   }
  }
  return VAR_1;
 }
 return VAR_4;
}
