
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint16_t ;
struct lpfc_queue {int dummy; } ;
struct TYPE_2__ {struct lpfc_queue* dat_rq; int rq_ecount; int rq_esize; struct lpfc_queue* hdr_rq; struct lpfc_queue* els_wq; int wq_ecount; int wq_esize; struct lpfc_queue* mbx_wq; int mq_ecount; int mq_esize; struct lpfc_queue* els_cq; int cq_ecount; int cq_esize; struct lpfc_queue* mbx_cq; struct lpfc_queue** fcp_wq; struct lpfc_queue** fcp_cq; struct lpfc_queue** hba_eq; int eq_ecount; int eq_esize; void* fcp_cq_map; } ;
struct lpfc_hba {int cfg_fcp_io_channel; TYPE_1__ sli4_hba; } ;


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
 void* FUNC_0 (int,int ) ;
 int FUNC_1 (struct lpfc_hba*,int ,int ,char*,...) ;
 struct lpfc_queue* FUNC_2 (struct lpfc_hba*,int ,int ) ;
 int FUNC_3 (struct lpfc_hba*) ;

int
FUNC_4(struct lpfc_hba *VAR_11)
{
 struct lpfc_queue *VAR_12;
 int VAR_13;




 if (!VAR_11->cfg_fcp_io_channel)
  return -VAR_1;

 VAR_11->sli4_hba.mq_esize = VAR_6;
 VAR_11->sli4_hba.mq_ecount = VAR_5;
 VAR_11->sli4_hba.wq_esize = VAR_10;
 VAR_11->sli4_hba.wq_ecount = VAR_9;
 VAR_11->sli4_hba.rq_esize = VAR_8;
 VAR_11->sli4_hba.rq_ecount = VAR_7;

 VAR_11->sli4_hba.hba_eq = FUNC_0((sizeof(struct lpfc_queue *) *
    VAR_11->cfg_fcp_io_channel), VAR_2);
 if (!VAR_11->sli4_hba.hba_eq) {
  FUNC_1(VAR_11, VAR_3, VAR_4,
   "2576 Failed allocate memory for "
   "fast-path EQ record array\n");
  goto out_error;
 }

 VAR_11->sli4_hba.fcp_cq = FUNC_0((sizeof(struct lpfc_queue *) *
    VAR_11->cfg_fcp_io_channel), VAR_2);
 if (!VAR_11->sli4_hba.fcp_cq) {
  FUNC_1(VAR_11, VAR_3, VAR_4,
    "2577 Failed allocate memory for fast-path "
    "CQ record array\n");
  goto out_error;
 }

 VAR_11->sli4_hba.fcp_wq = FUNC_0((sizeof(struct lpfc_queue *) *
    VAR_11->cfg_fcp_io_channel), VAR_2);
 if (!VAR_11->sli4_hba.fcp_wq) {
  FUNC_1(VAR_11, VAR_3, VAR_4,
    "2578 Failed allocate memory for fast-path "
    "WQ record array\n");
  goto out_error;
 }






 VAR_11->sli4_hba.fcp_cq_map = FUNC_0((sizeof(uint16_t) *
      VAR_11->cfg_fcp_io_channel), VAR_2);
 if (!VAR_11->sli4_hba.fcp_cq_map) {
  FUNC_1(VAR_11, VAR_3, VAR_4,
    "2545 Failed allocate memory for fast-path "
    "CQ map\n");
  goto out_error;
 }





 for (VAR_13 = 0; VAR_13 < VAR_11->cfg_fcp_io_channel; VAR_13++) {


  VAR_12 = FUNC_2(VAR_11, VAR_11->sli4_hba.eq_esize,
           VAR_11->sli4_hba.eq_ecount);
  if (!VAR_12) {
   FUNC_1(VAR_11, VAR_3, VAR_4,
     "0497 Failed allocate EQ (%d)\n", VAR_13);
   goto out_error;
  }
  VAR_11->sli4_hba.hba_eq[VAR_13] = VAR_12;


  VAR_12 = FUNC_2(VAR_11, VAR_11->sli4_hba.cq_esize,
           VAR_11->sli4_hba.cq_ecount);
  if (!VAR_12) {
   FUNC_1(VAR_11, VAR_3, VAR_4,
     "0499 Failed allocate fast-path FCP "
     "CQ (%d)\n", VAR_13);
   goto out_error;
  }
  VAR_11->sli4_hba.fcp_cq[VAR_13] = VAR_12;


  VAR_12 = FUNC_2(VAR_11, VAR_11->sli4_hba.wq_esize,
           VAR_11->sli4_hba.wq_ecount);
  if (!VAR_12) {
   FUNC_1(VAR_11, VAR_3, VAR_4,
     "0503 Failed allocate fast-path FCP "
     "WQ (%d)\n", VAR_13);
   goto out_error;
  }
  VAR_11->sli4_hba.fcp_wq[VAR_13] = VAR_12;
 }







 VAR_12 = FUNC_2(VAR_11, VAR_11->sli4_hba.cq_esize,
          VAR_11->sli4_hba.cq_ecount);
 if (!VAR_12) {
  FUNC_1(VAR_11, VAR_3, VAR_4,
    "0500 Failed allocate slow-path mailbox CQ\n");
  goto out_error;
 }
 VAR_11->sli4_hba.mbx_cq = VAR_12;


 VAR_12 = FUNC_2(VAR_11, VAR_11->sli4_hba.cq_esize,
          VAR_11->sli4_hba.cq_ecount);
 if (!VAR_12) {
  FUNC_1(VAR_11, VAR_3, VAR_4,
    "0501 Failed allocate slow-path ELS CQ\n");
  goto out_error;
 }
 VAR_11->sli4_hba.els_cq = VAR_12;
 VAR_12 = FUNC_2(VAR_11, VAR_11->sli4_hba.mq_esize,
          VAR_11->sli4_hba.mq_ecount);
 if (!VAR_12) {
  FUNC_1(VAR_11, VAR_3, VAR_4,
    "0505 Failed allocate slow-path MQ\n");
  goto out_error;
 }
 VAR_11->sli4_hba.mbx_wq = VAR_12;






 VAR_12 = FUNC_2(VAR_11, VAR_11->sli4_hba.wq_esize,
          VAR_11->sli4_hba.wq_ecount);
 if (!VAR_12) {
  FUNC_1(VAR_11, VAR_3, VAR_4,
    "0504 Failed allocate slow-path ELS WQ\n");
  goto out_error;
 }
 VAR_11->sli4_hba.els_wq = VAR_12;






 VAR_12 = FUNC_2(VAR_11, VAR_11->sli4_hba.rq_esize,
          VAR_11->sli4_hba.rq_ecount);
 if (!VAR_12) {
  FUNC_1(VAR_11, VAR_3, VAR_4,
    "0506 Failed allocate receive HRQ\n");
  goto out_error;
 }
 VAR_11->sli4_hba.hdr_rq = VAR_12;


 VAR_12 = FUNC_2(VAR_11, VAR_11->sli4_hba.rq_esize,
          VAR_11->sli4_hba.rq_ecount);
 if (!VAR_12) {
  FUNC_1(VAR_11, VAR_3, VAR_4,
    "0507 Failed allocate receive DRQ\n");
  goto out_error;
 }
 VAR_11->sli4_hba.dat_rq = VAR_12;

 return 0;

out_error:
 FUNC_3(VAR_11);
 return -VAR_0;
}
