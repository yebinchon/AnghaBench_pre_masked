
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ipmi_smi_msg {int rsp_size; int* rsp; } ;
struct TYPE_2__ {int netfn; int data_len; int data; } ;
struct ipmi_recv_msg {int recv_type; TYPE_1__ msg; int msg_data; } ;
struct ipmi_lan_addr {int session_handle; int remote_SWID; int local_SWID; int channel; int privilege; int lun; int addr_type; } ;
struct ipmi_addr {int dummy; } ;
typedef int ipmi_smi_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct ipmi_recv_msg*) ;
 int VAR_2 ;
 scalar_t__ FUNC_1 (int ,int,int,int,int,struct ipmi_addr*,struct ipmi_recv_msg**) ;
 int VAR_3 ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int ,int*,int) ;
 int VAR_4 ;

__attribute__((used)) static int FUNC_4(ipmi_smi_t VAR_5,
      struct ipmi_smi_msg *VAR_6)
{
 struct ipmi_lan_addr VAR_7;
 struct ipmi_recv_msg *VAR_8;






 if (VAR_6->rsp_size < 13) {

  FUNC_2(VAR_5, VAR_3);
  return 0;
 }

 if (VAR_6->rsp[2] != 0) {

  return 0;
 }

 VAR_7.addr_type = VAR_0;
 VAR_7.session_handle = VAR_6->rsp[4];
 VAR_7.remote_SWID = VAR_6->rsp[8];
 VAR_7.local_SWID = VAR_6->rsp[5];
 VAR_7.channel = VAR_6->rsp[3] & 0x0f;
 VAR_7.privilege = VAR_6->rsp[3] >> 4;
 VAR_7.lun = VAR_6->rsp[9] & 3;





 if (FUNC_1(VAR_5,
     VAR_6->rsp[9] >> 2,
     VAR_6->rsp[3] & 0x0f,
     VAR_6->rsp[10],
     (VAR_6->rsp[6] >> 2) & (~1),
     (struct ipmi_addr *) &(VAR_7),
     &VAR_8)) {




  FUNC_2(VAR_5, VAR_4);
  return 0;
 }

 FUNC_3(VAR_8->msg_data,
        &(VAR_6->rsp[11]),
        VAR_6->rsp_size - 11);





 VAR_8->msg.netfn = VAR_6->rsp[6] >> 2;
 VAR_8->msg.data = VAR_8->msg_data;
 VAR_8->msg.data_len = VAR_6->rsp_size - 12;
 VAR_8->recv_type = VAR_1;
 FUNC_2(VAR_5, VAR_2);
 FUNC_0(VAR_8);

 return 0;
}
