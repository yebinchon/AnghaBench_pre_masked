
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {int ulp_fw_name; int fw_name; } ;
struct TYPE_9__ {TYPE_2__ read_rev; } ;
struct lpfc_mqe {TYPE_3__ un; } ;
struct lpfc_hba {int dummy; } ;
struct TYPE_10__ {int mbxCommand; } ;
struct TYPE_7__ {struct lpfc_mqe mqe; TYPE_4__ mb; } ;
struct TYPE_11__ {TYPE_1__ u; } ;
typedef TYPE_4__ MAILBOX_t ;
typedef TYPE_5__ LPFC_MBOXQ_t ;



 int FUNC_0 (int ,int ,int) ;

void
FUNC_1(struct lpfc_hba *VAR_0, LPFC_MBOXQ_t *VAR_1)
{
 MAILBOX_t *VAR_2 = &VAR_1->u.mb;
 struct lpfc_mqe *VAR_3;

 switch (VAR_2->mbxCommand) {
 case 128:
   VAR_3 = &VAR_1->u.mqe;
  FUNC_0(VAR_3->un.read_rev.fw_name,
     VAR_3->un.read_rev.fw_name, 16);
  FUNC_0(VAR_3->un.read_rev.ulp_fw_name,
     VAR_3->un.read_rev.ulp_fw_name, 16);
  break;
 default:
  break;
 }
 return;
}
