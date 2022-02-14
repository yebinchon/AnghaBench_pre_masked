
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int sys_mbox ;
struct tcp_pcb {int dummy; } ;
struct TYPE_2__ {struct tcp_pcb* tcp; } ;
struct netconn {int socket; scalar_t__ recvavail; int (* callback ) (struct netconn*,int ,int ) ;int err; int acceptmbox; TYPE_1__ pcb; int type; int mbox; int recvmbox; int sem; } ;
typedef int err_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (int *,int ,int) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (int ) ;
 scalar_t__ VAR_5 ;
 scalar_t__ FUNC_3 (int *,int ) ;
 int VAR_6 ;
 int FUNC_4 (int ,struct netconn*,int ) ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_5 (int ,struct netconn*) ;
 struct netconn* FUNC_6 (int ) ;
 int FUNC_7 (struct netconn*) ;
 int FUNC_8 (struct netconn*,int ,int ) ;

__attribute__((used)) static err_t FUNC_9(void *VAR_10,struct tcp_pcb *VAR_11,err_t VAR_12)
{
 sys_mbox VAR_13;
 struct netconn *VAR_14,*VAR_15 = (struct netconn*)VAR_10;

 FUNC_0(VAR_0, ("accept_func: %p %p %d\n",VAR_10,VAR_11,VAR_12));

 VAR_13 = VAR_15->acceptmbox;
 VAR_14 = FUNC_6(VAR_3);
 if(VAR_14==((void*)0)) return VAR_1;

 if(FUNC_3(&VAR_14->recvmbox,VAR_4)!=VAR_5) {
  FUNC_5(VAR_3,VAR_14);
  return VAR_1;
 }

 if(FUNC_3(&VAR_14->mbox,VAR_4)!=VAR_5) {
  FUNC_2(VAR_14->recvmbox);
  FUNC_5(VAR_3,VAR_14);
  return VAR_1;
 }

 if(FUNC_1(&VAR_14->sem,0,1)==-1) {
  FUNC_2(VAR_14->recvmbox);
  FUNC_2(VAR_14->mbox);
  FUNC_5(VAR_3,VAR_14);
  return VAR_1;
 }

 VAR_14->type = VAR_8;
 VAR_14->pcb.tcp = VAR_11;
 FUNC_7(VAR_14);

 VAR_14->acceptmbox = VAR_9;
 VAR_14->err = VAR_12;

 if(VAR_15->callback) {
  (*VAR_15->callback)(VAR_15,VAR_7,0);
 }
 VAR_14->callback = VAR_15->callback;
 VAR_14->socket = -1;
 VAR_14->recvavail = 0;

 FUNC_4(VAR_13,VAR_14,VAR_6);
 return VAR_2;
}
