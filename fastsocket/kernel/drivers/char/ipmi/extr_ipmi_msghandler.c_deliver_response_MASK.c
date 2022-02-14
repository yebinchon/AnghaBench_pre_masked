
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct ipmi_recv_msg {TYPE_2__* user; TYPE_3__* user_msg_data; } ;
typedef TYPE_2__* ipmi_user_t ;
typedef TYPE_3__* ipmi_smi_t ;
struct TYPE_8__ {int (* null_user_handler ) (TYPE_3__*,struct ipmi_recv_msg*) ;} ;
struct TYPE_7__ {int handler_data; TYPE_1__* handler; } ;
struct TYPE_6__ {int (* ipmi_recv_hndl ) (struct ipmi_recv_msg*,int ) ;} ;


 int VAR_0 ;
 int FUNC_0 (struct ipmi_recv_msg*) ;
 int FUNC_1 (TYPE_3__*,int ) ;
 int FUNC_2 (TYPE_3__*,struct ipmi_recv_msg*) ;
 int FUNC_3 (struct ipmi_recv_msg*,int ) ;
 int VAR_1 ;

__attribute__((used)) static void FUNC_4(struct ipmi_recv_msg *VAR_2)
{
 if (!VAR_2->user) {
  ipmi_smi_t VAR_3 = VAR_2->user_msg_data;


  if (VAR_3->null_user_handler) {
   VAR_3->null_user_handler(VAR_3, VAR_2);
   FUNC_1(VAR_3, VAR_0);
  } else {

   FUNC_1(VAR_3, VAR_1);
  }
  FUNC_0(VAR_2);
 } else {
  ipmi_user_t VAR_4 = VAR_2->user;
  VAR_4->handler->ipmi_recv_hndl(VAR_2, VAR_4->handler_data);
 }
}
