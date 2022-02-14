
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef size_t uint32_t ;
typedef size_t uint16_t ;
struct lpfc_queue {size_t queue_id; int entry_repost; int CQ_max_cqe; } ;
struct TYPE_4__ {int sli_flag; } ;
struct TYPE_3__ {size_t* fcp_cq_map; struct lpfc_queue** fcp_cq; int * hba_eq; } ;
struct lpfc_hba {TYPE_2__ sli; TYPE_1__ sli4_hba; } ;
struct lpfc_eqe {int dummy; } ;
struct lpfc_cqe {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_0 (int ,struct lpfc_eqe*) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_1 (struct lpfc_hba*,int ,int ,char*,...) ;
 struct lpfc_cqe* FUNC_2 (struct lpfc_queue*) ;
 int FUNC_3 (struct lpfc_queue*,int ) ;
 int FUNC_4 (struct lpfc_hba*,struct lpfc_queue*,struct lpfc_cqe*) ;
 int FUNC_5 (struct lpfc_hba*,struct lpfc_eqe*,int ) ;
 int FUNC_6 (struct lpfc_hba*) ;
 scalar_t__ FUNC_7 (int) ;

__attribute__((used)) static void
FUNC_8(struct lpfc_hba *VAR_9, struct lpfc_eqe *VAR_10,
   uint32_t VAR_11)
{
 struct lpfc_queue *VAR_12;
 struct lpfc_cqe *VAR_13;
 bool VAR_14 = 0;
 uint16_t VAR_15;
 int VAR_16 = 0;

 if (FUNC_7(FUNC_0(VAR_6, VAR_10) != 0)) {
  FUNC_1(VAR_9, VAR_0, VAR_2,
    "0366 Not a valid completion "
    "event: majorcode=x%x, minorcode=x%x\n",
    FUNC_0(VAR_6, VAR_10),
    FUNC_0(VAR_7, VAR_10));
  return;
 }


 VAR_15 = FUNC_0(VAR_8, VAR_10);


 if (FUNC_7(VAR_15 != VAR_9->sli4_hba.fcp_cq_map[VAR_11])) {
  FUNC_5(VAR_9, VAR_10,
   VAR_9->sli4_hba.hba_eq[VAR_11]);
  return;
 }

 if (FUNC_7(!VAR_9->sli4_hba.fcp_cq)) {
  FUNC_1(VAR_9, VAR_1, VAR_2,
    "3146 Fast-path completion queues "
    "does not exist\n");
  return;
 }
 VAR_12 = VAR_9->sli4_hba.fcp_cq[VAR_11];
 if (FUNC_7(!VAR_12)) {
  if (VAR_9->sli.sli_flag & VAR_5)
   FUNC_1(VAR_9, VAR_0, VAR_2,
     "0367 Fast-path completion queue "
     "(%d) does not exist\n", VAR_11);
  return;
 }

 if (FUNC_7(VAR_15 != VAR_12->queue_id)) {
  FUNC_1(VAR_9, VAR_0, VAR_2,
    "0368 Miss-matched fast-path completion "
    "queue identifier: eqcqid=%d, fcpcqid=%d\n",
    VAR_15, VAR_12->queue_id);
  return;
 }


 while ((VAR_13 = FUNC_2(VAR_12))) {
  VAR_14 |= FUNC_4(VAR_9, VAR_12, VAR_13);
  if (!(++VAR_16 % VAR_12->entry_repost))
   FUNC_3(VAR_12, VAR_3);
 }


 if (VAR_16 > VAR_12->CQ_max_cqe)
  VAR_12->CQ_max_cqe = VAR_16;


 if (FUNC_7(VAR_16 == 0))
  FUNC_1(VAR_9, VAR_0, VAR_2,
    "0369 No entry from fast-path completion "
    "queue fcpcqid=%d\n", VAR_12->queue_id);


 FUNC_3(VAR_12, VAR_4);


 if (VAR_14)
  FUNC_6(VAR_9);
}
