
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_6__ ;
typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


union bfi_rport_i2h_msg_u {TYPE_5__* lip_scn; TYPE_4__* qos_scn_evt; TYPE_2__* delete_rsp; TYPE_1__* create_rsp; struct bfi_msg_s* msg; } ;
struct TYPE_12__ {int msg_id; } ;
struct bfi_msg_s {TYPE_6__ mhdr; } ;
struct bfa_s {int dummy; } ;
struct TYPE_9__ {TYPE_4__* fw_msg; } ;
struct bfa_rport_s {int rport_drv; TYPE_3__ event_arg; int qos_attr; int fw_handle; } ;
struct TYPE_11__ {int bfa_handle; int loop_info; } ;
struct TYPE_10__ {int bfa_handle; } ;
struct TYPE_8__ {int status; int bfa_handle; } ;
struct TYPE_7__ {int status; int qos_attr; int fw_handle; int bfa_handle; } ;


 int FUNC_0 (struct bfa_s*) ;
 struct bfa_rport_s* FUNC_1 (struct bfa_s*,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;






 int FUNC_2 (int) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (struct bfa_s*) ;
 int FUNC_5 (struct bfa_s*) ;
 int FUNC_6 (int ,int *) ;
 int FUNC_7 (struct bfa_rport_s*,int ) ;
 int FUNC_8 (struct bfa_s*,int) ;

void
FUNC_9(struct bfa_s *VAR_3, struct bfi_msg_s *VAR_4)
{
 union bfi_rport_i2h_msg_u VAR_5;
 struct bfa_rport_s *VAR_6;

 FUNC_8(VAR_3, VAR_4->mhdr.msg_id);

 VAR_5.msg = VAR_4;

 switch (VAR_4->mhdr.msg_id) {
 case 133:
  VAR_6 = FUNC_1(VAR_3, VAR_5.create_rsp->bfa_handle);
  VAR_6->fw_handle = VAR_5.create_rsp->fw_handle;
  VAR_6->qos_attr = VAR_5.create_rsp->qos_attr;
  FUNC_2(VAR_5.create_rsp->status != VAR_2);
  FUNC_7(VAR_6, VAR_0);
  break;

 case 132:
  VAR_6 = FUNC_1(VAR_3, VAR_5.delete_rsp->bfa_handle);
  FUNC_2(VAR_5.delete_rsp->status != VAR_2);
  FUNC_7(VAR_6, VAR_0);
  break;

 case 128:
  VAR_6 = FUNC_1(VAR_3, VAR_5.qos_scn_evt->bfa_handle);
  VAR_6->event_arg.fw_msg = VAR_5.qos_scn_evt;
  FUNC_7(VAR_6, VAR_1);
  break;

 case 130:
  FUNC_6(FUNC_0(VAR_3),
    &VAR_5.lip_scn->loop_info);
  FUNC_5(VAR_3);
  break;

 case 131:
  FUNC_4(VAR_3);
  break;

 case 129:
  VAR_6 = FUNC_1(VAR_3, VAR_5.lip_scn->bfa_handle);
  FUNC_3(VAR_6->rport_drv);
  break;

 default:
  FUNC_8(VAR_3, VAR_4->mhdr.msg_id);
  FUNC_2(1);
 }
}
