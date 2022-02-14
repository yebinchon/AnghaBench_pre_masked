
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int uint8_t ;
struct tsk_mgmt_entry {int dummy; } ;
struct sts_entry_24xx {scalar_t__ entry_status; scalar_t__ comp_status; scalar_t__ scsi_status; scalar_t__ rsp_data_len; scalar_t__* data; } ;
struct TYPE_9__ {int data; } ;
struct TYPE_10__ {TYPE_2__ tmf; } ;
struct srb_iocb {TYPE_3__ u; } ;
struct req_que {int dummy; } ;
struct TYPE_8__ {struct srb_iocb iocb_cmd; } ;
struct TYPE_11__ {char* name; int (* done ) (int *,TYPE_4__*,int ) ;int handle; TYPE_5__* fcport; TYPE_1__ u; } ;
typedef TYPE_4__ srb_t ;
typedef int scsi_qla_host_t ;
struct TYPE_12__ {int vha; } ;
typedef TYPE_5__ fc_port_t ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (scalar_t__) ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_3 (scalar_t__,int *,int,int *,int) ;
 int FUNC_4 (int ,int ,int,char*,char const*,int ,scalar_t__) ;
 int VAR_4 ;
 TYPE_4__* FUNC_5 (int *,char const*,struct req_que*,struct tsk_mgmt_entry*) ;
 int FUNC_6 (int *,TYPE_4__*,int ) ;

__attribute__((used)) static void
FUNC_7(scsi_qla_host_t *VAR_5, struct req_que *VAR_6,
    struct tsk_mgmt_entry *VAR_7)
{
 const char VAR_8[] = "TMF-IOCB";
 const char *VAR_9;
 fc_port_t *VAR_10;
 srb_t *VAR_11;
 struct srb_iocb *VAR_12;
 struct sts_entry_24xx *VAR_13 = (struct sts_entry_24xx *)VAR_7;
 int VAR_14 = 1;

 VAR_11 = FUNC_5(VAR_5, VAR_8, VAR_6, VAR_7);
 if (!VAR_11)
  return;

 VAR_12 = &VAR_11->u.iocb_cmd;
 VAR_9 = VAR_11->name;
 VAR_10 = VAR_11->fcport;

 if (VAR_13->entry_status) {
  FUNC_4(VAR_4, VAR_10->vha, 0x5038,
      "Async-%s error - hdl=%x entry-status(%x).\n",
      VAR_9, VAR_11->handle, VAR_13->entry_status);
 } else if (VAR_13->comp_status != FUNC_0(VAR_0)) {
  FUNC_4(VAR_4, VAR_10->vha, 0x5039,
      "Async-%s error - hdl=%x completion status(%x).\n",
      VAR_9, VAR_11->handle, VAR_13->comp_status);
 } else if (!(FUNC_1(VAR_13->scsi_status) &
     VAR_1)) {
  FUNC_4(VAR_4, VAR_10->vha, 0x503a,
      "Async-%s error - hdl=%x no response info(%x).\n",
      VAR_9, VAR_11->handle, VAR_13->scsi_status);
 } else if (FUNC_2(VAR_13->rsp_data_len) < 4) {
  FUNC_4(VAR_4, VAR_10->vha, 0x503b,
      "Async-%s error - hdl=%x not enough response(%d).\n",
      VAR_9, VAR_11->handle, VAR_13->rsp_data_len);
 } else if (VAR_13->data[3]) {
  FUNC_4(VAR_4, VAR_10->vha, 0x503c,
      "Async-%s error - hdl=%x response(%x).\n",
      VAR_9, VAR_11->handle, VAR_13->data[3]);
 } else {
  VAR_14 = 0;
 }

 if (VAR_14) {
  VAR_12->u.tmf.data = VAR_14;
  FUNC_3(VAR_2 + VAR_3, VAR_5, 0x5055,
      (uint8_t *)VAR_13, sizeof(*VAR_13));
 }

 VAR_11->done(VAR_5, VAR_11, 0);
}
