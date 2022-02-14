
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct qlcnic_mailbox_metadata {scalar_t__ cmd; int in_args; int out_args; } ;
struct TYPE_6__ {int num; scalar_t__* arg; } ;
struct TYPE_4__ {int num; scalar_t__* arg; } ;
struct qlcnic_cmd_args {TYPE_3__ req; TYPE_1__ rsp; int op_type; } ;
struct qlcnic_adapter {TYPE_2__* ahw; } ;
struct TYPE_5__ {int fw_hal_version; } ;


 int FUNC_0 (struct qlcnic_mailbox_metadata*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 void* FUNC_1 (int,int,int ) ;
 int FUNC_2 (scalar_t__*) ;
 int FUNC_3 (scalar_t__*,int ,int) ;
 struct qlcnic_mailbox_metadata* VAR_4 ;

int FUNC_4(struct qlcnic_cmd_args *VAR_5,
          struct qlcnic_adapter *VAR_6, u32 VAR_7)
{
 int VAR_8, VAR_9;
 u32 VAR_10;
 const struct qlcnic_mailbox_metadata *VAR_11;

 VAR_11 = VAR_4;
 VAR_9 = FUNC_0(VAR_4);
 for (VAR_8 = 0; VAR_8 < VAR_9; VAR_8++) {
  if (VAR_7 == VAR_11[VAR_8].cmd) {
   VAR_5->op_type = VAR_3;
   VAR_5->req.num = VAR_11[VAR_8].in_args;
   VAR_5->rsp.num = VAR_11[VAR_8].out_args;
   VAR_5->req.arg = FUNC_1(VAR_5->req.num, sizeof(u32),
            VAR_2);
   if (!VAR_5->req.arg)
    return -VAR_1;
   VAR_5->rsp.arg = FUNC_1(VAR_5->rsp.num, sizeof(u32),
            VAR_2);
   if (!VAR_5->rsp.arg) {
    FUNC_2(VAR_5->req.arg);
    VAR_5->req.arg = ((void*)0);
    return -VAR_1;
   }
   FUNC_3(VAR_5->req.arg, 0, sizeof(u32) * VAR_5->req.num);
   FUNC_3(VAR_5->rsp.arg, 0, sizeof(u32) * VAR_5->rsp.num);
   VAR_10 = VAR_6->ahw->fw_hal_version << 29;
   VAR_5->req.arg[0] = (VAR_7 | (VAR_5->req.num << 16) | VAR_10);
   return 0;
  }
 }
 return -VAR_0;
}
