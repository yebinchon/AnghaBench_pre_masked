
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_46__ TYPE_9__ ;
typedef struct TYPE_45__ TYPE_8__ ;
typedef struct TYPE_44__ TYPE_7__ ;
typedef struct TYPE_43__ TYPE_6__ ;
typedef struct TYPE_42__ TYPE_5__ ;
typedef struct TYPE_41__ TYPE_4__ ;
typedef struct TYPE_40__ TYPE_3__ ;
typedef struct TYPE_39__ TYPE_2__ ;
typedef struct TYPE_38__ TYPE_23__ ;
typedef struct TYPE_37__ TYPE_1__ ;
typedef struct TYPE_36__ TYPE_17__ ;
typedef struct TYPE_35__ TYPE_16__ ;
typedef struct TYPE_34__ TYPE_15__ ;
typedef struct TYPE_33__ TYPE_14__ ;
typedef struct TYPE_32__ TYPE_13__ ;
typedef struct TYPE_31__ TYPE_12__ ;
typedef struct TYPE_30__ TYPE_11__ ;
typedef struct TYPE_29__ TYPE_10__ ;


typedef scalar_t__ uint32_t ;
typedef scalar_t__ uint16_t ;
struct qla_hw_data {scalar_t__ current_topology; scalar_t__ operating_mode; TYPE_13__* pdev; int srb_mempool; int selflogin_lock; } ;
struct fc_bsg_reply {int dummy; } ;
struct TYPE_33__ {scalar_t__ sg_cnt; scalar_t__ payload_len; int sg_list; } ;
struct TYPE_34__ {scalar_t__ sg_cnt; scalar_t__ payload_len; int sg_list; } ;
struct fc_bsg_job {int reply_len; int (* job_done ) (struct fc_bsg_job*) ;TYPE_4__* reply; TYPE_14__ request_payload; TYPE_15__ reply_payload; TYPE_8__* request; struct Scsi_Host* shost; } ;
struct Scsi_Host {int dummy; } ;
struct TYPE_37__ {struct fc_bsg_job* bsg_job; } ;
struct TYPE_35__ {int done; int type; int free; TYPE_1__ u; } ;
typedef TYPE_16__ srb_t ;
struct TYPE_46__ {int domain; int area; int al_pa; } ;
struct TYPE_31__ {int b24; TYPE_9__ b; } ;
struct TYPE_38__ {scalar_t__ loop_id; TYPE_12__ d_id; TYPE_17__* vha; } ;
struct TYPE_29__ {int domain; int area; int al_pa; } ;
struct TYPE_30__ {TYPE_10__ b; } ;
struct TYPE_42__ {int online; } ;
struct TYPE_36__ {int device_flags; scalar_t__ self_login_loop_id; scalar_t__ loop_id; TYPE_23__ bidir_fcport; TYPE_11__ d_id; TYPE_5__ flags; int dpc_flags; struct qla_hw_data* hw; } ;
typedef TYPE_17__ scsi_qla_host_t ;
struct TYPE_43__ {scalar_t__* vendor_cmd; } ;
struct TYPE_44__ {TYPE_6__ h_vendor; } ;
struct TYPE_45__ {TYPE_7__ rqst_data; } ;
struct TYPE_39__ {scalar_t__* vendor_rsp; } ;
struct TYPE_40__ {TYPE_2__ vendor_reply; } ;
struct TYPE_41__ {int result; scalar_t__ reply_payload_rcv_len; TYPE_3__ reply_data; } ;
struct TYPE_32__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 scalar_t__ VAR_15 ;
 int FUNC_0 (struct qla_hw_data*) ;
 scalar_t__ VAR_16 ;
 int VAR_17 ;
 scalar_t__ FUNC_1 (int *,int ,scalar_t__,int ) ;
 int FUNC_2 (int *,int ,scalar_t__,int ) ;
 int FUNC_3 (TYPE_16__*,int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int ,TYPE_17__*,int,char*,...) ;
 int VAR_18 ;
 int FUNC_7 (int ,TYPE_17__*,int,char*,...) ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 scalar_t__ FUNC_8 (TYPE_17__*,TYPE_23__*,scalar_t__*) ;
 TYPE_16__* FUNC_9 (TYPE_17__*,TYPE_23__*,int ) ;
 scalar_t__ FUNC_10 (TYPE_16__*,TYPE_17__*,scalar_t__) ;
 TYPE_17__* FUNC_11 (struct Scsi_Host*) ;
 int FUNC_12 (struct fc_bsg_job*) ;
 scalar_t__ FUNC_13 (int ,int *) ;

