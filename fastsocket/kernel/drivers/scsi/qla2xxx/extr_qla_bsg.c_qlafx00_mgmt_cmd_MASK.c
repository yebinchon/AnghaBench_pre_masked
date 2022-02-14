
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_29__ TYPE_9__ ;
typedef struct TYPE_28__ TYPE_8__ ;
typedef struct TYPE_27__ TYPE_7__ ;
typedef struct TYPE_26__ TYPE_6__ ;
typedef struct TYPE_25__ TYPE_5__ ;
typedef struct TYPE_24__ TYPE_4__ ;
typedef struct TYPE_23__ TYPE_3__ ;
typedef struct TYPE_22__ TYPE_2__ ;
typedef struct TYPE_21__ TYPE_1__ ;
typedef struct TYPE_20__ TYPE_10__ ;


typedef int uint8_t ;
struct qla_mt_iocb_rqst_fx00 {int flags; int func_type; int dataword; } ;
struct qla_hw_data {TYPE_7__* pdev; int srb_mempool; } ;
struct fc_port {int loop_id; TYPE_10__* vha; } ;
struct TYPE_28__ {int sg_cnt; int sg_list; } ;
struct TYPE_26__ {int sg_cnt; int sg_list; } ;
struct fc_bsg_job {TYPE_8__ request_payload; TYPE_6__ reply_payload; TYPE_3__* request; struct Scsi_Host* shost; } ;
struct Scsi_Host {int dummy; } ;
struct TYPE_25__ {struct fc_bsg_job* bsg_job; } ;
struct TYPE_29__ {char* name; int done; int free; TYPE_5__ u; int iocbs; int type; } ;
typedef TYPE_9__ srb_t ;
struct TYPE_24__ {int online; } ;
struct TYPE_20__ {TYPE_4__ flags; struct qla_hw_data* hw; } ;
typedef TYPE_10__ scsi_qla_host_t ;
struct TYPE_27__ {int dev; } ;
struct TYPE_21__ {int * vendor_cmd; } ;
struct TYPE_22__ {TYPE_1__ h_vendor; } ;
struct TYPE_23__ {TYPE_2__ rqst_data; } ;


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
 int FUNC_0 (int *,int ,int ,int ) ;
 int FUNC_1 (int *,int ,int ,int ) ;
 int FUNC_2 (struct fc_port*) ;
 int FUNC_3 (TYPE_9__*,int ) ;
 int FUNC_4 (scalar_t__,TYPE_10__*,int,char*,char*,int,int ,...) ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 int FUNC_5 (scalar_t__,TYPE_10__*,int,int *,int) ;
 int FUNC_6 (int ,TYPE_10__*,int,char*,...) ;
 int VAR_12 ;
 int FUNC_7 (int) ;
 struct fc_port* FUNC_8 (TYPE_10__*,int ) ;
 int VAR_13 ;
 int VAR_14 ;
 TYPE_9__* FUNC_9 (TYPE_10__*,struct fc_port*,int ) ;
 int FUNC_10 (TYPE_9__*) ;
 TYPE_10__* FUNC_11 (struct Scsi_Host*) ;

