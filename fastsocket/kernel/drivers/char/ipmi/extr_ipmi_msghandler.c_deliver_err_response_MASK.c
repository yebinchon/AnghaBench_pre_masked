
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int netfn; int data_len; int* data; } ;
struct ipmi_recv_msg {int* msg_data; TYPE_1__ msg; int recv_type; } ;


 int VAR_0 ;
 int FUNC_0 (struct ipmi_recv_msg*) ;

__attribute__((used)) static void
FUNC_1(struct ipmi_recv_msg *VAR_1, int VAR_2)
{
 VAR_1->recv_type = VAR_0;
 VAR_1->msg_data[0] = VAR_2;
 VAR_1->msg.netfn |= 1;
 VAR_1->msg.data_len = 1;
 VAR_1->msg.data = VAR_1->msg_data;
 FUNC_0(VAR_1);
}
