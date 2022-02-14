
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct qlcnic_mailbox_metadata {scalar_t__ cmd; int in_args; int out_args; } ;
struct TYPE_4__ {int num; scalar_t__* arg; } ;
struct TYPE_3__ {int num; scalar_t__* arg; } ;
struct qlcnic_cmd_args {TYPE_2__ req; TYPE_1__ rsp; int op_type; } ;


 int FUNC_0 (struct qlcnic_mailbox_metadata*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 void* FUNC_1 (int,int,int ) ;
 int FUNC_2 (scalar_t__*) ;
 int FUNC_3 (scalar_t__*,int ,int) ;
 struct qlcnic_mailbox_metadata* VAR_4 ;

__attribute__((used)) static int FUNC_4(struct qlcnic_cmd_args *VAR_5, u32 VAR_6)
{
 const struct qlcnic_mailbox_metadata *VAR_7;
 int VAR_8, VAR_9;

 VAR_7 = VAR_4;
 VAR_9 = FUNC_0(VAR_4);

 for (VAR_8 = 0; VAR_8 < VAR_9; VAR_8++) {
  if (VAR_6 == VAR_7[VAR_8].cmd) {
   VAR_5->op_type = VAR_3;
   VAR_5->req.num = VAR_7[VAR_8].in_args;
   VAR_5->rsp.num = VAR_7[VAR_8].out_args;
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
   VAR_5->req.arg[0] = (VAR_6 | (VAR_5->req.num << 16) |
        (3 << 29));
   return 0;
  }
 }
 return -VAR_0;
}
