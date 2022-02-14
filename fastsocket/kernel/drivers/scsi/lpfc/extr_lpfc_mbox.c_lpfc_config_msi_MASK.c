
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef void* uint32_t ;
struct lpfc_hba {int cfg_use_msi; int sli_rev; } ;
struct TYPE_9__ {int* messageNumberByHA; void** autoClearHA; void** attentionConditions; } ;
struct TYPE_10__ {TYPE_2__ varCfgMSI; } ;
struct TYPE_11__ {int mbxOwner; int mbxCommand; TYPE_3__ un; } ;
struct TYPE_8__ {TYPE_4__ mb; } ;
struct TYPE_12__ {TYPE_1__ u; } ;
typedef TYPE_4__ MAILBOX_t ;
typedef TYPE_5__ LPFC_MBOXQ_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 size_t VAR_5 ;
 int VAR_6 ;
 size_t VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_0 (struct lpfc_hba*,int ,int ,char*,int) ;
 int FUNC_1 (TYPE_5__*,int ,int) ;

int
FUNC_2(struct lpfc_hba *VAR_13, LPFC_MBOXQ_t *VAR_14)
{
 MAILBOX_t *VAR_15 = &VAR_14->u.mb;
 uint32_t VAR_16[2];


 if (VAR_13->cfg_use_msi != 2) {
  FUNC_0(VAR_13, VAR_9, VAR_10,
    "0475 Not configured for supporting MSI-X "
    "cfg_use_msi: 0x%x\n", VAR_13->cfg_use_msi);
  return -VAR_0;
 }

 if (VAR_13->sli_rev < 3) {
  FUNC_0(VAR_13, VAR_9, VAR_10,
    "0476 HBA not supporting SLI-3 or later "
    "SLI Revision: 0x%x\n", VAR_13->sli_rev);
  return -VAR_0;
 }


 FUNC_1(VAR_14, 0, sizeof(LPFC_MBOXQ_t));






 VAR_16[0] = (VAR_4 | VAR_6 | VAR_8 | VAR_1 |
      VAR_2 | VAR_3);
 VAR_16[1] = 0;

 VAR_15->un.varCfgMSI.attentionConditions[0] = VAR_16[0];
 VAR_15->un.varCfgMSI.attentionConditions[1] = VAR_16[1];
 VAR_15->un.varCfgMSI.messageNumberByHA[VAR_5^3] = 1;

 VAR_15->un.varCfgMSI.messageNumberByHA[VAR_7^3] = 1;


 VAR_15->un.varCfgMSI.autoClearHA[0] = VAR_16[0];
 VAR_15->un.varCfgMSI.autoClearHA[1] = VAR_16[1];


 VAR_15->un.varCfgMSI.autoClearHA[0] = 0;
 VAR_15->un.varCfgMSI.autoClearHA[1] = 0;


 VAR_15->mbxCommand = VAR_11;
 VAR_15->mbxOwner = VAR_12;

 return 0;
}
