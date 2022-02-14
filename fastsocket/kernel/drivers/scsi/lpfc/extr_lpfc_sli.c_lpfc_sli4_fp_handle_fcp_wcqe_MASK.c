
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct lpfc_wcqe_complete {int parameter; int word3; int total_data_placed; } ;
struct TYPE_2__ {int iocb_event; } ;
struct lpfc_sli_ring {int ring_lock; TYPE_1__ stats; } ;
struct lpfc_queue {struct lpfc_sli_ring* pring; } ;
struct lpfc_iocbq {int iocb_flag; int (* iocb_cmpl ) (struct lpfc_hba*,struct lpfc_iocbq*,struct lpfc_iocbq*) ;} ;
struct lpfc_hba {int hbalock; int (* lpfc_rampdown_queue_depth ) (struct lpfc_hba*) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_0 (int ,struct lpfc_wcqe_complete*) ;
 int FUNC_1 (struct lpfc_hba*,int ,int ,char*,scalar_t__,...) ;
 int FUNC_2 (struct lpfc_hba*,struct lpfc_iocbq*,struct lpfc_iocbq*,struct lpfc_wcqe_complete*) ;
 struct lpfc_iocbq* FUNC_3 (struct lpfc_hba*,struct lpfc_sli_ring*,scalar_t__) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (int *,unsigned long) ;
 int FUNC_6 (struct lpfc_hba*) ;
 int FUNC_7 (struct lpfc_hba*,struct lpfc_iocbq*,struct lpfc_iocbq*) ;
 scalar_t__ FUNC_8 (int) ;

__attribute__((used)) static void
FUNC_9(struct lpfc_hba *VAR_9, struct lpfc_queue *VAR_10,
        struct lpfc_wcqe_complete *VAR_11)
{
 struct lpfc_sli_ring *VAR_12 = VAR_10->pring;
 struct lpfc_iocbq *VAR_13;
 struct lpfc_iocbq VAR_14;
 unsigned long VAR_15;


 if (FUNC_8(FUNC_0(VAR_8, VAR_11))) {



  if (((FUNC_0(VAR_8, VAR_11) ==
       VAR_2)) &&
      ((VAR_11->parameter & VAR_1) ==
       VAR_0))
   VAR_9->lpfc_rampdown_queue_depth(VAR_9);


  FUNC_1(VAR_9, VAR_3, VAR_4,
    "0373 FCP complete error: status=x%x, "
    "hw_status=x%x, total_data_specified=%d, "
    "parameter=x%x, word3=x%x\n",
    FUNC_0(VAR_8, VAR_11),
    FUNC_0(VAR_6, VAR_11),
    VAR_11->total_data_placed, VAR_11->parameter,
    VAR_11->word3);
 }


 FUNC_4(&VAR_12->ring_lock, VAR_15);
 VAR_12->stats.iocb_event++;
 VAR_13 = FUNC_3(VAR_9, VAR_12,
    FUNC_0(VAR_7, VAR_11));
 FUNC_5(&VAR_12->ring_lock, VAR_15);
 if (FUNC_8(!VAR_13)) {
  FUNC_1(VAR_9, VAR_3, VAR_4,
    "0374 FCP complete with no corresponding "
    "cmdiocb: iotag (%d)\n",
    FUNC_0(VAR_7, VAR_11));
  return;
 }
 if (FUNC_8(!VAR_13->iocb_cmpl)) {
  FUNC_1(VAR_9, VAR_3, VAR_4,
    "0375 FCP cmdiocb not callback function "
    "iotag: (%d)\n",
    FUNC_0(VAR_7, VAR_11));
  return;
 }


 FUNC_2(VAR_9, &VAR_14, VAR_13, VAR_11);

 if (VAR_13->iocb_flag & VAR_5) {
  FUNC_4(&VAR_9->hbalock, VAR_15);
  VAR_13->iocb_flag &= ~VAR_5;
  FUNC_5(&VAR_9->hbalock, VAR_15);
 }


 (VAR_13->iocb_cmpl)(VAR_9, VAR_13, &VAR_14);
}