__attribute__((used)) static int
FUNC_12(struct fc_bsg_job *VAR_15)
{
 struct Scsi_Host *VAR_16 = VAR_15->shost;
 scsi_qla_host_t *VAR_17 = FUNC_11(VAR_16);
 struct qla_hw_data *VAR_18 = VAR_17->hw;
 int VAR_19 = (VAR_2 << 16);
 struct qla_mt_iocb_rqst_fx00 *VAR_20;
 srb_t *VAR_21;
 int VAR_22 = 0, VAR_23 = 0;
 struct fc_port *VAR_24;
 char *VAR_25 = "FC_BSG_HST_FX_MGMT";


 VAR_20 = (struct qla_mt_iocb_rqst_fx00 *)
     &VAR_15->request->rqst_data.h_vendor.vendor_cmd[1];


 FUNC_5(VAR_10 + VAR_11 , VAR_17, 0x70cf,
     (uint8_t *)VAR_20, sizeof(struct qla_mt_iocb_rqst_fx00));

 if (!VAR_17->flags.online) {
  FUNC_6(VAR_12, VAR_17, 0x70d0,
      "Host is not online.\n");
  VAR_19 = -VAR_3;
  goto done;
 }

 if (VAR_20->flags & VAR_7) {
  VAR_22 = FUNC_0(&VAR_18->pdev->dev,
      VAR_15->request_payload.sg_list,
      VAR_15->request_payload.sg_cnt, VAR_1);
  if (!VAR_22) {
   FUNC_6(VAR_12, VAR_17, 0x70c7,
       "dma_map_sg return %d for request\n", VAR_22);
   VAR_19 = -VAR_4;
   goto done;
  }
 }

 if (VAR_20->flags & VAR_8) {
  VAR_23 = FUNC_0(&VAR_18->pdev->dev,
      VAR_15->reply_payload.sg_list,
      VAR_15->reply_payload.sg_cnt, VAR_0);
  if (!VAR_23) {
   FUNC_6(VAR_12, VAR_17, 0x70c8,
       "dma_map_sg return %d for reply\n", VAR_23);
   VAR_19 = -VAR_4;
   goto done_unmap_req_sg;
  }
 }

 FUNC_4(VAR_10, VAR_17, 0x70c9,
     "request_sg_cnt: %x dma_request_sg_cnt: %x reply_sg_cnt:%x "
     "dma_reply_sg_cnt: %x\n", VAR_15->request_payload.sg_cnt,
     VAR_22, VAR_15->reply_payload.sg_cnt, VAR_23);






 VAR_24 = FUNC_8(VAR_17, VAR_5);
 if (!VAR_24) {
  FUNC_6(VAR_12, VAR_17, 0x70ca,
      "Failed to allocate fcport.\n");
  VAR_19 = -VAR_4;
  goto done_unmap_rsp_sg;
 }


 VAR_21 = FUNC_9(VAR_17, VAR_24, VAR_5);
 if (!VAR_21) {
  FUNC_6(VAR_12, VAR_17, 0x70cb,
      "qla2x00_get_sp failed.\n");
  VAR_19 = -VAR_4;
  goto done_free_fcport;
 }


 VAR_24->vha = VAR_17;
 VAR_24->loop_id = VAR_20->dataword;

 VAR_21->type = VAR_9;
 VAR_21->name = "bsg_fx_mgmt";
 VAR_21->iocbs = FUNC_7(VAR_22 + VAR_23);
 VAR_21->u.bsg_job = VAR_15;
 VAR_21->free = VAR_14;
 VAR_21->done = VAR_13;

 FUNC_4(VAR_10, VAR_17, 0x70cc,
     "bsg rqst type: %s fx_mgmt_type: %x id=%x\n",
     VAR_25, VAR_20->func_type, VAR_24->loop_id);

 VAR_19 = FUNC_10(VAR_21);
 if (VAR_19 != VAR_6) {
  FUNC_6(VAR_12, VAR_17, 0x70cd,
      "qla2x00_start_sp failed=%d.\n", VAR_19);
  FUNC_3(VAR_21, VAR_18->srb_mempool);
  VAR_19 = -VAR_3;
  goto done_free_fcport;
 }
 return VAR_19;

done_free_fcport:
 FUNC_2(VAR_24);

done_unmap_rsp_sg:
 if (VAR_20->flags & VAR_8)
  FUNC_1(&VAR_18->pdev->dev,
      VAR_15->reply_payload.sg_list,
      VAR_15->reply_payload.sg_cnt, VAR_0);
done_unmap_req_sg:
 if (VAR_20->flags & VAR_7)
  FUNC_1(&VAR_18->pdev->dev,
      VAR_15->request_payload.sg_list,
      VAR_15->request_payload.sg_cnt, VAR_1);

done:
 return VAR_19;
}
