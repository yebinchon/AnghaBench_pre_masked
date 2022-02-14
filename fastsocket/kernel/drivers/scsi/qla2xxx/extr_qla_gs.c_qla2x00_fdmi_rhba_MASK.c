
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_26__ TYPE_9__ ;
typedef struct TYPE_25__ TYPE_8__ ;
typedef struct TYPE_24__ TYPE_7__ ;
typedef struct TYPE_23__ TYPE_6__ ;
typedef struct TYPE_22__ TYPE_5__ ;
typedef struct TYPE_21__ TYPE_4__ ;
typedef struct TYPE_20__ TYPE_3__ ;
typedef struct TYPE_19__ TYPE_2__ ;
typedef struct TYPE_18__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint32_t ;
struct qla_hw_data {int serial0; int serial2; int serial1; char* model_number; char* adapter_id; int ms_iocb_dma; int ms_iocb; TYPE_4__* isp_ops; scalar_t__ model_desc; TYPE_2__* ct_sns; } ;
struct TYPE_25__ {scalar_t__ reason_code; scalar_t__ explanation_code; } ;
struct ct_sns_rsp {TYPE_8__ header; } ;
struct TYPE_20__ {void* count; } ;
struct TYPE_23__ {int * hba_identifier; TYPE_3__ attrs; int * port_name; void* entry_count; } ;
struct TYPE_24__ {TYPE_6__ rhba; } ;
struct ct_sns_req {TYPE_7__ req; } ;
struct TYPE_22__ {int fw_version; int orom_version; int driver_version; int hw_version; int model_desc; int model; int serial_num; int manufacturer; int * node_name; } ;
struct ct_fdmi_hba_attr {TYPE_5__ a; void* len; void* type; } ;
struct TYPE_26__ {int node_name; int port_name; struct qla_hw_data* hw; } ;
typedef TYPE_9__ scsi_qla_host_t ;
typedef int ms_iocb_entry_t ;
struct TYPE_21__ {int (* fw_version_str ) (TYPE_9__*,int ) ;int * (* prep_ms_fdmi_iocb ) (TYPE_9__*,int ,int ) ;} ;
struct TYPE_18__ {struct ct_sns_rsp rsp; int req; } ;
struct TYPE_19__ {TYPE_1__ p; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 void* FUNC_0 (int) ;
 void* FUNC_1 (int) ;
 void* FUNC_2 (int) ;
 int FUNC_3 (int *,int ,int) ;
 int FUNC_4 (scalar_t__,TYPE_9__*,int,char*,...) ;
 scalar_t__ VAR_18 ;
 scalar_t__ VAR_19 ;
 int FUNC_5 (scalar_t__,TYPE_9__*,int,int *,int) ;
 int FUNC_6 (TYPE_9__*,int *,struct ct_sns_rsp*,char*) ;
 int FUNC_7 (TYPE_9__*,int ,int ,int) ;
 struct ct_sns_req* FUNC_8 (int *,int ,int ) ;
 int FUNC_9 (TYPE_9__*,int) ;
 char* VAR_20 ;
 int FUNC_10 (int ,char*,char,int) ;
 int FUNC_11 (int ,char*) ;
 int FUNC_12 (int ) ;
 int FUNC_13 (int ,scalar_t__,int) ;
 int * FUNC_14 (TYPE_9__*,int ,int ) ;
 int FUNC_15 (TYPE_9__*,int ) ;

__attribute__((used)) static int
FUNC_16(scsi_qla_host_t *VAR_21)
{
 int VAR_22, VAR_23;
 uint32_t VAR_24, VAR_25;

 ms_iocb_entry_t *VAR_26;
 struct ct_sns_req *VAR_27;
 struct ct_sns_rsp *VAR_28;
 uint8_t *VAR_29;
 struct ct_fdmi_hba_attr *VAR_30;
 struct qla_hw_data *VAR_31 = VAR_21->hw;




 VAR_26 = VAR_31->isp_ops->prep_ms_fdmi_iocb(VAR_21, 0, VAR_16);


 VAR_27 = FUNC_8(&VAR_31->ct_sns->p.req, VAR_15,
     VAR_16);
 VAR_28 = &VAR_31->ct_sns->p.rsp;


 FUNC_3(VAR_27->req.rhba.hba_identifier, VAR_21->port_name, VAR_17);
 VAR_27->req.rhba.entry_count = FUNC_1(1);
 FUNC_3(VAR_27->req.rhba.port_name, VAR_21->port_name, VAR_17);
 VAR_24 = 2 * VAR_17 + 4 + 4;


 VAR_27->req.rhba.attrs.count =
     FUNC_1(VAR_2);
 VAR_29 = VAR_27->req.rhba.hba_identifier;


 VAR_30 = (struct ct_fdmi_hba_attr *) (VAR_29 + VAR_24);
 VAR_30->type = FUNC_0(VAR_9);
 VAR_30->len = FUNC_0(4 + VAR_17);
 FUNC_3(VAR_30->a.node_name, VAR_21->node_name, VAR_17);
 VAR_24 += 4 + VAR_17;

 FUNC_4(VAR_19, VAR_21, 0x2025,
     "NodeName = %02x%02x%02x%02x%02x%02x%02x%02x.\n",
     VAR_30->a.node_name[0], VAR_30->a.node_name[1],
     VAR_30->a.node_name[2], VAR_30->a.node_name[3],
     VAR_30->a.node_name[4], VAR_30->a.node_name[5],
     VAR_30->a.node_name[6], VAR_30->a.node_name[7]);


 VAR_30 = (struct ct_fdmi_hba_attr *) (VAR_29 + VAR_24);
 VAR_30->type = FUNC_0(VAR_6);
 FUNC_11(VAR_30->a.manufacturer, "QLogic Corporation");
 VAR_23 = FUNC_12(VAR_30->a.manufacturer);
 VAR_23 += (VAR_23 & 3) ? (4 - (VAR_23 & 3)) : 4;
 VAR_30->len = FUNC_2(4 + VAR_23);
 VAR_24 += 4 + VAR_23;

 FUNC_4(VAR_19, VAR_21, 0x2026,
     "Manufacturer = %s.\n", VAR_30->a.manufacturer);


 VAR_30 = (struct ct_fdmi_hba_attr *) (VAR_29 + VAR_24);
 VAR_30->type = FUNC_0(VAR_11);
 VAR_25 = ((VAR_31->serial0 & 0x1f) << 16) | (VAR_31->serial2 << 8) | VAR_31->serial1;
 FUNC_10(VAR_30->a.serial_num, "%c%05d", 'A' + VAR_25 / 100000, VAR_25 % 100000);
 VAR_23 = FUNC_12(VAR_30->a.serial_num);
 VAR_23 += (VAR_23 & 3) ? (4 - (VAR_23 & 3)) : 4;
 VAR_30->len = FUNC_2(4 + VAR_23);
 VAR_24 += 4 + VAR_23;

 FUNC_4(VAR_19, VAR_21, 0x2027,
     "Serial no. = %s.\n", VAR_30->a.serial_num);


 VAR_30 = (struct ct_fdmi_hba_attr *) (VAR_29 + VAR_24);
 VAR_30->type = FUNC_0(VAR_7);
 FUNC_11(VAR_30->a.model, VAR_31->model_number);
 VAR_23 = FUNC_12(VAR_30->a.model);
 VAR_23 += (VAR_23 & 3) ? (4 - (VAR_23 & 3)) : 4;
 VAR_30->len = FUNC_2(4 + VAR_23);
 VAR_24 += 4 + VAR_23;

 FUNC_4(VAR_19, VAR_21, 0x2028,
     "Model Name = %s.\n", VAR_30->a.model);


 VAR_30 = (struct ct_fdmi_hba_attr *) (VAR_29 + VAR_24);
 VAR_30->type = FUNC_0(VAR_8);
 if (VAR_31->model_desc)
  FUNC_13(VAR_30->a.model_desc, VAR_31->model_desc, 80);
 VAR_23 = FUNC_12(VAR_30->a.model_desc);
 VAR_23 += (VAR_23 & 3) ? (4 - (VAR_23 & 3)) : 4;
 VAR_30->len = FUNC_2(4 + VAR_23);
 VAR_24 += 4 + VAR_23;

 FUNC_4(VAR_19, VAR_21, 0x2029,
     "Model Desc = %s.\n", VAR_30->a.model_desc);


 VAR_30 = (struct ct_fdmi_hba_attr *) (VAR_29 + VAR_24);
 VAR_30->type = FUNC_0(VAR_5);
 FUNC_11(VAR_30->a.hw_version, VAR_31->adapter_id);
 VAR_23 = FUNC_12(VAR_30->a.hw_version);
 VAR_23 += (VAR_23 & 3) ? (4 - (VAR_23 & 3)) : 4;
 VAR_30->len = FUNC_2(4 + VAR_23);
 VAR_24 += 4 + VAR_23;

 FUNC_4(VAR_19, VAR_21, 0x202a,
     "Hardware ver = %s.\n", VAR_30->a.hw_version);


 VAR_30 = (struct ct_fdmi_hba_attr *) (VAR_29 + VAR_24);
 VAR_30->type = FUNC_0(VAR_3);
 FUNC_11(VAR_30->a.driver_version, VAR_20);
 VAR_23 = FUNC_12(VAR_30->a.driver_version);
 VAR_23 += (VAR_23 & 3) ? (4 - (VAR_23 & 3)) : 4;
 VAR_30->len = FUNC_2(4 + VAR_23);
 VAR_24 += 4 + VAR_23;

 FUNC_4(VAR_19, VAR_21, 0x202b,
     "Driver ver = %s.\n", VAR_30->a.driver_version);


 VAR_30 = (struct ct_fdmi_hba_attr *) (VAR_29 + VAR_24);
 VAR_30->type = FUNC_0(VAR_10);
 FUNC_11(VAR_30->a.orom_version, "0.00");
 VAR_23 = FUNC_12(VAR_30->a.orom_version);
 VAR_23 += (VAR_23 & 3) ? (4 - (VAR_23 & 3)) : 4;
 VAR_30->len = FUNC_2(4 + VAR_23);
 VAR_24 += 4 + VAR_23;

 FUNC_4(VAR_19, VAR_21 , 0x202c,
     "Optrom vers = %s.\n", VAR_30->a.orom_version);


 VAR_30 = (struct ct_fdmi_hba_attr *) (VAR_29 + VAR_24);
 VAR_30->type = FUNC_0(VAR_4);
 VAR_31->isp_ops->fw_version_str(VAR_21, VAR_30->a.fw_version);
 VAR_23 = FUNC_12(VAR_30->a.fw_version);
 VAR_23 += (VAR_23 & 3) ? (4 - (VAR_23 & 3)) : 4;
 VAR_30->len = FUNC_2(4 + VAR_23);
 VAR_24 += 4 + VAR_23;

 FUNC_4(VAR_19, VAR_21, 0x202d,
     "Firmware vers = %s.\n", VAR_30->a.fw_version);


 FUNC_9(VAR_21, VAR_24 + 16);

 FUNC_4(VAR_19, VAR_21, 0x202e,
     "RHBA identifier = "
     "%02x%02x%02x%02x%02x%02x%02x%02x size=%d.\n",
     VAR_27->req.rhba.hba_identifier[0],
     VAR_27->req.rhba.hba_identifier[1],
     VAR_27->req.rhba.hba_identifier[2],
     VAR_27->req.rhba.hba_identifier[3],
     VAR_27->req.rhba.hba_identifier[4],
     VAR_27->req.rhba.hba_identifier[5],
     VAR_27->req.rhba.hba_identifier[6],
     VAR_27->req.rhba.hba_identifier[7], VAR_24);
 FUNC_5(VAR_19 + VAR_18, VAR_21, 0x2076,
     VAR_29, VAR_24);


 VAR_22 = FUNC_7(VAR_21, VAR_31->ms_iocb, VAR_31->ms_iocb_dma,
     sizeof(ms_iocb_entry_t));
 if (VAR_22 != VAR_14) {

  FUNC_4(VAR_19, VAR_21, 0x2030,
      "RHBA issue IOCB failed (%d).\n", VAR_22);
 } else if (FUNC_6(VAR_21, VAR_26, VAR_28, "RHBA") !=
     VAR_14) {
  VAR_22 = VAR_13;
  if (VAR_28->header.reason_code == VAR_1 &&
      VAR_28->header.explanation_code ==
      VAR_0) {
   FUNC_4(VAR_19, VAR_21, 0x2034,
       "HBA already registered.\n");
   VAR_22 = VAR_12;
  }
 } else {
  FUNC_4(VAR_19, VAR_21, 0x2035,
      "RHBA exiting normally.\n");
 }

 return VAR_22;
}
