
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ u32 ;
typedef int u16 ;
struct TYPE_6__ {int port; } ;
struct TYPE_7__ {TYPE_2__ bc; } ;
struct TYPE_8__ {struct netconn* conn; TYPE_3__ msg; } ;
struct TYPE_5__ {int * tcp; } ;
struct netconn {scalar_t__ err; int type; void (* callback ) (struct netconn*,int,u32) ;int mbox; TYPE_4__ msg; scalar_t__ recvavail; scalar_t__ socket; int state; void* recvmbox; void* acceptmbox; int sem; TYPE_1__ pcb; } ;
struct api_msg {scalar_t__ err; int type; void (* callback ) (struct netconn*,int,u32) ;int mbox; TYPE_4__ msg; scalar_t__ recvavail; scalar_t__ socket; int state; void* recvmbox; void* acceptmbox; int sem; TYPE_1__ pcb; } ;
typedef int mqmsg_t ;
typedef enum netconn_type { ____Placeholder_netconn_type } netconn_type ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int *,int ,int) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int ) ;
 scalar_t__ VAR_5 ;
 scalar_t__ FUNC_2 (int *,int ) ;
 int VAR_6 ;
 int FUNC_3 (int ,int ,int ) ;
 int VAR_7 ;
 void* VAR_8 ;
 int FUNC_4 (struct netconn*) ;
 int FUNC_5 (int ,struct netconn*) ;
 struct netconn* FUNC_6 (int ) ;

__attribute__((used)) static struct netconn* FUNC_7(enum netconn_type VAR_9,u16 VAR_10,void (*VAR_11)(struct netconn *,enum netconn_evt,u32))
{
 u32 VAR_12 = 0;
 struct netconn *VAR_13;
 struct api_msg *VAR_14;

 VAR_13 = FUNC_6(VAR_3);
 if(!VAR_13) return ((void*)0);

 VAR_13->err = VAR_1;
 VAR_13->type = VAR_9;
 VAR_13->pcb.tcp = ((void*)0);

 if(FUNC_2(&VAR_13->mbox,VAR_4)!=VAR_5) {
  FUNC_5(VAR_3,VAR_13);
  return ((void*)0);
 }
 if(FUNC_0(&VAR_13->sem,0,1)==-1) {
  FUNC_1(VAR_13->mbox);
  FUNC_5(VAR_3,VAR_13);
  return ((void*)0);
 }

 VAR_13->acceptmbox = VAR_8;
 VAR_13->recvmbox = VAR_8;
 VAR_13->state = VAR_7;
 VAR_13->socket = 0;
 VAR_13->callback = VAR_11;
 VAR_13->recvavail = 0;

 VAR_14 = FUNC_6(VAR_2);
 if(!VAR_14) {
  FUNC_1(VAR_13->mbox);
  FUNC_5(VAR_3,VAR_13);
  return ((void*)0);
 }

 VAR_14->type = VAR_0;
 VAR_14->msg.msg.bc.port = VAR_10;
 VAR_14->msg.conn = VAR_13;
 FUNC_4(VAR_14);
 FUNC_3(VAR_13->mbox,(mqmsg_t)&VAR_12,VAR_6);
 FUNC_5(VAR_2,VAR_14);

 if(VAR_13->err!=VAR_1) {
  FUNC_1(VAR_13->mbox);
  FUNC_5(VAR_3,VAR_13);
  return ((void*)0);
 }
 return VAR_13;
}
