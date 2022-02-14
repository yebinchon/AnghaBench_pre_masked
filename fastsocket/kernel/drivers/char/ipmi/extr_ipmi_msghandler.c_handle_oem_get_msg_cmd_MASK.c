
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct ipmi_system_interface_addr {int lun; int channel; int addr_type; } ;
struct ipmi_smi_msg {int rsp_size; int* rsp; } ;
struct TYPE_3__ {int netfn; int cmd; int data_len; int data; } ;
struct ipmi_recv_msg {int msg_data; TYPE_1__ msg; int recv_type; int * user_msg_data; TYPE_2__* user; int addr; } ;
struct cmd_rcvr {TYPE_2__* user; } ;
typedef TYPE_2__* ipmi_user_t ;
typedef int ipmi_smi_t ;
struct TYPE_4__ {int refcount; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct ipmi_recv_msg*) ;
 struct cmd_rcvr* FUNC_1 (int ,unsigned char,unsigned char,unsigned char) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 struct ipmi_recv_msg* FUNC_2 () ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *,int ) ;
 int FUNC_6 (int ,int*,int) ;
 int FUNC_7 () ;
 int FUNC_8 () ;
 int VAR_6 ;

__attribute__((used)) static int FUNC_9(ipmi_smi_t VAR_7,
      struct ipmi_smi_msg *VAR_8)
{
 struct cmd_rcvr *VAR_9;
 int VAR_10 = 0;
 unsigned char VAR_11;
 unsigned char VAR_12;
 unsigned char VAR_13;
 ipmi_user_t VAR_14 = ((void*)0);
 struct ipmi_system_interface_addr *VAR_15;
 struct ipmi_recv_msg *VAR_16;





 if (VAR_8->rsp_size < 4) {

  FUNC_3(VAR_7, VAR_5);
  return 0;
 }

 if (VAR_8->rsp[2] != 0) {

  return 0;
 }





 VAR_11 = VAR_8->rsp[0] >> 2;
 VAR_12 = VAR_8->rsp[1];
 VAR_13 = VAR_8->rsp[3] & 0xf;

 FUNC_7();
 VAR_9 = FUNC_1(VAR_7, VAR_11, VAR_12, VAR_13);
 if (VAR_9) {
  VAR_14 = VAR_9->user;
  FUNC_4(&VAR_14->refcount);
 } else
  VAR_14 = ((void*)0);
 FUNC_8();

 if (VAR_14 == ((void*)0)) {

  FUNC_3(VAR_7, VAR_6);






  VAR_10 = 0;
 } else {

  FUNC_3(VAR_7, VAR_4);

  VAR_16 = FUNC_2();
  if (!VAR_16) {





   VAR_10 = 1;
   FUNC_5(&VAR_14->refcount, VAR_3);
  } else {






   VAR_15 = ((struct ipmi_system_interface_addr *)
        &(VAR_16->addr));
   VAR_15->addr_type = VAR_2;
   VAR_15->channel = VAR_0;
   VAR_15->lun = VAR_8->rsp[0] & 3;

   VAR_16->user = VAR_14;
   VAR_16->user_msg_data = ((void*)0);
   VAR_16->recv_type = VAR_1;
   VAR_16->msg.netfn = VAR_8->rsp[0] >> 2;
   VAR_16->msg.cmd = VAR_8->rsp[1];
   VAR_16->msg.data = VAR_16->msg_data;





   VAR_16->msg.data_len = VAR_8->rsp_size - 4;
   FUNC_6(VAR_16->msg_data,
          &(VAR_8->rsp[4]),
          VAR_8->rsp_size - 4);
   FUNC_0(VAR_16);
  }
 }

 return VAR_10;
}
