
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ u32 ;
typedef int u16 ;
struct netconn {scalar_t__ recvmbox; int err; int mbox; } ;
struct ip_addr {int dummy; } ;
struct TYPE_4__ {int port; struct ip_addr* ipaddr; } ;
struct TYPE_5__ {TYPE_1__ bc; } ;
struct TYPE_6__ {TYPE_2__ msg; struct netconn* conn; } ;
struct api_msg {TYPE_3__ msg; int type; } ;
typedef int mqmsg_t ;
typedef int err_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ FUNC_0 (scalar_t__*,int ) ;
 int VAR_5 ;
 int FUNC_1 (int ,int ,int ) ;
 scalar_t__ VAR_6 ;
 int FUNC_2 (struct api_msg*) ;
 int FUNC_3 (int ,struct api_msg*) ;
 struct api_msg* FUNC_4 (int ) ;

__attribute__((used)) static err_t FUNC_5(struct netconn *VAR_7,struct ip_addr *VAR_8,u16 VAR_9)
{
 u32 VAR_10 = 0;
 struct api_msg *VAR_11;

 if(VAR_7==((void*)0)) return -1;
 if(VAR_7->recvmbox==VAR_6) {
  if(FUNC_0(&VAR_7->recvmbox,VAR_3)!=VAR_4) return VAR_1;
 }

 if((VAR_11=FUNC_4(VAR_2))==((void*)0)) return VAR_1;

 VAR_11->type = VAR_0;
 VAR_11->msg.conn = VAR_7;
 VAR_11->msg.msg.bc.ipaddr = VAR_8;
 VAR_11->msg.msg.bc.port = VAR_9;
 FUNC_2(VAR_11);
 FUNC_1(VAR_7->mbox,(mqmsg_t)&VAR_10,VAR_5);
 FUNC_3(VAR_2,VAR_11);
 return VAR_7->err;
}
