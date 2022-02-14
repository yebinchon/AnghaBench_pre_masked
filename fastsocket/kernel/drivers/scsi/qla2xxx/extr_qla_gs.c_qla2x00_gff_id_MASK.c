
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


typedef int uint8_t ;
typedef size_t uint16_t ;
struct TYPE_27__ {scalar_t__ rsvd_1; int al_pa; int area; int domain; } ;
struct TYPE_28__ {TYPE_8__ b; } ;
struct TYPE_18__ {TYPE_9__ d_id; int fc4_type; } ;
typedef TYPE_10__ sw_info_t ;
struct qla_hw_data {size_t max_fibre_devices; int ms_iocb_dma; int ms_iocb; TYPE_3__* ct_sns; TYPE_1__* isp_ops; } ;
struct TYPE_25__ {int* fc4_features; } ;
struct TYPE_26__ {TYPE_6__ gff_id; } ;
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
 size_t VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (struct qla_hw_data*) ;
 int VAR_7 ;
 int FUNC_1 (int ,TYPE_11__*,int,char*,...) ;
 int VAR_8 ;
 int FUNC_2 (TYPE_11__*,int *,struct ct_sns_rsp*,char*) ;
 int FUNC_3 (TYPE_11__*,int ,int ,int) ;
 struct ct_sns_req* FUNC_4 (int *,int ,int ) ;
 int * FUNC_5 (TYPE_11__*,int ,int ) ;

void
FUNC_6(scsi_qla_host_t *VAR_9, sw_info_t *VAR_10)
{
 int VAR_11;
 uint16_t VAR_12;

 ms_iocb_entry_t *VAR_13;
 struct ct_sns_req *VAR_14;
 struct ct_sns_rsp *VAR_15;
 struct qla_hw_data *VAR_16 = VAR_9->hw;
 uint8_t VAR_17 = 0;

 for (VAR_12 = 0; VAR_12 < VAR_16->max_fibre_devices; VAR_12++) {


  VAR_10[VAR_12].fc4_type = VAR_2;


  if (!FUNC_0(VAR_16))
   continue;


  VAR_13 = VAR_16->isp_ops->prep_ms_iocb(VAR_9, VAR_5,
      VAR_6);


  VAR_14 = FUNC_4(&VAR_16->ct_sns->p.req, VAR_4,
      VAR_6);
  VAR_15 = &VAR_16->ct_sns->p.rsp;


  VAR_14->req.port_id.port_id[0] = VAR_10[VAR_12].d_id.b.domain;
  VAR_14->req.port_id.port_id[1] = VAR_10[VAR_12].d_id.b.area;
  VAR_14->req.port_id.port_id[2] = VAR_10[VAR_12].d_id.b.al_pa;


  VAR_11 = FUNC_3(VAR_9, VAR_16->ms_iocb, VAR_16->ms_iocb_dma,
     sizeof(ms_iocb_entry_t));

  if (VAR_11 != VAR_7) {
   FUNC_1(VAR_8, VAR_9, 0x205c,
       "GFF_ID issue IOCB failed (%d).\n", VAR_11);
  } else if (FUNC_2(VAR_9, VAR_13, VAR_15,
          "GFF_ID") != VAR_7) {
   FUNC_1(VAR_8, VAR_9, 0x205d,
       "GFF_ID IOCB status had a failure status code.\n");
  } else {
   VAR_17 =
      VAR_15->rsp.gff_id.fc4_features[VAR_3];
   VAR_17 &= 0x0f;

   if (VAR_17)
    VAR_10[VAR_12].fc4_type = VAR_0;
   else
    VAR_10[VAR_12].fc4_type = VAR_1;
  }


  if (VAR_10[VAR_12].d_id.b.rsvd_1 != 0)
   break;
 }
}
