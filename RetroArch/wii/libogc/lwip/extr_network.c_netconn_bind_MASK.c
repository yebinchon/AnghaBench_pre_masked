
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ u32 ;
typedef int u16 ;
struct netconn {scalar_t__ type; scalar_t__ recvmbox; int err; int mbox; } ;
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
 int FUNC_0 (int ,char*) ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ FUNC_1 (scalar_t__*,int ) ;
 int VAR_7 ;
 int FUNC_2 (int ,int ,int ) ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 int FUNC_3 (struct api_msg*) ;
 int FUNC_4 (int ,struct api_msg*) ;
 struct api_msg* FUNC_5 (int ) ;

__attribute__((used)) static err_t FUNC_6(struct netconn *VAR_10,struct ip_addr *VAR_11,u16 VAR_12)
{
 u32 VAR_13 = 0;
 struct api_msg *VAR_14;

 FUNC_0(VAR_1, ("netconn_bind(%p)\n", VAR_10));

 if(VAR_10==((void*)0)) return VAR_3;
 if(VAR_10->type!=VAR_8 && VAR_10->recvmbox==VAR_9) {
  if(FUNC_1(&VAR_10->recvmbox,VAR_5)!=VAR_6) return VAR_2;
 }

 if((VAR_14=FUNC_5(VAR_4))==((void*)0))
  return (VAR_10->err = VAR_2);

 VAR_14->type = VAR_0;
 VAR_14->msg.conn = VAR_10;
 VAR_14->msg.msg.bc.ipaddr = VAR_11;
 VAR_14->msg.msg.bc.port = VAR_12;
 FUNC_3(VAR_14);
 FUNC_2(VAR_10->mbox,(mqmsg_t)&VAR_13,VAR_7);
 FUNC_4(VAR_4,VAR_14);
 return VAR_10->err;
}
