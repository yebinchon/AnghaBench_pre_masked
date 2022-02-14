
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_45__ TYPE_9__ ;
typedef struct TYPE_44__ TYPE_8__ ;
typedef struct TYPE_43__ TYPE_7__ ;
typedef struct TYPE_42__ TYPE_6__ ;
typedef struct TYPE_41__ TYPE_5__ ;
typedef struct TYPE_40__ TYPE_4__ ;
typedef struct TYPE_39__ TYPE_3__ ;
typedef struct TYPE_38__ TYPE_2__ ;
typedef struct TYPE_37__ TYPE_25__ ;
typedef struct TYPE_36__ TYPE_22__ ;
typedef struct TYPE_35__ TYPE_1__ ;
typedef struct TYPE_34__ TYPE_18__ ;
typedef struct TYPE_33__ TYPE_15__ ;
typedef struct TYPE_32__ TYPE_13__ ;
typedef struct TYPE_31__ TYPE_11__ ;
typedef struct TYPE_30__ TYPE_10__ ;


union lpfc_sli4_cfg_shdr {int response; } ;
typedef int uint32_t ;
struct TYPE_44__ {void* wqp; } ;
struct TYPE_45__ {TYPE_8__ sli4; } ;
struct lpfc_sli_ring {TYPE_9__ sli; } ;
struct lpfc_sli4_cfg_mhdr {int dummy; } ;
struct lpfc_sli {struct lpfc_sli_ring* ring; } ;
struct lpfc_mbx_query_fw_config {int dummy; } ;
struct TYPE_30__ {int fw_func_mode; int ulp0_mode; int ulp1_mode; int* fcp_cq_map; TYPE_25__** hba_eq; TYPE_15__** fcp_cq; TYPE_13__** fcp_wq; TYPE_15__* mbx_cq; TYPE_15__* els_cq; TYPE_22__* mbx_wq; TYPE_13__* els_wq; TYPE_18__* dat_rq; TYPE_18__* hdr_rq; } ;
struct lpfc_hba {int cfg_fcp_io_channel; int cfg_fcp_imax; TYPE_10__ sli4_hba; int mbox_mem_pool; struct lpfc_sli sli; } ;
struct TYPE_39__ {int function_mode; int ulp0_mode; int ulp1_mode; } ;
struct TYPE_40__ {TYPE_3__ rsp; } ;
struct TYPE_35__ {int cfg_shdr; } ;
struct TYPE_38__ {TYPE_1__ header; } ;
struct TYPE_41__ {TYPE_4__ query_fw_cfg; TYPE_2__ sli4_config; } ;
struct TYPE_42__ {TYPE_5__ un; } ;
struct TYPE_43__ {TYPE_6__ mqe; } ;
struct TYPE_37__ {int queue_id; } ;
struct TYPE_36__ {int queue_id; } ;
struct TYPE_34__ {int queue_id; } ;
struct TYPE_33__ {int queue_id; struct lpfc_sli_ring* pring; } ;
struct TYPE_32__ {int queue_id; } ;
struct TYPE_31__ {TYPE_7__ u; } ;
typedef TYPE_11__ LPFC_MBOXQ_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 size_t VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int FUNC_0 (int ,int *) ;
 int FUNC_1 (struct lpfc_hba*,TYPE_15__*,TYPE_25__*,int ,int ) ;
 int FUNC_2 (struct lpfc_hba*,TYPE_15__*) ;
 int FUNC_3 (struct lpfc_hba*,TYPE_25__*,int) ;
 int FUNC_4 (struct lpfc_hba*,TYPE_25__*) ;
 int VAR_20 ;
 int VAR_21 ;
 int FUNC_5 (struct lpfc_hba*,TYPE_22__*,TYPE_15__*,int ) ;
 int FUNC_6 (struct lpfc_hba*,TYPE_22__*) ;
 int FUNC_7 (struct lpfc_hba*,int ,int ,char*,...) ;
 int FUNC_8 (struct lpfc_hba*,TYPE_18__*,int ) ;
 int FUNC_9 (struct lpfc_hba*,TYPE_18__*,TYPE_18__*,TYPE_15__*,int ) ;
 int FUNC_10 (struct lpfc_hba*,TYPE_11__*,int ,int ,int,int ) ;
 int FUNC_11 (struct lpfc_hba*,TYPE_11__*,int ) ;
 int FUNC_12 (struct lpfc_hba*,TYPE_13__*,TYPE_15__*,int ) ;
 int FUNC_13 (struct lpfc_hba*,TYPE_13__*) ;
 scalar_t__ FUNC_14 (int ,int ) ;
 int FUNC_15 (TYPE_11__*,int ) ;

