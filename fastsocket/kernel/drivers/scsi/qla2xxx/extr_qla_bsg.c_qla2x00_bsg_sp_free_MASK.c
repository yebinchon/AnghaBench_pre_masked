
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_19__ TYPE_8__ ;
typedef struct TYPE_18__ TYPE_7__ ;
typedef struct TYPE_17__ TYPE_6__ ;
typedef struct TYPE_16__ TYPE_5__ ;
typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;
typedef struct TYPE_11__ TYPE_10__ ;


struct scsi_qla_host {struct qla_hw_data* hw; } ;
struct qla_mt_iocb_rqst_fx00 {int flags; } ;
struct qla_hw_data {TYPE_6__* pdev; } ;
struct TYPE_18__ {int sg_cnt; int sg_list; } ;
struct TYPE_16__ {int sg_cnt; int sg_list; } ;
struct fc_bsg_job {TYPE_7__ reply_payload; TYPE_5__ request_payload; TYPE_4__* request; } ;
struct TYPE_12__ {struct fc_bsg_job* bsg_job; } ;
struct TYPE_19__ {scalar_t__ type; TYPE_10__* fcport; TYPE_1__ u; } ;
typedef TYPE_8__ srb_t ;
struct TYPE_17__ {int dev; } ;
struct TYPE_13__ {int * vendor_cmd; } ;
struct TYPE_14__ {TYPE_2__ h_vendor; } ;
struct TYPE_15__ {TYPE_3__ rqst_data; } ;
struct TYPE_11__ {struct scsi_qla_host* vha; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_0 (int *,int ,int ,int ) ;
 int FUNC_1 (TYPE_10__*) ;
 int FUNC_2 (struct scsi_qla_host*,TYPE_8__*) ;

void
FUNC_3(void *VAR_7, void *VAR_8)
{
 srb_t *VAR_9 = (srb_t *)VAR_8;
 struct scsi_qla_host *VAR_10 = VAR_9->fcport->vha;
 struct fc_bsg_job *VAR_11 = VAR_9->u.bsg_job;
 struct qla_hw_data *VAR_12 = VAR_10->hw;
 struct qla_mt_iocb_rqst_fx00 *VAR_13;

 if (VAR_9->type == VAR_6) {
  VAR_13 = (struct qla_mt_iocb_rqst_fx00 *)
      &VAR_11->request->rqst_data.h_vendor.vendor_cmd[1];

  if (VAR_13->flags & VAR_4)
   FUNC_0(&VAR_12->pdev->dev,
       VAR_11->request_payload.sg_list,
       VAR_11->request_payload.sg_cnt, VAR_1);

  if (VAR_13->flags & VAR_5)
   FUNC_0(&VAR_12->pdev->dev,
       VAR_11->reply_payload.sg_list,
       VAR_11->reply_payload.sg_cnt, VAR_0);
 } else {
  FUNC_0(&VAR_12->pdev->dev, VAR_11->request_payload.sg_list,
      VAR_11->request_payload.sg_cnt, VAR_1);

  FUNC_0(&VAR_12->pdev->dev, VAR_11->reply_payload.sg_list,
      VAR_11->reply_payload.sg_cnt, VAR_0);
 }

 if (VAR_9->type == VAR_2 ||
     VAR_9->type == VAR_6 ||
     VAR_9->type == VAR_3)
  FUNC_1(VAR_9->fcport);
 FUNC_2(VAR_10, VAR_9);
}