__attribute__((used)) static int
FUNC_14(struct fc_bsg_job *VAR_22)
{
 struct Scsi_Host *VAR_23 = VAR_22->shost;
 scsi_qla_host_t *VAR_24 = FUNC_11(VAR_23);
 struct qla_hw_data *VAR_25 = VAR_24->hw;
 uint16_t VAR_26;
 uint32_t VAR_27 = VAR_11;
 uint16_t VAR_28 = 0;
 uint16_t VAR_29 = 0;
 uint16_t VAR_30 = 0;
 uint32_t VAR_31;
 srb_t *VAR_32 = ((void*)0);
 uint32_t VAR_33 = 0;
 uint32_t VAR_34 = 0;


 if (!FUNC_0(VAR_25)) {
  FUNC_7(VAR_19, VAR_24, 0x70a0,
   "This adapter is not supported\n");
  VAR_27 = VAR_9;
  goto done;
 }

 if (FUNC_13(VAR_13, &VAR_24->dpc_flags) ||
  FUNC_13(VAR_0, &VAR_24->dpc_flags) ||
  FUNC_13(VAR_14, &VAR_24->dpc_flags)) {
  VAR_27 = VAR_5;
  goto done;
 }


 if (!VAR_24->flags.online) {
  FUNC_7(VAR_19, VAR_24, 0x70a1,
   "Host is not online\n");
  VAR_27 = VAR_6;
  goto done;
 }


 if (VAR_24->device_flags & VAR_1) {
  FUNC_7(VAR_19, VAR_24, 0x70a2,
   "Cable is unplugged...\n");
  VAR_27 = VAR_7;
  goto done;
 }


 if (VAR_25->current_topology != VAR_15) {
  FUNC_7(VAR_19, VAR_24, 0x70a3,
   "Host is not connected to the switch\n");
  VAR_27 = VAR_7;
  goto done;
 }


 if (VAR_25->operating_mode != VAR_16) {
  FUNC_7(VAR_19, VAR_24, 0x70a4,
      "Host is operating mode is not P2p\n");
  VAR_27 = VAR_7;
  goto done;
 }

 VAR_26 = VAR_22->request->rqst_data.h_vendor.vendor_cmd[1];

 FUNC_4(&VAR_25->selflogin_lock);
 if (VAR_24->self_login_loop_id == 0) {

  VAR_24->bidir_fcport.vha = VAR_24;
  VAR_24->bidir_fcport.d_id.b.al_pa = VAR_24->d_id.b.al_pa;
  VAR_24->bidir_fcport.d_id.b.area = VAR_24->d_id.b.area;
  VAR_24->bidir_fcport.d_id.b.domain = VAR_24->d_id.b.domain;
  VAR_24->bidir_fcport.loop_id = VAR_24->loop_id;

  if (FUNC_8(VAR_24, &(VAR_24->bidir_fcport), &VAR_30)) {
   FUNC_7(VAR_19, VAR_24, 0x70a7,
       "Failed to login port %06X for bidirectional IOCB\n",
       VAR_24->bidir_fcport.d_id.b24);
   FUNC_5(&VAR_25->selflogin_lock);
   VAR_27 = VAR_8;
   goto done;
  }
  VAR_24->self_login_loop_id = VAR_30 - 1;

 }

 FUNC_5(&VAR_25->selflogin_lock);

 VAR_24->bidir_fcport.loop_id = VAR_24->self_login_loop_id;

 VAR_28 = FUNC_1(&VAR_25->pdev->dev,
  VAR_22->request_payload.sg_list,
  VAR_22->request_payload.sg_cnt,
  VAR_4);

 if (!VAR_28) {
  VAR_27 = VAR_10;
  goto done;
 }

 VAR_29 = FUNC_1(&VAR_25->pdev->dev,
  VAR_22->reply_payload.sg_list, VAR_22->reply_payload.sg_cnt,
  VAR_3);

 if (!VAR_29) {
  VAR_27 = VAR_10;
  goto done_unmap_req_sg;
 }

 if ((VAR_28 != VAR_22->request_payload.sg_cnt) ||
  (VAR_29 != VAR_22->reply_payload.sg_cnt)) {
  FUNC_6(VAR_18, VAR_24, 0x70a9,
      "Dma mapping resulted in different sg counts "
      "[request_sg_cnt: %x dma_request_sg_cnt: %x reply_sg_cnt: "
      "%x dma_reply_sg_cnt: %x]\n",
      VAR_22->request_payload.sg_cnt, VAR_28,
      VAR_22->reply_payload.sg_cnt, VAR_29);
  VAR_27 = VAR_10;
  goto done_unmap_sg;
 }

 if (VAR_33 != VAR_34) {
  VAR_27 = VAR_5;
  FUNC_7(VAR_19, VAR_24, 0x70aa,
      "req_data_len != rsp_data_len\n");
  goto done_unmap_sg;
 }

 VAR_33 = VAR_22->request_payload.payload_len;
 VAR_34 = VAR_22->reply_payload.payload_len;



 VAR_32 = FUNC_9(VAR_24, &(VAR_24->bidir_fcport), VAR_12);
 if (!VAR_32) {
  FUNC_6(VAR_18, VAR_24, 0x70ac,
      "Alloc SRB structure failed\n");
  VAR_27 = VAR_10;
  goto done_unmap_sg;
 }


 VAR_32->u.bsg_job = VAR_22;
 VAR_32->free = VAR_21;
 VAR_32->type = VAR_17;
 VAR_32->done = VAR_20;


 VAR_31 = VAR_29 + VAR_28;

 VAR_27 = FUNC_10(VAR_32, VAR_24, VAR_31);
 if (VAR_27 != VAR_11)
  goto done_free_srb;

 return VAR_27;

done_free_srb:
 FUNC_3(VAR_32, VAR_25->srb_mempool);
done_unmap_sg:
 FUNC_2(&VAR_25->pdev->dev,
     VAR_22->reply_payload.sg_list,
     VAR_22->reply_payload.sg_cnt, VAR_3);
done_unmap_req_sg:
 FUNC_2(&VAR_25->pdev->dev,
     VAR_22->request_payload.sg_list,
     VAR_22->request_payload.sg_cnt, VAR_4);
done:




 VAR_22->reply->reply_data.vendor_reply.vendor_rsp[0] = VAR_27;
 VAR_22->reply_len = sizeof(struct fc_bsg_reply);
 VAR_22->reply->reply_payload_rcv_len = 0;
 VAR_22->reply->result = (VAR_2) << 16;
 VAR_22->job_done(VAR_22);

 return 0;
}