int
FUNC_16(struct lpfc_hba *VAR_22)
{
 struct lpfc_sli *VAR_23 = &VAR_22->sli;
 struct lpfc_sli_ring *VAR_24;
 int VAR_25 = -VAR_0;
 int VAR_26, VAR_27, VAR_28;
 int VAR_29 = 0;
 uint32_t VAR_30, VAR_31;
 union lpfc_sli4_cfg_shdr *VAR_32;
 LPFC_MBOXQ_t *VAR_33;
 uint32_t VAR_34;


 VAR_33 = (LPFC_MBOXQ_t *)FUNC_14(VAR_22->mbox_mem_pool, VAR_2);
 if (!VAR_33) {
  FUNC_7(VAR_22, VAR_3, VAR_5,
    "3249 Unable to allocate memory for "
    "QUERY_FW_CFG mailbox command\n");
  return -VAR_0;
 }
 VAR_34 = (sizeof(struct lpfc_mbx_query_fw_config) -
    sizeof(struct lpfc_sli4_cfg_mhdr));
 FUNC_10(VAR_22, VAR_33, VAR_12,
    VAR_11,
    VAR_34, VAR_14);

 VAR_25 = FUNC_11(VAR_22, VAR_33, VAR_18);

 VAR_32 = (union lpfc_sli4_cfg_shdr *)
   &VAR_33->u.mqe.un.sli4_config.header.cfg_shdr;
 VAR_30 = FUNC_0(VAR_21, &VAR_32->response);
 VAR_31 = FUNC_0(VAR_20, &VAR_32->response);
 if (VAR_30 || VAR_31 || VAR_25) {
  FUNC_7(VAR_22, VAR_3, VAR_5,
    "3250 QUERY_FW_CFG mailbox failed with status "
    "x%x add_status x%x, mbx status x%x\n",
    VAR_30, VAR_31, VAR_25);
  if (VAR_25 != VAR_19)
   FUNC_15(VAR_33, VAR_22->mbox_mem_pool);
  VAR_25 = -VAR_1;
  goto out_error;
 }

 VAR_22->sli4_hba.fw_func_mode =
   VAR_33->u.mqe.un.query_fw_cfg.rsp.function_mode;
 VAR_22->sli4_hba.ulp0_mode = VAR_33->u.mqe.un.query_fw_cfg.rsp.ulp0_mode;
 VAR_22->sli4_hba.ulp1_mode = VAR_33->u.mqe.un.query_fw_cfg.rsp.ulp1_mode;
 FUNC_7(VAR_22, VAR_4, VAR_5,
   "3251 QUERY_FW_CFG: func_mode:x%x, ulp0_mode:x%x, "
   "ulp1_mode:x%x\n", VAR_22->sli4_hba.fw_func_mode,
   VAR_22->sli4_hba.ulp0_mode, VAR_22->sli4_hba.ulp1_mode);

 if (VAR_25 != VAR_19)
  FUNC_15(VAR_33, VAR_22->mbox_mem_pool);






 if (VAR_22->cfg_fcp_io_channel && !VAR_22->sli4_hba.hba_eq) {
  FUNC_7(VAR_22, VAR_3, VAR_5,
    "3147 Fast-path EQs not allocated\n");
  VAR_25 = -VAR_0;
  goto out_error;
 }
 for (VAR_26 = 0; VAR_26 < VAR_22->cfg_fcp_io_channel; VAR_26++) {
  if (!VAR_22->sli4_hba.hba_eq[VAR_26]) {
   FUNC_7(VAR_22, VAR_3, VAR_5,
     "0522 Fast-path EQ (%d) not "
     "allocated\n", VAR_26);
   VAR_25 = -VAR_0;
   goto out_destroy_hba_eq;
  }
  VAR_25 = FUNC_3(VAR_22, VAR_22->sli4_hba.hba_eq[VAR_26],
    (VAR_22->cfg_fcp_imax / VAR_22->cfg_fcp_io_channel));
  if (VAR_25) {
   FUNC_7(VAR_22, VAR_3, VAR_5,
     "0523 Failed setup of fast-path EQ "
     "(%d), rc = 0x%x\n", VAR_26, VAR_25);
   goto out_destroy_hba_eq;
  }
  FUNC_7(VAR_22, VAR_4, VAR_5,
    "2584 HBA EQ setup: "
    "queue[%d]-id=%d\n", VAR_26,
    VAR_22->sli4_hba.hba_eq[VAR_26]->queue_id);
 }


 if (!VAR_22->sli4_hba.fcp_cq) {
  FUNC_7(VAR_22, VAR_3, VAR_5,
    "3148 Fast-path FCP CQ array not "
    "allocated\n");
  VAR_25 = -VAR_0;
  goto out_destroy_hba_eq;
 }

 for (VAR_27 = 0; VAR_27 < VAR_22->cfg_fcp_io_channel; VAR_27++) {
  if (!VAR_22->sli4_hba.fcp_cq[VAR_27]) {
   FUNC_7(VAR_22, VAR_3, VAR_5,
     "0526 Fast-path FCP CQ (%d) not "
     "allocated\n", VAR_27);
   VAR_25 = -VAR_0;
   goto out_destroy_fcp_cq;
  }
  VAR_25 = FUNC_1(VAR_22, VAR_22->sli4_hba.fcp_cq[VAR_27],
   VAR_22->sli4_hba.hba_eq[VAR_27], VAR_16, VAR_9);
  if (VAR_25) {
   FUNC_7(VAR_22, VAR_3, VAR_5,
     "0527 Failed setup of fast-path FCP "
     "CQ (%d), rc = 0x%x\n", VAR_27, VAR_25);
   goto out_destroy_fcp_cq;
  }


  VAR_22->sli4_hba.fcp_cq_map[VAR_27] =
    VAR_22->sli4_hba.fcp_cq[VAR_27]->queue_id;

  FUNC_7(VAR_22, VAR_4, VAR_5,
    "2588 FCP CQ setup: cq[%d]-id=%d, "
    "parent seq[%d]-id=%d\n",
    VAR_27,
    VAR_22->sli4_hba.fcp_cq[VAR_27]->queue_id,
    VAR_27,
    VAR_22->sli4_hba.hba_eq[VAR_27]->queue_id);
 }


 if (!VAR_22->sli4_hba.fcp_wq) {
  FUNC_7(VAR_22, VAR_3, VAR_5,
    "3149 Fast-path FCP WQ array not "
    "allocated\n");
  VAR_25 = -VAR_0;
  goto out_destroy_fcp_cq;
 }

 for (VAR_28 = 0; VAR_28 < VAR_22->cfg_fcp_io_channel; VAR_28++) {
  if (!VAR_22->sli4_hba.fcp_wq[VAR_28]) {
   FUNC_7(VAR_22, VAR_3, VAR_5,
     "0534 Fast-path FCP WQ (%d) not "
     "allocated\n", VAR_28);
   VAR_25 = -VAR_0;
   goto out_destroy_fcp_wq;
  }
  VAR_25 = FUNC_12(VAR_22, VAR_22->sli4_hba.fcp_wq[VAR_28],
        VAR_22->sli4_hba.fcp_cq[VAR_28],
        VAR_9);
  if (VAR_25) {
   FUNC_7(VAR_22, VAR_3, VAR_5,
     "0535 Failed setup of fast-path FCP "
     "WQ (%d), rc = 0x%x\n", VAR_28, VAR_25);
   goto out_destroy_fcp_wq;
  }


  VAR_24 = &VAR_23->ring[VAR_17 + VAR_28];
  VAR_24->sli.sli4.wqp = (void *)VAR_22->sli4_hba.fcp_wq[VAR_28];
  VAR_22->sli4_hba.fcp_cq[VAR_28]->pring = VAR_24;

  FUNC_7(VAR_22, VAR_4, VAR_5,
    "2591 FCP WQ setup: wq[%d]-id=%d, "
    "parent cq[%d]-id=%d\n",
    VAR_28,
    VAR_22->sli4_hba.fcp_wq[VAR_28]->queue_id,
    VAR_29,
    VAR_22->sli4_hba.fcp_cq[VAR_28]->queue_id);
 }





 if (!VAR_22->sli4_hba.mbx_cq) {
  FUNC_7(VAR_22, VAR_3, VAR_5,
    "0528 Mailbox CQ not allocated\n");
  VAR_25 = -VAR_0;
  goto out_destroy_fcp_wq;
 }
 VAR_25 = FUNC_1(VAR_22, VAR_22->sli4_hba.mbx_cq,
   VAR_22->sli4_hba.hba_eq[0], VAR_13, VAR_10);
 if (VAR_25) {
  FUNC_7(VAR_22, VAR_3, VAR_5,
    "0529 Failed setup of slow-path mailbox CQ: "
    "rc = 0x%x\n", VAR_25);
  goto out_destroy_fcp_wq;
 }
 FUNC_7(VAR_22, VAR_4, VAR_5,
   "2585 MBX CQ setup: cq-id=%d, parent eq-id=%d\n",
   VAR_22->sli4_hba.mbx_cq->queue_id,
   VAR_22->sli4_hba.hba_eq[0]->queue_id);


 if (!VAR_22->sli4_hba.els_cq) {
  FUNC_7(VAR_22, VAR_3, VAR_5,
    "0530 ELS CQ not allocated\n");
  VAR_25 = -VAR_0;
  goto out_destroy_mbx_cq;
 }
 VAR_25 = FUNC_1(VAR_22, VAR_22->sli4_hba.els_cq,
   VAR_22->sli4_hba.hba_eq[0], VAR_16, VAR_6);
 if (VAR_25) {
  FUNC_7(VAR_22, VAR_3, VAR_5,
    "0531 Failed setup of slow-path ELS CQ: "
    "rc = 0x%x\n", VAR_25);
  goto out_destroy_mbx_cq;
 }
 FUNC_7(VAR_22, VAR_4, VAR_5,
   "2586 ELS CQ setup: cq-id=%d, parent eq-id=%d\n",
   VAR_22->sli4_hba.els_cq->queue_id,
   VAR_22->sli4_hba.hba_eq[0]->queue_id);






 if (!VAR_22->sli4_hba.mbx_wq) {
  FUNC_7(VAR_22, VAR_3, VAR_5,
    "0538 Slow-path MQ not allocated\n");
  VAR_25 = -VAR_0;
  goto out_destroy_els_cq;
 }
 VAR_25 = FUNC_5(VAR_22, VAR_22->sli4_hba.mbx_wq,
       VAR_22->sli4_hba.mbx_cq, VAR_10);
 if (VAR_25) {
  FUNC_7(VAR_22, VAR_3, VAR_5,
    "0539 Failed setup of slow-path MQ: "
    "rc = 0x%x\n", VAR_25);
  goto out_destroy_els_cq;
 }
 FUNC_7(VAR_22, VAR_4, VAR_5,
   "2589 MBX MQ setup: wq-id=%d, parent cq-id=%d\n",
   VAR_22->sli4_hba.mbx_wq->queue_id,
   VAR_22->sli4_hba.mbx_cq->queue_id);


 if (!VAR_22->sli4_hba.els_wq) {
  FUNC_7(VAR_22, VAR_3, VAR_5,
    "0536 Slow-path ELS WQ not allocated\n");
  VAR_25 = -VAR_0;
  goto out_destroy_mbx_wq;
 }
 VAR_25 = FUNC_12(VAR_22, VAR_22->sli4_hba.els_wq,
       VAR_22->sli4_hba.els_cq, VAR_6);
 if (VAR_25) {
  FUNC_7(VAR_22, VAR_3, VAR_5,
    "0537 Failed setup of slow-path ELS WQ: "
    "rc = 0x%x\n", VAR_25);
  goto out_destroy_mbx_wq;
 }


 VAR_24 = &VAR_23->ring[VAR_8];
 VAR_24->sli.sli4.wqp = (void *)VAR_22->sli4_hba.els_wq;
 VAR_22->sli4_hba.els_cq->pring = VAR_24;

 FUNC_7(VAR_22, VAR_4, VAR_5,
   "2590 ELS WQ setup: wq-id=%d, parent cq-id=%d\n",
   VAR_22->sli4_hba.els_wq->queue_id,
   VAR_22->sli4_hba.els_cq->queue_id);




 if (!VAR_22->sli4_hba.hdr_rq || !VAR_22->sli4_hba.dat_rq) {
  FUNC_7(VAR_22, VAR_3, VAR_5,
    "0540 Receive Queue not allocated\n");
  VAR_25 = -VAR_0;
  goto out_destroy_els_wq;
 }

 FUNC_8(VAR_22, VAR_22->sli4_hba.hdr_rq, VAR_7);
 FUNC_8(VAR_22, VAR_22->sli4_hba.dat_rq, VAR_7);

 VAR_25 = FUNC_9(VAR_22, VAR_22->sli4_hba.hdr_rq, VAR_22->sli4_hba.dat_rq,
       VAR_22->sli4_hba.els_cq, VAR_15);
 if (VAR_25) {
  FUNC_7(VAR_22, VAR_3, VAR_5,
    "0541 Failed setup of Receive Queue: "
    "rc = 0x%x\n", VAR_25);
  goto out_destroy_fcp_wq;
 }

 FUNC_7(VAR_22, VAR_4, VAR_5,
   "2592 USL RQ setup: hdr-rq-id=%d, dat-rq-id=%d "
   "parent cq-id=%d\n",
   VAR_22->sli4_hba.hdr_rq->queue_id,
   VAR_22->sli4_hba.dat_rq->queue_id,
   VAR_22->sli4_hba.els_cq->queue_id);
 return 0;

out_destroy_els_wq:
 FUNC_13(VAR_22, VAR_22->sli4_hba.els_wq);
out_destroy_mbx_wq:
 FUNC_6(VAR_22, VAR_22->sli4_hba.mbx_wq);
out_destroy_els_cq:
 FUNC_2(VAR_22, VAR_22->sli4_hba.els_cq);
out_destroy_mbx_cq:
 FUNC_2(VAR_22, VAR_22->sli4_hba.mbx_cq);
out_destroy_fcp_wq:
 for (--VAR_28; VAR_28 >= 0; VAR_28--)
  FUNC_13(VAR_22, VAR_22->sli4_hba.fcp_wq[VAR_28]);
out_destroy_fcp_cq:
 for (--VAR_27; VAR_27 >= 0; VAR_27--)
  FUNC_2(VAR_22, VAR_22->sli4_hba.fcp_cq[VAR_27]);
out_destroy_hba_eq:
 for (--VAR_26; VAR_26 >= 0; VAR_26--)
  FUNC_4(VAR_22, VAR_22->sli4_hba.hba_eq[VAR_26]);
out_error:
 return VAR_25;
}
