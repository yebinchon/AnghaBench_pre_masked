
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_22__ TYPE_7__ ;
typedef struct TYPE_21__ TYPE_6__ ;
typedef struct TYPE_20__ TYPE_5__ ;
typedef struct TYPE_19__ TYPE_4__ ;
typedef struct TYPE_18__ TYPE_3__ ;
typedef struct TYPE_17__ TYPE_2__ ;
typedef struct TYPE_16__ TYPE_1__ ;


typedef scalar_t__ uint8_t ;
struct qla_hw_data {int ms_iocb_dma; int ms_iocb; TYPE_3__* ct_sns; TYPE_1__* isp_ops; } ;
struct ct_sns_rsp {int dummy; } ;
struct TYPE_19__ {scalar_t__ name_len; int sym_node_name; int node_name; } ;
struct TYPE_20__ {TYPE_4__ rsnn_nn; } ;
struct ct_sns_req {TYPE_5__ req; } ;
struct TYPE_21__ {int node_name; struct qla_hw_data* hw; } ;
typedef TYPE_6__ scsi_qla_host_t ;
struct TYPE_22__ {int req_bytecount; int dseg_req_length; } ;
typedef TYPE_7__ ms_iocb_entry_t ;
struct TYPE_17__ {struct ct_sns_rsp rsp; int req; } ;
struct TYPE_18__ {TYPE_2__ p; } ;
struct TYPE_16__ {TYPE_7__* (* prep_ms_iocb ) (TYPE_6__*,int ,int ) ;} ;


 scalar_t__ FUNC_0 (struct qla_hw_data*) ;
 scalar_t__ FUNC_1 (struct qla_hw_data*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (int ,int ,int ) ;
 int FUNC_4 (int ,TYPE_6__*,int,char*,...) ;
 int VAR_5 ;
 int FUNC_5 (TYPE_6__*,TYPE_7__*,struct ct_sns_rsp*,char*) ;
 int FUNC_6 (TYPE_6__*,int ) ;
 int FUNC_7 (TYPE_6__*,int ,int ,int) ;
 struct ct_sns_req* FUNC_8 (int *,int ,int ) ;
 scalar_t__ FUNC_9 (int ) ;
 TYPE_7__* FUNC_10 (TYPE_6__*,int ,int ) ;

int
FUNC_11(scsi_qla_host_t *VAR_6)
{
 int VAR_7;
 struct qla_hw_data *VAR_8 = VAR_6->hw;
 ms_iocb_entry_t *VAR_9;
 struct ct_sns_req *VAR_10;
 struct ct_sns_rsp *VAR_11;

 if (FUNC_0(VAR_8) || FUNC_1(VAR_8)) {
  FUNC_4(VAR_5, VAR_6, 0x2050,
      "RSNN_ID call unsupported on ISP2100/ISP2200.\n");
  return (VAR_1);
 }




 VAR_9 = VAR_8->isp_ops->prep_ms_iocb(VAR_6, 0, VAR_3);


 VAR_10 = FUNC_8(&VAR_8->ct_sns->p.req, VAR_2,
     VAR_3);
 VAR_11 = &VAR_8->ct_sns->p.rsp;


 FUNC_3(VAR_10->req.rsnn_nn.node_name, VAR_6->node_name, VAR_4);


 FUNC_6(VAR_6, VAR_10->req.rsnn_nn.sym_node_name);


 VAR_10->req.rsnn_nn.name_len =
     (uint8_t)FUNC_9(VAR_10->req.rsnn_nn.sym_node_name);


 VAR_9->req_bytecount =
     FUNC_2(24 + 1 + VAR_10->req.rsnn_nn.name_len);
 VAR_9->dseg_req_length = VAR_9->req_bytecount;


 VAR_7 = FUNC_7(VAR_6, VAR_8->ms_iocb, VAR_8->ms_iocb_dma,
     sizeof(ms_iocb_entry_t));
 if (VAR_7 != VAR_1) {

  FUNC_4(VAR_5, VAR_6, 0x2051,
      "RSNN_NN issue IOCB failed (%d).\n", VAR_7);
 } else if (FUNC_5(VAR_6, VAR_9, VAR_11, "RSNN_NN") !=
     VAR_1) {
  VAR_7 = VAR_0;
 } else {
  FUNC_4(VAR_5, VAR_6, 0x2052,
      "RSNN_NN exiting normally.\n");
 }

 return (VAR_7);
}
