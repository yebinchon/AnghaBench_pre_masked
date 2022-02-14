
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct lpfc_queue {int entry_repost; int EQ_max_eqe; int EQ_no_entry; int EQ_processed; int EQ_badstate; } ;
struct TYPE_2__ {struct lpfc_queue** hba_eq; } ;
struct lpfc_hba {scalar_t__ link_state; scalar_t__ intr_type; int hbalock; TYPE_1__ sli4_hba; } ;
struct lpfc_fcp_eq_hdl {int idx; int fcp_eq_in_use; struct lpfc_hba* phba; } ;
struct lpfc_eqe {int dummy; } ;
typedef int irqreturn_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 scalar_t__ VAR_8 ;
 int FUNC_2 (struct lpfc_hba*) ;
 int FUNC_3 (struct lpfc_hba*,int ,int ,char*) ;
 int FUNC_4 (struct lpfc_queue*) ;
 int FUNC_5 (struct lpfc_hba*,struct lpfc_queue*) ;
 struct lpfc_eqe* FUNC_6 (struct lpfc_queue*) ;
 int FUNC_7 (struct lpfc_queue*,int ) ;
 int FUNC_8 (struct lpfc_hba*,struct lpfc_eqe*,int) ;
 int FUNC_9 (int *,unsigned long) ;
 int FUNC_10 (int *,unsigned long) ;
 scalar_t__ FUNC_11 (int) ;

irqreturn_t
FUNC_12(int VAR_9, void *VAR_10)
{
 struct lpfc_hba *VAR_11;
 struct lpfc_fcp_eq_hdl *VAR_12;
 struct lpfc_queue *VAR_13;
 struct lpfc_eqe *VAR_14;
 unsigned long VAR_15;
 int VAR_16 = 0;
 int VAR_17;


 VAR_12 = (struct lpfc_fcp_eq_hdl *)VAR_10;
 VAR_11 = VAR_12->phba;
 VAR_17 = VAR_12->idx;

 if (FUNC_11(!VAR_11))
  return VAR_1;
 if (FUNC_11(!VAR_11->sli4_hba.hba_eq))
  return VAR_1;


 VAR_13 = VAR_11->sli4_hba.hba_eq[VAR_17];
 if (FUNC_11(!VAR_13))
  return VAR_1;

 if (VAR_8) {
  if (FUNC_0(&VAR_12->fcp_eq_in_use))
   FUNC_4(VAR_13);
  else {
   FUNC_1(&VAR_12->fcp_eq_in_use);
   return VAR_1;
  }
 }


 if (FUNC_11(FUNC_2(VAR_11))) {
  VAR_13->EQ_badstate++;

  FUNC_9(&VAR_11->hbalock, VAR_15);
  if (VAR_11->link_state < VAR_4)

   FUNC_5(VAR_11, VAR_13);
  FUNC_10(&VAR_11->hbalock, VAR_15);
  if (VAR_8)
   FUNC_1(&VAR_12->fcp_eq_in_use);
  return VAR_1;
 }




 while ((VAR_14 = FUNC_6(VAR_13))) {
  FUNC_8(VAR_11, VAR_14, VAR_17);
  if (!(++VAR_16 % VAR_13->entry_repost))
   FUNC_7(VAR_13, VAR_5);
  VAR_13->EQ_processed++;
 }


 if (VAR_16 > VAR_13->EQ_max_eqe)
  VAR_13->EQ_max_eqe = VAR_16;


 FUNC_7(VAR_13, VAR_6);

 if (FUNC_11(VAR_16 == 0)) {
  VAR_13->EQ_no_entry++;

  if (VAR_8) {
   FUNC_1(&VAR_12->fcp_eq_in_use);
   return VAR_1;
  }

  if (VAR_11->intr_type == VAR_7)

   FUNC_3(VAR_11, VAR_2, VAR_3,
     "0358 MSI-X interrupt with no EQE\n");
  else

   return VAR_1;
 }

 if (VAR_8)
  FUNC_1(&VAR_12->fcp_eq_in_use);
 return VAR_0;
}
