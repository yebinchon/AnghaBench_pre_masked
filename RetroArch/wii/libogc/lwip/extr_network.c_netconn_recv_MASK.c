
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
struct pbuf {int tot_len; } ;
struct TYPE_6__ {TYPE_1__* tcp; } ;
struct netconn {scalar_t__ recvmbox; scalar_t__ type; scalar_t__ mbox; void* err; int (* callback ) (struct netconn*,int ,int) ;int recvavail; TYPE_2__ pcb; } ;
struct TYPE_7__ {int len; } ;
struct TYPE_8__ {TYPE_3__ msg; struct netconn* conn; } ;
struct netbuf {struct pbuf* p; TYPE_4__ msg; int type; int * fromaddr; scalar_t__ fromport; struct pbuf* ptr; } ;
struct api_msg {struct pbuf* p; TYPE_4__ msg; int type; int * fromaddr; scalar_t__ fromport; struct pbuf* ptr; } ;
typedef int mqmsg_t ;
struct TYPE_5__ {scalar_t__ state; } ;


 int VAR_0 ;
 int VAR_1 ;
 void* VAR_2 ;
 void* VAR_3 ;
 void* VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_0 (int ,char*) ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_1 (scalar_t__) ;
 int VAR_8 ;
 int FUNC_2 (scalar_t__,int ,int ) ;
 int VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 int FUNC_3 (struct netbuf*) ;
 int FUNC_4 (int ,struct netbuf*) ;
 struct netbuf* FUNC_5 (int ) ;
 int FUNC_6 (struct netconn*,int ,int) ;
 int FUNC_7 (struct netconn*,int ,int) ;

__attribute__((used)) static struct netbuf* FUNC_8(struct netconn *VAR_12)
{
 u32 VAR_13 = 0;
 struct api_msg *VAR_14;
 struct netbuf *VAR_15;
 struct pbuf *VAR_16;
 u16 VAR_17;

 if(VAR_12==((void*)0)) return ((void*)0);
 if(VAR_12->recvmbox==VAR_11) {
  VAR_12->err = VAR_2;
  return ((void*)0);
 }
 if(VAR_12->err!=VAR_4) return ((void*)0);

 if(VAR_12->type==VAR_10) {
  if(VAR_12->pcb.tcp->state==VAR_5) {
   VAR_12->err = VAR_2;
   return ((void*)0);
  }

  VAR_15 = FUNC_5(VAR_7);
  if(VAR_15==((void*)0)) {
   VAR_12->err = VAR_3;
   return ((void*)0);
  }

  FUNC_2(VAR_12->recvmbox,(mqmsg_t)&VAR_16,VAR_8);
  if(VAR_16!=((void*)0)) {
   VAR_17 = VAR_16->tot_len;
   VAR_12->recvavail -= VAR_17;
  } else
   VAR_17 = 0;

  if(VAR_12->callback)
   (*VAR_12->callback)(VAR_12,VAR_9,VAR_17);

  if(VAR_16==((void*)0)) {
   FUNC_4(VAR_7,VAR_15);
   FUNC_1(VAR_12->recvmbox);
   VAR_12->recvmbox = VAR_11;
   return ((void*)0);
  }

  VAR_15->p = VAR_16;
  VAR_15->ptr = VAR_16;
  VAR_15->fromport = 0;
  VAR_15->fromaddr = ((void*)0);

  if((VAR_14=FUNC_5(VAR_6))==((void*)0)) {
   VAR_12->err = VAR_3;
   return VAR_15;
  }

  VAR_14->type = VAR_0;
  VAR_14->msg.conn = VAR_12;
  if(VAR_15!=((void*)0))
   VAR_14->msg.msg.len = VAR_17;
  else
   VAR_14->msg.msg.len = 1;

  FUNC_3(VAR_14);
  FUNC_2(VAR_12->mbox,(mqmsg_t)&VAR_13,VAR_8);
  FUNC_4(VAR_6,VAR_14);
 } else {
  FUNC_2(VAR_12->recvmbox,(mqmsg_t)&VAR_15,VAR_8);
  VAR_12->recvavail -= VAR_15->p->tot_len;
  if(VAR_12->callback)
   (*VAR_12->callback)(VAR_12,VAR_9,VAR_15->p->tot_len);
 }

 FUNC_0(VAR_1, ("netconn_recv: received %p (err %d)\n", (void )VAR_15, VAR_12->err));
 return VAR_15;
}
