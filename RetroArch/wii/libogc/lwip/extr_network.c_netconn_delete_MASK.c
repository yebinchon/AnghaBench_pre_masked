
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u32 ;
typedef scalar_t__ sys_mbox ;
struct pbuf {int dummy; } ;
struct TYPE_2__ {struct netconn* conn; } ;
struct netconn {scalar_t__ type; scalar_t__ mbox; scalar_t__ recvmbox; scalar_t__ acceptmbox; int sem; TYPE_1__ msg; } ;
struct netbuf {int dummy; } ;
struct api_msg {scalar_t__ type; scalar_t__ mbox; scalar_t__ recvmbox; scalar_t__ acceptmbox; int sem; TYPE_1__ msg; } ;
typedef int mqmsg_t ;
typedef int err_t ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (int ) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_2 (scalar_t__) ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ FUNC_3 (scalar_t__,int ,int ) ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 int VAR_10 ;
 scalar_t__ VAR_11 ;
 int FUNC_4 (struct netconn*) ;
 int FUNC_5 (int ,struct netconn*) ;
 struct netconn* FUNC_6 (int ) ;
 int FUNC_7 (struct netbuf*) ;
 int FUNC_8 (struct pbuf*) ;

__attribute__((used)) static err_t FUNC_9(struct netconn *VAR_12)
{
 u32 VAR_13 = 0;
 struct api_msg *VAR_14;
 sys_mbox VAR_15;
 void *VAR_16;

 FUNC_0(VAR_1, ("netconn_delete(%p)\n", VAR_12));

 if(!VAR_12) return VAR_3;

 VAR_14 = FUNC_6(VAR_4);
 if(!VAR_14) return VAR_2;

 VAR_14->type = VAR_0;
 VAR_14->msg.conn = VAR_12;
 FUNC_4(VAR_14);
 FUNC_3(VAR_12->mbox,(mqmsg_t)&VAR_13,VAR_6);
 FUNC_5(VAR_4,VAR_14);

 VAR_15 = VAR_12->recvmbox;
 VAR_12->recvmbox = VAR_9;
 if(VAR_15!=VAR_9) {
  while(FUNC_3(VAR_15,(mqmsg_t)&VAR_16,VAR_7)==VAR_11) {
   if(VAR_16!=((void*)0)) {
    if(VAR_12->type==VAR_8)
     FUNC_8((struct pbuf*)VAR_16);
    else
     FUNC_7((struct netbuf*)VAR_16);
   }
  }
  FUNC_2(VAR_15);
 }

 VAR_15 = VAR_12->acceptmbox;
 VAR_12->acceptmbox = VAR_9;
 if(VAR_15!=VAR_9) {
  while(FUNC_3(VAR_15,(mqmsg_t)&VAR_16,VAR_7)==VAR_11) {
   if(VAR_16!=((void*)0)) FUNC_9((struct netconn*)VAR_16);
  }
  FUNC_2(VAR_15);
 }

 FUNC_2(VAR_12->mbox);
 VAR_12->mbox = VAR_9;

 FUNC_1(VAR_12->sem);
 VAR_12->sem = VAR_10;

 FUNC_5(VAR_5,VAR_12);
 return VAR_3;
}
