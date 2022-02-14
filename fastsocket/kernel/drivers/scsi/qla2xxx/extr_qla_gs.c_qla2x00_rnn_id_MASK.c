
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_22__ TYPE_8__ ;
typedef struct TYPE_21__ TYPE_7__ ;
typedef struct TYPE_20__ TYPE_6__ ;
typedef struct TYPE_19__ TYPE_5__ ;
typedef struct TYPE_18__ TYPE_4__ ;
typedef struct TYPE_17__ TYPE_3__ ;
typedef struct TYPE_16__ TYPE_2__ ;
typedef struct TYPE_15__ TYPE_1__ ;


struct qla_hw_data {int ms_iocb_dma; int ms_iocb; TYPE_3__* ct_sns; TYPE_1__* isp_ops; } ;
struct ct_sns_rsp {int dummy; } ;
struct TYPE_20__ {int node_name; int * port_id; } ;
struct TYPE_21__ {TYPE_6__ rnn_id; } ;
struct ct_sns_req {TYPE_7__ req; } ;
struct TYPE_18__ {int al_pa; int area; int domain; } ;
struct TYPE_19__ {TYPE_4__ b; } ;
struct TYPE_22__ {int node_name; TYPE_5__ d_id; struct qla_hw_data* hw; } ;
typedef TYPE_8__ scsi_qla_host_t ;
typedef int ms_iocb_entry_t ;
struct TYPE_16__ {struct ct_sns_rsp rsp; int req; } ;
struct TYPE_17__ {TYPE_2__ p; } ;
struct TYPE_15__ {int * (* prep_ms_iocb ) (TYPE_8__*,int ,int ) ;} ;


 scalar_t__ FUNC_0 (struct qla_hw_data*) ;
 scalar_t__ FUNC_1 (struct qla_hw_data*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_2 (int ,int ,int ) ;
 int FUNC_3 (int ,TYPE_8__*,int,char*,...) ;
 int VAR_6 ;
 int FUNC_4 (TYPE_8__*,int *,struct ct_sns_rsp*,char*) ;
 int FUNC_5 (TYPE_8__*,int ,int ,int) ;
 struct ct_sns_req* FUNC_6 (int *,int ,int ) ;
 int FUNC_7 (TYPE_8__*) ;
 int * FUNC_8 (TYPE_8__*,int ,int ) ;

int
FUNC_9(scsi_qla_host_t *VAR_7)
{
 int VAR_8;
 struct qla_hw_data *VAR_9 = VAR_7->hw;
 ms_iocb_entry_t *VAR_10;
 struct ct_sns_req *VAR_11;
 struct ct_sns_rsp *VAR_12;

 if (FUNC_0(VAR_9) || FUNC_1(VAR_9))
  return FUNC_7(VAR_7);



 VAR_10 = VAR_9->isp_ops->prep_ms_iocb(VAR_7, VAR_3,
     VAR_4);


 VAR_11 = FUNC_6(&VAR_9->ct_sns->p.req, VAR_2,
     VAR_4);
 VAR_12 = &VAR_9->ct_sns->p.rsp;


 VAR_11->req.rnn_id.port_id[0] = VAR_7->d_id.b.domain;
 VAR_11->req.rnn_id.port_id[1] = VAR_7->d_id.b.area;
 VAR_11->req.rnn_id.port_id[2] = VAR_7->d_id.b.al_pa;

 FUNC_2(VAR_11->req.rnn_id.node_name, VAR_7->node_name, VAR_5);


 VAR_8 = FUNC_5(VAR_7, VAR_9->ms_iocb, VAR_9->ms_iocb_dma,
     sizeof(ms_iocb_entry_t));
 if (VAR_8 != VAR_1) {

  FUNC_3(VAR_6, VAR_7, 0x204d,
      "RNN_ID issue IOCB failed (%d).\n", VAR_8);
 } else if (FUNC_4(VAR_7, VAR_10, VAR_12, "RNN_ID") !=
     VAR_1) {
  VAR_8 = VAR_0;
 } else {
  FUNC_3(VAR_6, VAR_7, 0x204e,
      "RNN_ID exiting normally.\n");
 }

 return (VAR_8);
}
