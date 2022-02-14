
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_31__ TYPE_9__ ;
typedef struct TYPE_30__ TYPE_8__ ;
typedef struct TYPE_29__ TYPE_7__ ;
typedef struct TYPE_28__ TYPE_6__ ;
typedef struct TYPE_27__ TYPE_5__ ;
typedef struct TYPE_26__ TYPE_4__ ;
typedef struct TYPE_25__ TYPE_3__ ;
typedef struct TYPE_24__ TYPE_2__ ;
typedef struct TYPE_23__ TYPE_1__ ;
typedef struct TYPE_22__ TYPE_11__ ;
typedef struct TYPE_21__ TYPE_10__ ;


typedef size_t uint16_t ;
struct TYPE_30__ {int rsvd_1; int al_pa; int area; int domain; } ;
struct TYPE_31__ {TYPE_8__ b; } ;
struct TYPE_21__ {TYPE_9__ d_id; int fp_speed; int fabric_port_name; } ;
typedef TYPE_10__ sw_info_t ;
struct qla_hw_data {size_t max_fibre_devices; int ms_iocb_dma; int ms_iocb; TYPE_3__* ct_sns; TYPE_1__* isp_ops; } ;
struct TYPE_28__ {struct ct_sns_gid_pt_data* entries; } ;
struct TYPE_29__ {TYPE_6__ gid_pt; } ;
struct ct_sns_rsp {TYPE_7__ rsp; } ;
struct TYPE_26__ {int port_type; } ;
struct TYPE_27__ {TYPE_4__ gid_pt; } ;
struct ct_sns_req {TYPE_5__ req; } ;
struct ct_sns_gid_pt_data {int control_byte; int * port_id; } ;
struct TYPE_22__ {struct qla_hw_data* hw; } ;
typedef TYPE_11__ scsi_qla_host_t ;
typedef int ms_iocb_entry_t ;
struct TYPE_24__ {struct ct_sns_rsp rsp; int req; } ;
struct TYPE_25__ {TYPE_2__ p; } ;
struct TYPE_23__ {int * (* prep_ms_iocb ) (TYPE_11__*,int ,size_t) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (struct qla_hw_data*) ;
 scalar_t__ FUNC_1 (struct qla_hw_data*) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_2 (int ,int ,int ) ;
 int FUNC_3 (int ,TYPE_11__*,int,char*,int) ;
 int VAR_8 ;
 int FUNC_4 (TYPE_11__*,int *,struct ct_sns_rsp*,char*) ;
 size_t FUNC_5 (TYPE_11__*) ;
 int FUNC_6 (TYPE_11__*,int ,int ,int) ;
 struct ct_sns_req* FUNC_7 (int *,int ,size_t) ;
 int FUNC_8 (TYPE_11__*,TYPE_10__*) ;
 int * FUNC_9 (TYPE_11__*,int ,size_t) ;

int
FUNC_10(scsi_qla_host_t *VAR_9, sw_info_t *VAR_10)
{
 int VAR_11;
 uint16_t VAR_12;

 ms_iocb_entry_t *VAR_13;
 struct ct_sns_req *VAR_14;
 struct ct_sns_rsp *VAR_15;

 struct ct_sns_gid_pt_data *VAR_16;
 struct qla_hw_data *VAR_17 = VAR_9->hw;
 uint16_t VAR_18;

 if (FUNC_0(VAR_17) || FUNC_1(VAR_17))
  return FUNC_8(VAR_9, VAR_10);

 VAR_16 = ((void*)0);
 VAR_18 = FUNC_5(VAR_9);


 VAR_13 = VAR_17->isp_ops->prep_ms_iocb(VAR_9, VAR_2,
     VAR_18);


 VAR_14 = FUNC_7(&VAR_17->ct_sns->p.req, VAR_1,
     VAR_18);
 VAR_15 = &VAR_17->ct_sns->p.rsp;


 VAR_14->req.gid_pt.port_type = VAR_3;


 VAR_11 = FUNC_6(VAR_9, VAR_17->ms_iocb, VAR_17->ms_iocb_dma,
     sizeof(ms_iocb_entry_t));
 if (VAR_11 != VAR_6) {

  FUNC_3(VAR_8, VAR_9, 0x2055,
      "GID_PT issue IOCB failed (%d).\n", VAR_11);
 } else if (FUNC_4(VAR_9, VAR_13, VAR_15, "GID_PT") !=
     VAR_6) {
  VAR_11 = VAR_5;
 } else {

  for (VAR_12 = 0; VAR_12 < VAR_17->max_fibre_devices; VAR_12++) {
   VAR_16 = &VAR_15->rsp.gid_pt.entries[VAR_12];
   VAR_10[VAR_12].d_id.b.domain = VAR_16->port_id[0];
   VAR_10[VAR_12].d_id.b.area = VAR_16->port_id[1];
   VAR_10[VAR_12].d_id.b.al_pa = VAR_16->port_id[2];
   FUNC_2(VAR_10[VAR_12].fabric_port_name, 0, VAR_7);
   VAR_10[VAR_12].fp_speed = VAR_4;


   if (VAR_16->control_byte & VAR_0) {
    VAR_10[VAR_12].d_id.b.rsvd_1 = VAR_16->control_byte;
    break;
   }
  }







  if (VAR_12 == VAR_17->max_fibre_devices)
   VAR_11 = VAR_5;
 }

 return (VAR_11);
}
