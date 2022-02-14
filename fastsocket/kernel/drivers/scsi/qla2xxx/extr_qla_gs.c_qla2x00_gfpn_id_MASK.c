
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_28__ TYPE_9__ ;
typedef struct TYPE_27__ TYPE_8__ ;
typedef struct TYPE_26__ TYPE_7__ ;
typedef struct TYPE_25__ TYPE_6__ ;
typedef struct TYPE_24__ TYPE_5__ ;
typedef struct TYPE_23__ TYPE_4__ ;
typedef struct TYPE_22__ TYPE_3__ ;
typedef struct TYPE_21__ TYPE_2__ ;
typedef struct TYPE_20__ TYPE_1__ ;
typedef struct TYPE_19__ TYPE_11__ ;
typedef struct TYPE_18__ TYPE_10__ ;


typedef size_t uint16_t ;
struct TYPE_27__ {scalar_t__ rsvd_1; int al_pa; int area; int domain; } ;
struct TYPE_28__ {TYPE_8__ b; } ;
struct TYPE_18__ {TYPE_9__ d_id; int fabric_port_name; } ;
typedef TYPE_10__ sw_info_t ;
struct qla_hw_data {size_t max_fibre_devices; int ms_iocb_dma; int ms_iocb; TYPE_3__* ct_sns; TYPE_1__* isp_ops; } ;
struct TYPE_25__ {int port_name; } ;
struct TYPE_26__ {TYPE_6__ gfpn_id; } ;
struct ct_sns_rsp {TYPE_7__ rsp; } ;
struct TYPE_23__ {int * port_id; } ;
struct TYPE_24__ {TYPE_4__ port_id; } ;
struct ct_sns_req {TYPE_5__ req; } ;
struct TYPE_19__ {struct qla_hw_data* hw; } ;
typedef TYPE_11__ scsi_qla_host_t ;
typedef int ms_iocb_entry_t ;
struct TYPE_21__ {struct ct_sns_rsp rsp; int req; } ;
struct TYPE_22__ {TYPE_2__ p; } ;
struct TYPE_20__ {int * (* prep_ms_iocb ) (TYPE_11__*,int ,int ) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct qla_hw_data*) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (int ,int ,int ) ;
 int FUNC_2 (int ,TYPE_11__*,int,char*,int) ;
 int VAR_6 ;
 int FUNC_3 (TYPE_11__*,int *,struct ct_sns_rsp*,char*) ;
 int FUNC_4 (TYPE_11__*,int ,int ,int) ;
 struct ct_sns_req* FUNC_5 (int *,int ,int ) ;
 int * FUNC_6 (TYPE_11__*,int ,int ) ;

int
FUNC_7(scsi_qla_host_t *VAR_7, sw_info_t *VAR_8)
{
 int VAR_9 = VAR_4;
 uint16_t VAR_10;
 struct qla_hw_data *VAR_11 = VAR_7->hw;
 ms_iocb_entry_t *VAR_12;
 struct ct_sns_req *VAR_13;
 struct ct_sns_rsp *VAR_14;

 if (!FUNC_0(VAR_11))
  return VAR_3;

 for (VAR_10 = 0; VAR_10 < VAR_11->max_fibre_devices; VAR_10++) {


  VAR_12 = VAR_11->isp_ops->prep_ms_iocb(VAR_7, VAR_1,
      VAR_2);


  VAR_13 = FUNC_5(&VAR_11->ct_sns->p.req, VAR_0,
      VAR_2);
  VAR_14 = &VAR_11->ct_sns->p.rsp;


  VAR_13->req.port_id.port_id[0] = VAR_8[VAR_10].d_id.b.domain;
  VAR_13->req.port_id.port_id[1] = VAR_8[VAR_10].d_id.b.area;
  VAR_13->req.port_id.port_id[2] = VAR_8[VAR_10].d_id.b.al_pa;


  VAR_9 = FUNC_4(VAR_7, VAR_11->ms_iocb, VAR_11->ms_iocb_dma,
      sizeof(ms_iocb_entry_t));
  if (VAR_9 != VAR_4) {

   FUNC_2(VAR_6, VAR_7, 0x2023,
       "GFPN_ID issue IOCB failed (%d).\n", VAR_9);
   break;
  } else if (FUNC_3(VAR_7, VAR_12, VAR_14,
      "GFPN_ID") != VAR_4) {
   VAR_9 = VAR_3;
   break;
  } else {

   FUNC_1(VAR_8[VAR_10].fabric_port_name,
       VAR_14->rsp.gfpn_id.port_name, VAR_5);
  }


  if (VAR_8[VAR_10].d_id.b.rsvd_1 != 0)
   break;
 }

 return (VAR_9);
}
