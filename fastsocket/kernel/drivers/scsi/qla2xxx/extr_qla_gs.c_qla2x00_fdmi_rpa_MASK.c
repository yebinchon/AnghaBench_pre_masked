
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_25__ TYPE_9__ ;
typedef struct TYPE_24__ TYPE_8__ ;
typedef struct TYPE_23__ TYPE_7__ ;
typedef struct TYPE_22__ TYPE_6__ ;
typedef struct TYPE_21__ TYPE_5__ ;
typedef struct TYPE_20__ TYPE_4__ ;
typedef struct TYPE_19__ TYPE_3__ ;
typedef struct TYPE_18__ TYPE_2__ ;
typedef struct TYPE_17__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint32_t ;
struct qla_hw_data {int link_data_rate; int ms_iocb_dma; int ms_iocb; TYPE_1__* init_cb; TYPE_4__* ct_sns; TYPE_2__* isp_ops; } ;
struct init_cb_24xx {int frame_payload_size; } ;
struct ct_sns_rsp {int dummy; } ;
struct TYPE_21__ {void* count; } ;
struct TYPE_22__ {int * port_name; TYPE_5__ attrs; } ;
struct TYPE_23__ {TYPE_6__ rpa; } ;
struct ct_sns_req {TYPE_7__ req; } ;
struct TYPE_24__ {int* fc4_types; char* os_dev_name; char* host_name; int max_frame_size; void* cur_speed; void* sup_speed; } ;
struct ct_fdmi_port_attr {TYPE_8__ a; void* len; void* type; } ;
struct TYPE_25__ {int host; int port_name; struct qla_hw_data* hw; } ;
typedef TYPE_9__ scsi_qla_host_t ;
typedef int ms_iocb_entry_t ;
struct TYPE_19__ {struct ct_sns_rsp rsp; int req; } ;
struct TYPE_20__ {TYPE_3__ p; } ;
struct TYPE_18__ {int * (* prep_ms_fdmi_iocb ) (TYPE_9__*,int ,int ) ;} ;
struct TYPE_17__ {int frame_payload_size; } ;


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
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 scalar_t__ FUNC_0 (struct qla_hw_data*) ;
 scalar_t__ FUNC_1 (struct qla_hw_data*) ;
 scalar_t__ FUNC_2 (struct qla_hw_data*) ;
 scalar_t__ FUNC_3 (struct qla_hw_data*) ;
 scalar_t__ FUNC_4 (struct qla_hw_data*) ;






 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 void* FUNC_5 (int) ;
 void* FUNC_6 (int) ;
 void* FUNC_7 (int) ;
 int FUNC_8 (int) ;
 char* FUNC_9 (int ) ;
 int FUNC_10 (int ) ;
 int FUNC_11 (int *,int ,int) ;
 int FUNC_12 (scalar_t__,TYPE_9__*,int,char*,...) ;
 scalar_t__ VAR_20 ;
 scalar_t__ VAR_21 ;
 int FUNC_13 (scalar_t__,TYPE_9__*,int,int *,int) ;
 int FUNC_14 (TYPE_9__*,int *,struct ct_sns_rsp*,char*) ;
 int FUNC_15 (TYPE_9__*,int ,int ,int) ;
 struct ct_sns_req* FUNC_16 (int *,int ,int ) ;
 int FUNC_17 (TYPE_9__*,int) ;
 int FUNC_18 (char*,int,char*,char*) ;
 int FUNC_19 (char*,int ) ;
 int FUNC_20 (char*) ;
 int * FUNC_21 (TYPE_9__*,int ,int ) ;

