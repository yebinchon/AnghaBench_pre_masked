
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct ipmi_smi_msg {int rsp_size; int* rsp; int* data; int data_size; } ;
struct ipmi_smi_handlers {int (* sender ) (int ,struct ipmi_smi_msg*,int ) ;} ;
struct TYPE_9__ {int netfn; int cmd; int data_len; int data; } ;
struct ipmi_recv_msg {int msgid; int msg_data; TYPE_2__ msg; int recv_type; TYPE_3__* user; int addr; } ;
struct ipmi_ipmb_addr {int slave_addr; int lun; int channel; int addr_type; } ;
struct cmd_rcvr {TYPE_3__* user; } ;
typedef TYPE_3__* ipmi_user_t ;
typedef TYPE_4__* ipmi_smi_t ;
struct TYPE_11__ {int send_info; struct ipmi_smi_handlers* handlers; TYPE_1__* channels; } ;
struct TYPE_10__ {int refcount; } ;
struct TYPE_8__ {unsigned char address; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct ipmi_recv_msg*) ;
 struct cmd_rcvr* FUNC_1 (TYPE_4__*,unsigned char,unsigned char,unsigned char) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 void* FUNC_2 (unsigned char*,int) ;
 struct ipmi_recv_msg* FUNC_3 () ;
 int FUNC_4 (TYPE_4__*,int ) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *,int ) ;
 int FUNC_7 (int ,int*,int) ;
 int FUNC_8 (char*,...) ;
 int FUNC_9 () ;
 int FUNC_10 () ;
 int FUNC_11 (int ,struct ipmi_smi_msg*,int ) ;
 int VAR_8 ;

__attribute__((used)) static int FUNC_12(ipmi_smi_t VAR_9,
       struct ipmi_smi_msg *VAR_10)
{
 struct cmd_rcvr *VAR_11;
 int VAR_12 = 0;
 unsigned char VAR_13;
 unsigned char VAR_14;
 unsigned char VAR_15;
 ipmi_user_t VAR_16 = ((void*)0);
 struct ipmi_ipmb_addr *VAR_17;
 struct ipmi_recv_msg *VAR_18;
 struct ipmi_smi_handlers *VAR_19;

 if (VAR_10->rsp_size < 10) {

  FUNC_4(VAR_9, VAR_7);
  return 0;
 }

 if (VAR_10->rsp[2] != 0) {

  return 0;
 }

 VAR_13 = VAR_10->rsp[4] >> 2;
 VAR_14 = VAR_10->rsp[8];
 VAR_15 = VAR_10->rsp[3] & 0xf;

 FUNC_9();
 VAR_11 = FUNC_1(VAR_9, VAR_13, VAR_14, VAR_15);
 if (VAR_11) {
  VAR_16 = VAR_11->user;
  FUNC_5(&VAR_16->refcount);
 } else
  VAR_16 = ((void*)0);
 FUNC_10();

 if (VAR_16 == ((void*)0)) {

  FUNC_4(VAR_9, VAR_8);

  VAR_10->data[0] = (VAR_3 << 2);
  VAR_10->data[1] = VAR_4;
  VAR_10->data[2] = VAR_10->rsp[3];
  VAR_10->data[3] = VAR_10->rsp[6];
  VAR_10->data[4] = ((VAR_13 + 1) << 2) | (VAR_10->rsp[7] & 0x3);
  VAR_10->data[5] = FUNC_2(&(VAR_10->data[3]), 2);
  VAR_10->data[6] = VAR_9->channels[VAR_10->rsp[3] & 0xf].address;

  VAR_10->data[7] = (VAR_10->rsp[7] & 0xfc) | (VAR_10->rsp[4] & 0x3);
  VAR_10->data[8] = VAR_10->rsp[8];
  VAR_10->data[9] = VAR_1;
  VAR_10->data[10] = FUNC_2(&(VAR_10->data[6]), 4);
  VAR_10->data_size = 11;
  FUNC_9();
  VAR_19 = VAR_9->handlers;
  if (VAR_19) {
   VAR_19->sender(VAR_9->send_info, VAR_10, 0);





   VAR_12 = -1;
  }
  FUNC_10();
 } else {

  FUNC_4(VAR_9, VAR_6);

  VAR_18 = FUNC_3();
  if (!VAR_18) {





   VAR_12 = 1;
   FUNC_6(&VAR_16->refcount, VAR_5);
  } else {

   VAR_17 = (struct ipmi_ipmb_addr *) &VAR_18->addr;
   VAR_17->addr_type = VAR_2;
   VAR_17->slave_addr = VAR_10->rsp[6];
   VAR_17->lun = VAR_10->rsp[7] & 3;
   VAR_17->channel = VAR_10->rsp[3] & 0xf;





   VAR_18->user = VAR_16;
   VAR_18->recv_type = VAR_0;
   VAR_18->msgid = VAR_10->rsp[7] >> 2;
   VAR_18->msg.netfn = VAR_10->rsp[4] >> 2;
   VAR_18->msg.cmd = VAR_10->rsp[8];
   VAR_18->msg.data = VAR_18->msg_data;





   VAR_18->msg.data_len = VAR_10->rsp_size - 10;
   FUNC_7(VAR_18->msg_data,
          &(VAR_10->rsp[9]),
          VAR_10->rsp_size - 10);
   FUNC_0(VAR_18);
  }
 }

 return VAR_12;
}
