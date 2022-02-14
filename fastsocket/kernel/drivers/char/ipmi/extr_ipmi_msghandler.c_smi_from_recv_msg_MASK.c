
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ipmi_smi_msg {int data_size; int * data; int msgid; } ;
struct TYPE_2__ {int data_len; int data; } ;
struct ipmi_recv_msg {TYPE_1__ msg; } ;
typedef int ipmi_smi_t ;


 int FUNC_0 (unsigned char,long) ;
 struct ipmi_smi_msg* FUNC_1 () ;
 int FUNC_2 (int *,int ,int) ;
 int FUNC_3 (char*,...) ;

__attribute__((used)) static struct ipmi_smi_msg *
FUNC_4(ipmi_smi_t VAR_0, struct ipmi_recv_msg *VAR_1,
    unsigned char VAR_2, long VAR_3)
{
 struct ipmi_smi_msg *VAR_4 = FUNC_1();
 if (!VAR_4)




  return ((void*)0);

 FUNC_2(VAR_4->data, VAR_1->msg.data, VAR_1->msg.data_len);
 VAR_4->data_size = VAR_1->msg.data_len;
 VAR_4->msgid = FUNC_0(VAR_2, VAR_3);
 return VAR_4;
}
