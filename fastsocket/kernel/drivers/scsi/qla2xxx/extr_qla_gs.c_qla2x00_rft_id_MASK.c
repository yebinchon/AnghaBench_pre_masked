
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
struct TYPE_20__ {int* fc4_types; int * port_id; } ;
struct TYPE_21__ {TYPE_6__ rft_id; } ;
struct ct_sns_req {TYPE_7__ req; } ;
struct TYPE_18__ {int al_pa; int area; int domain; } ;
struct TYPE_19__ {TYPE_4__ b; } ;
struct TYPE_22__ {TYPE_5__ d_id; struct qla_hw_data* hw; } ;
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
 int FUNC_2 (int ,TYPE_8__*,int,char*,...) ;
 int VAR_5 ;
 int FUNC_3 (TYPE_8__*,int *,struct ct_sns_rsp*,char*) ;
 int FUNC_4 (TYPE_8__*,int ,int ,int) ;
 struct ct_sns_req* FUNC_5 (int *,int ,int ) ;
 int FUNC_6 (TYPE_8__*) ;
 int * FUNC_7 (TYPE_8__*,int ,int ) ;

int
FUNC_8(scsi_qla_host_t *VAR_6)
{
 int VAR_7;
 struct qla_hw_data *VAR_8 = VAR_6->hw;
 ms_iocb_entry_t *VAR_9;
 struct ct_sns_req *VAR_10;
 struct ct_sns_rsp *VAR_11;

 if (FUNC_0(VAR_8) || FUNC_1(VAR_8))
  return FUNC_6(VAR_6);



 VAR_9 = VAR_8->isp_ops->prep_ms_iocb(VAR_6, VAR_3,
     VAR_4);


 VAR_10 = FUNC_5(&VAR_8->ct_sns->p.req, VAR_2,
     VAR_4);
 VAR_11 = &VAR_8->ct_sns->p.rsp;


 VAR_10->req.rft_id.port_id[0] = VAR_6->d_id.b.domain;
 VAR_10->req.rft_id.port_id[1] = VAR_6->d_id.b.area;
 VAR_10->req.rft_id.port_id[2] = VAR_6->d_id.b.al_pa;

 VAR_10->req.rft_id.fc4_types[2] = 0x01;


 VAR_7 = FUNC_4(VAR_6, VAR_8->ms_iocb, VAR_8->ms_iocb_dma,
     sizeof(ms_iocb_entry_t));
 if (VAR_7 != VAR_1) {

  FUNC_2(VAR_5, VAR_6, 0x2043,
      "RFT_ID issue IOCB failed (%d).\n", VAR_7);
 } else if (FUNC_3(VAR_6, VAR_9, VAR_11, "RFT_ID") !=
     VAR_1) {
  VAR_7 = VAR_0;
 } else {
  FUNC_2(VAR_5, VAR_6, 0x2044,
      "RFT_ID exiting normally.\n");
 }

 return (VAR_7);
}
