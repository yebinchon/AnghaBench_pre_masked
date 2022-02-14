
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_7__ ;
typedef struct TYPE_15__ TYPE_6__ ;
typedef struct TYPE_14__ TYPE_5__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef int uint32_t ;
struct lpfc_hbq_init {int mask_count; int profile; TYPE_5__* hbqMasks; int logEntry; int headerLen; int ring_mask; int rn; int entry_count; } ;
struct lpfc_hbq_entry {int dummy; } ;
struct TYPE_12__ {int phys; } ;
struct lpfc_hba {TYPE_3__ hbqslimp; } ;
struct config_hbq_var {int hbqId; int numMask; int profile; TYPE_4__* hbqMasks; int hbqaddrHigh; scalar_t__ hbqaddrLow; int logEntry; int headerLen; int ringMask; int recvNotify; int entry_count; } ;
struct TYPE_11__ {struct config_hbq_var varCfgHbq; } ;
struct TYPE_15__ {int mbxOwner; int mbxCommand; TYPE_2__ un; } ;
struct TYPE_10__ {TYPE_6__ mb; } ;
struct TYPE_16__ {TYPE_1__ u; } ;
struct TYPE_14__ {int rctlmask; int rctlmatch; int tmask; int tmatch; } ;
struct TYPE_13__ {int rctlmask; int rctlmatch; int tmask; int tmatch; } ;
typedef TYPE_6__ MAILBOX_t ;
typedef TYPE_7__ LPFC_MBOXQ_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct config_hbq_var*,struct lpfc_hbq_init*) ;
 int FUNC_1 (struct config_hbq_var*,struct lpfc_hbq_init*) ;
 int FUNC_2 (struct config_hbq_var*,struct lpfc_hbq_init*) ;
 int FUNC_3 (TYPE_7__*,int ,int) ;
 int FUNC_4 (int ) ;
 scalar_t__ FUNC_5 (int ) ;

void
FUNC_6(struct lpfc_hba *VAR_2, uint32_t VAR_3,
   struct lpfc_hbq_init *VAR_4,
  uint32_t VAR_5, LPFC_MBOXQ_t *VAR_6)
{
 int VAR_7;
 MAILBOX_t *VAR_8 = &VAR_6->u.mb;
 struct config_hbq_var *VAR_9 = &VAR_8->un.varCfgHbq;

 FUNC_3(VAR_6, 0, sizeof (LPFC_MBOXQ_t));
 VAR_9->hbqId = VAR_3;
 VAR_9->entry_count = VAR_4->entry_count;
 VAR_9->recvNotify = VAR_4->rn;

 VAR_9->numMask = VAR_4->mask_count;

 VAR_9->profile = VAR_4->profile;


 VAR_9->ringMask = VAR_4->ring_mask;


 VAR_9->headerLen = VAR_4->headerLen;

 VAR_9->logEntry = VAR_4->logEntry;



 VAR_9->hbqaddrLow = FUNC_5(VAR_2->hbqslimp.phys) +
  VAR_5 * sizeof(struct lpfc_hbq_entry);
 VAR_9->hbqaddrHigh = FUNC_4(VAR_2->hbqslimp.phys);

 VAR_8->mbxCommand = VAR_0;
 VAR_8->mbxOwner = VAR_1;




 if (VAR_4->profile == 2)
  FUNC_0(VAR_9, VAR_4);
 else if (VAR_4->profile == 3)
  FUNC_1(VAR_9, VAR_4);
 else if (VAR_4->profile == 5)
  FUNC_2(VAR_9, VAR_4);


 if (!VAR_4->mask_count)
  return;


 for (VAR_7 = 0; VAR_7 < VAR_4->mask_count; VAR_7++) {
  VAR_9->hbqMasks[VAR_7].tmatch = VAR_4->hbqMasks[VAR_7].tmatch;
  VAR_9->hbqMasks[VAR_7].tmask = VAR_4->hbqMasks[VAR_7].tmask;
  VAR_9->hbqMasks[VAR_7].rctlmatch = VAR_4->hbqMasks[VAR_7].rctlmatch;
  VAR_9->hbqMasks[VAR_7].rctlmask = VAR_4->hbqMasks[VAR_7].rctlmask;
 }

 return;
}
