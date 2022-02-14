
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint32_t ;
struct lpfc_register {scalar_t__ word0; } ;
struct lpfc_queue {size_t hba_index; size_t host_index; int entry_count; int queue_id; TYPE_3__* phba; TYPE_1__* qe; } ;
struct lpfc_eqe {int dummy; } ;
struct TYPE_5__ {int EQCQDBregaddr; } ;
struct TYPE_6__ {scalar_t__ intr_type; TYPE_2__ sli4_hba; } ;
struct TYPE_4__ {struct lpfc_eqe* eqe; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,struct lpfc_register*,int) ;
 int FUNC_1 (int ,struct lpfc_eqe*,int ) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int) ;
 int FUNC_4 (scalar_t__,int ) ;

uint32_t
FUNC_5(struct lpfc_queue *VAR_11, bool VAR_12)
{
 uint32_t VAR_13 = 0;
 struct lpfc_eqe *VAR_14;
 struct lpfc_register VAR_15;


 if (FUNC_3(!VAR_11))
  return 0;


 while (VAR_11->hba_index != VAR_11->host_index) {
  VAR_14 = VAR_11->qe[VAR_11->host_index].eqe;
  FUNC_1(VAR_10, VAR_14, 0);
  VAR_13++;
  VAR_11->host_index = ((VAR_11->host_index + 1) % VAR_11->entry_count);
 }
 if (FUNC_3(VAR_13 == 0 && !VAR_12))
  return 0;


 VAR_15.word0 = 0;
 if (VAR_12) {
  FUNC_0(VAR_4, &VAR_15, 1);
  FUNC_0(VAR_5, &VAR_15, 1);
 }
 FUNC_0(VAR_8, &VAR_15, VAR_13);
 FUNC_0(VAR_9, &VAR_15, VAR_3);
 FUNC_0(VAR_6, &VAR_15,
   (VAR_11->queue_id >> VAR_1));
 FUNC_0(VAR_7, &VAR_15, VAR_11->queue_id);
 FUNC_4(VAR_15.word0, VAR_11->phba->sli4_hba.EQCQDBregaddr);

 if ((VAR_11->phba->intr_type == VAR_0) && (VAR_12 == VAR_2))
  FUNC_2(VAR_11->phba->sli4_hba.EQCQDBregaddr);
 return VAR_13;
}
