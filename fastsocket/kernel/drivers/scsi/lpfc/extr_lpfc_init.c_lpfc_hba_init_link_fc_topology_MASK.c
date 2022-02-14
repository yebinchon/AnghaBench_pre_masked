
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int uint32_t ;
struct lpfc_vport {int dummy; } ;
struct lpfc_hba {int lmt; scalar_t__ sli_rev; int cfg_suppress_link_up; int mbox_mem_pool; void* link_state; int HAregaddr; int HCregaddr; int cfg_link_speed; struct lpfc_vport* pport; } ;
struct TYPE_9__ {int mbxStatus; int mbxCommand; } ;
struct TYPE_8__ {TYPE_2__ mb; } ;
struct TYPE_10__ {int mbox_cmpl; struct lpfc_vport* vport; TYPE_1__ u; } ;
typedef TYPE_2__ MAILBOX_t ;
typedef TYPE_3__ LPFC_MBOXQ_t ;


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
 int VAR_11 ;
 void* VAR_12 ;
 int VAR_13 ;
 scalar_t__ VAR_14 ;
 scalar_t__ VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 int FUNC_0 (struct lpfc_hba*,TYPE_3__*,int ,int ) ;
 int FUNC_1 (struct lpfc_hba*,int ,int ,char*,int ,...) ;
 int FUNC_2 (struct lpfc_hba*) ;
 int VAR_27 ;
 int FUNC_3 (struct lpfc_hba*,TYPE_3__*,int ) ;
 TYPE_3__* FUNC_4 (int ,int ) ;
 int FUNC_5 (TYPE_3__*,int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int,int ) ;

int
FUNC_8(struct lpfc_hba *VAR_28, uint32_t VAR_29)
{
 struct lpfc_vport *VAR_30 = VAR_28->pport;
 LPFC_MBOXQ_t *VAR_31;
 MAILBOX_t *VAR_32;
 int VAR_33;

 VAR_31 = FUNC_4(VAR_28->mbox_mem_pool, VAR_2);
 if (!VAR_31) {
  VAR_28->link_state = VAR_12;
  return -VAR_1;
 }
 VAR_32 = &VAR_31->u.mb;
 VAR_31->vport = VAR_30;

 if ((VAR_28->cfg_link_speed > VAR_23) ||
     ((VAR_28->cfg_link_speed == VAR_18) &&
      !(VAR_28->lmt & VAR_6)) ||
     ((VAR_28->cfg_link_speed == VAR_19) &&
      !(VAR_28->lmt & VAR_7)) ||
     ((VAR_28->cfg_link_speed == VAR_20) &&
      !(VAR_28->lmt & VAR_8)) ||
     ((VAR_28->cfg_link_speed == VAR_21) &&
      !(VAR_28->lmt & VAR_9)) ||
     ((VAR_28->cfg_link_speed == VAR_16) &&
      !(VAR_28->lmt & VAR_4)) ||
     ((VAR_28->cfg_link_speed == VAR_17) &&
      !(VAR_28->lmt & VAR_5))) {

  FUNC_1(VAR_28, VAR_3, VAR_11,
   "1302 Invalid speed for this board:%d "
   "Reset link speed to auto.\n",
   VAR_28->cfg_link_speed);
   VAR_28->cfg_link_speed = VAR_22;
 }
 FUNC_0(VAR_28, VAR_31, VAR_29, VAR_28->cfg_link_speed);
 VAR_31->mbox_cmpl = VAR_27;
 if (VAR_28->sli_rev < VAR_15)
  FUNC_2(VAR_28);
 VAR_33 = FUNC_3(VAR_28, VAR_31, VAR_25);
 if ((VAR_33 != VAR_24) && (VAR_33 != VAR_26)) {
  FUNC_1(VAR_28, VAR_3, VAR_10,
   "0498 Adapter failed to init, mbxCmd x%x "
   "INIT_LINK, mbxStatus x%x\n",
   VAR_32->mbxCommand, VAR_32->mbxStatus);
  if (VAR_28->sli_rev <= VAR_14) {

   FUNC_7(0, VAR_28->HCregaddr);
   FUNC_6(VAR_28->HCregaddr);

   FUNC_7(0xffffffff, VAR_28->HAregaddr);
   FUNC_6(VAR_28->HAregaddr);
  }
  VAR_28->link_state = VAR_12;
  if (VAR_33 != VAR_24)
   FUNC_5(VAR_31, VAR_28->mbox_mem_pool);
  return -VAR_0;
 }
 VAR_28->cfg_suppress_link_up = VAR_13;

 return 0;
}