__attribute__((used)) static int
FUNC_22(scsi_qla_host_t *VAR_22)
{
 int VAR_23, VAR_24;
 uint32_t VAR_25, VAR_26;
 struct qla_hw_data *VAR_27 = VAR_22->hw;
 ms_iocb_entry_t *VAR_28;
 struct ct_sns_req *VAR_29;
 struct ct_sns_rsp *VAR_30;
 uint8_t *VAR_31;
 struct ct_fdmi_port_attr *VAR_32;
 struct init_cb_24xx *VAR_33 = (struct init_cb_24xx *)VAR_27->init_cb;




 VAR_28 = VAR_27->isp_ops->prep_ms_fdmi_iocb(VAR_22, 0, VAR_18);


 VAR_29 = FUNC_16(&VAR_27->ct_sns->p.req, VAR_17,
     VAR_18);
 VAR_30 = &VAR_27->ct_sns->p.rsp;


 FUNC_11(VAR_29->req.rpa.port_name, VAR_22->port_name, VAR_19);
 VAR_25 = VAR_19 + 4;


 VAR_29->req.rpa.attrs.count =
     FUNC_6(VAR_0 - 1);
 VAR_31 = VAR_29->req.rpa.port_name;


 VAR_32 = (struct ct_fdmi_port_attr *) (VAR_31 + VAR_25);
 VAR_32->type = FUNC_5(VAR_2);
 VAR_32->len = FUNC_5(4 + 32);
 VAR_32->a.fc4_types[2] = 0x01;
 VAR_25 += 4 + 32;

 FUNC_12(VAR_21, VAR_22, 0x2039,
     "FC4_TYPES=%02x %02x.\n",
     VAR_32->a.fc4_types[2],
     VAR_32->a.fc4_types[1]);


 VAR_32 = (struct ct_fdmi_port_attr *) (VAR_31 + VAR_25);
 VAR_32->type = FUNC_5(VAR_13);
 VAR_32->len = FUNC_5(4 + 4);
 if (FUNC_0(VAR_27))
  VAR_32->a.sup_speed = FUNC_6(
      VAR_6);
 else if (FUNC_4(VAR_27))
  VAR_32->a.sup_speed = FUNC_6(
      VAR_8|VAR_9|
      VAR_10|VAR_11);
 else if (FUNC_3(VAR_27))
  VAR_32->a.sup_speed = FUNC_6(
      VAR_8|VAR_9|
      VAR_10);
 else if (FUNC_2(VAR_27))
  VAR_32->a.sup_speed =FUNC_6(
      VAR_8|VAR_9);
 else
  VAR_32->a.sup_speed = FUNC_6(
      VAR_8);
 VAR_25 += 4 + 4;

 FUNC_12(VAR_21, VAR_22, 0x203a,
     "Supported_Speed=%x.\n", VAR_32->a.sup_speed);


 VAR_32 = (struct ct_fdmi_port_attr *) (VAR_31 + VAR_25);
 VAR_32->type = FUNC_5(VAR_1);
 VAR_32->len = FUNC_5(4 + 4);
 switch (VAR_27->link_data_rate) {
 case 131:
  VAR_32->a.cur_speed =
      FUNC_6(VAR_8);
  break;
 case 130:
  VAR_32->a.cur_speed =
      FUNC_6(VAR_9);
  break;
 case 129:
  VAR_32->a.cur_speed =
      FUNC_6(VAR_10);
  break;
 case 128:
  VAR_32->a.cur_speed =
      FUNC_6(VAR_11);
  break;
 case 133:
  VAR_32->a.cur_speed =
      FUNC_6(VAR_6);
  break;
 case 132:
  VAR_32->a.cur_speed =
      FUNC_6(VAR_7);
  break;
 default:
  VAR_32->a.cur_speed =
      FUNC_6(VAR_12);
  break;
 }
 VAR_25 += 4 + 4;

 FUNC_12(VAR_21, VAR_22, 0x203b,
     "Current_Speed=%x.\n", VAR_32->a.cur_speed);


 VAR_32 = (struct ct_fdmi_port_attr *) (VAR_31 + VAR_25);
 VAR_32->type = FUNC_5(VAR_4);
 VAR_32->len = FUNC_5(4 + 4);
 VAR_26 = FUNC_1(VAR_27) ?
     FUNC_10(VAR_33->frame_payload_size):
     FUNC_10(VAR_27->init_cb->frame_payload_size);
 VAR_32->a.max_frame_size = FUNC_8(VAR_26);
 VAR_25 += 4 + 4;

 FUNC_12(VAR_21, VAR_22, 0x203c,
     "Max_Frame_Size=%x.\n", VAR_32->a.max_frame_size);


 VAR_32 = (struct ct_fdmi_port_attr *) (VAR_31 + VAR_25);
 VAR_32->type = FUNC_5(VAR_5);
 FUNC_19(VAR_32->a.os_dev_name, VAR_14);
 VAR_24 = FUNC_20(VAR_32->a.os_dev_name);
 VAR_24 += (VAR_24 & 3) ? (4 - (VAR_24 & 3)) : 4;
 VAR_32->len = FUNC_7(4 + VAR_24);
 VAR_25 += 4 + VAR_24;

 FUNC_12(VAR_21, VAR_22, 0x204b,
     "OS_Device_Name=%s.\n", VAR_32->a.os_dev_name);


 if (FUNC_20(FUNC_9(VAR_22->host))) {
  VAR_29->req.rpa.attrs.count =
      FUNC_6(VAR_0);
  VAR_32 = (struct ct_fdmi_port_attr *) (VAR_31 + VAR_25);
  VAR_32->type = FUNC_5(VAR_3);
  FUNC_18(VAR_32->a.host_name, sizeof(VAR_32->a.host_name),
      "%s", FUNC_9(VAR_22->host));
  VAR_24 = FUNC_20(VAR_32->a.host_name);
  VAR_24 += (VAR_24 & 3) ? (4 - (VAR_24 & 3)) : 4;
  VAR_32->len = FUNC_7(4 + VAR_24);
  VAR_25 += 4 + VAR_24;

  FUNC_12(VAR_21, VAR_22, 0x203d,
      "HostName=%s.\n", VAR_32->a.host_name);
 }


 FUNC_17(VAR_22, VAR_25 + 16);

 FUNC_12(VAR_21, VAR_22, 0x203e,
     "RPA portname= %02x%02x%02x%02x%02X%02x%02x%02x size=%d.\n",
     VAR_29->req.rpa.port_name[0], VAR_29->req.rpa.port_name[1],
     VAR_29->req.rpa.port_name[2], VAR_29->req.rpa.port_name[3],
     VAR_29->req.rpa.port_name[4], VAR_29->req.rpa.port_name[5],
     VAR_29->req.rpa.port_name[6], VAR_29->req.rpa.port_name[7],
     VAR_25);
 FUNC_13(VAR_21 + VAR_20, VAR_22, 0x2079,
     VAR_31, VAR_25);


 VAR_23 = FUNC_15(VAR_22, VAR_27->ms_iocb, VAR_27->ms_iocb_dma,
     sizeof(ms_iocb_entry_t));
 if (VAR_23 != VAR_16) {

  FUNC_12(VAR_21, VAR_22, 0x2040,
      "RPA issue IOCB failed (%d).\n", VAR_23);
 } else if (FUNC_14(VAR_22, VAR_28, VAR_30, "RPA") !=
     VAR_16) {
  VAR_23 = VAR_15;
 } else {
  FUNC_12(VAR_21, VAR_22, 0x2041,
      "RPA exiting nornally.\n");
 }

 return VAR_23;
}
