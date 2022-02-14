
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int uint32_t ;
struct lpfc_sli {int * mbox_active; int sli_flag; int mbox_tmo; } ;
struct lpfc_hba {int link_state; int hbalock; int link_flag; TYPE_1__* pport; int HAregaddr; int mbox_mem_pool; int HCregaddr; struct lpfc_sli sli; } ;
struct TYPE_7__ {int mbox_cmpl; } ;
struct TYPE_6__ {int stopped; int port_state; } ;
typedef TYPE_2__ LPFC_MBOXQ_t ;


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
 int VAR_12 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (struct lpfc_hba*) ;
 int FUNC_2 (struct lpfc_hba*,TYPE_2__*) ;
 int FUNC_3 (struct lpfc_hba*,int ,int ,char*,int,...) ;
 scalar_t__ FUNC_4 (int ,int*) ;
 int VAR_13 ;
 int FUNC_5 (struct lpfc_hba*,TYPE_2__*,int ) ;
 int FUNC_6 (int) ;
 scalar_t__ FUNC_7 (int ,int ) ;
 int FUNC_8 (TYPE_2__*,int ) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (int,int ) ;

int
FUNC_13(struct lpfc_hba *VAR_14)
{
 struct lpfc_sli *VAR_15;
 LPFC_MBOXQ_t *VAR_16;
 uint32_t VAR_17;
 uint32_t VAR_18;
 int VAR_19;
 int VAR_20 = 0;

 VAR_15 = &VAR_14->sli;


 FUNC_3(VAR_14, VAR_4, VAR_5,
   "0329 Kill HBA Data: x%x x%x\n",
   VAR_14->pport->port_state, VAR_15->sli_flag);

 VAR_16 = (LPFC_MBOXQ_t *) FUNC_7(VAR_14->mbox_mem_pool, VAR_0);
 if (!VAR_16)
  return 1;


 FUNC_10(&VAR_14->hbalock);
 if (FUNC_4(VAR_14->HCregaddr, &VAR_17)) {
  FUNC_11(&VAR_14->hbalock);
  FUNC_8(VAR_16, VAR_14->mbox_mem_pool);
  return 1;
 }
 VAR_17 &= ~VAR_2;
 FUNC_12(VAR_17, VAR_14->HCregaddr);
 FUNC_9(VAR_14->HCregaddr);
 VAR_14->link_flag |= VAR_9;
 FUNC_11(&VAR_14->hbalock);

 FUNC_2(VAR_14, VAR_16);
 VAR_16->mbox_cmpl = VAR_13;
 VAR_19 = FUNC_5(VAR_14, VAR_16, VAR_11);

 if (VAR_19 != VAR_12) {
  if (VAR_19 != VAR_10)
   FUNC_8(VAR_16, VAR_14->mbox_mem_pool);
  FUNC_3(VAR_14, VAR_3, VAR_5,
    "2752 KILL_BOARD command failed retval %d\n",
    VAR_19);
  FUNC_10(&VAR_14->hbalock);
  VAR_14->link_flag &= ~VAR_9;
  FUNC_11(&VAR_14->hbalock);
  return 1;
 }

 FUNC_10(&VAR_14->hbalock);
 VAR_15->sli_flag &= ~VAR_7;
 FUNC_11(&VAR_14->hbalock);

 FUNC_8(VAR_16, VAR_14->mbox_mem_pool);






 if (FUNC_4(VAR_14->HAregaddr, &VAR_18))
  return 1;
 while ((VAR_20++ < 30) && !(VAR_18 & VAR_1)) {
  FUNC_6(100);
  if (FUNC_4(VAR_14->HAregaddr, &VAR_18))
   return 1;
 }

 FUNC_0(&VAR_15->mbox_tmo);
 if (VAR_18 & VAR_1) {
  FUNC_12(VAR_1, VAR_14->HAregaddr);
  VAR_14->pport->stopped = 1;
 }
 FUNC_10(&VAR_14->hbalock);
 VAR_15->sli_flag &= ~VAR_8;
 VAR_15->mbox_active = ((void*)0);
 VAR_14->link_flag &= ~VAR_9;
 FUNC_11(&VAR_14->hbalock);

 FUNC_1(VAR_14);
 VAR_14->link_state = VAR_6;

 return VAR_18 & VAR_1 ? 0 : 1;
}
