
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u8 ;
typedef scalar_t__ u32 ;
typedef scalar_t__ u16 ;
struct TYPE_5__ {int tcp; } ;
struct netconn {scalar_t__ err; scalar_t__ type; int state; int sem; int mbox; TYPE_1__ pcb; } ;
struct TYPE_6__ {scalar_t__ len; int copy; void* dataptr; } ;
struct TYPE_7__ {TYPE_2__ w; } ;
struct TYPE_8__ {TYPE_3__ msg; struct netconn* conn; } ;
struct api_msg {TYPE_4__ msg; int type; } ;
typedef int mqmsg_t ;
typedef scalar_t__ err_t ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (int ) ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_2 (int ,int ,int ) ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 int VAR_9 ;
 int FUNC_3 (struct api_msg*) ;
 int FUNC_4 (int ,struct api_msg*) ;
 struct api_msg* FUNC_5 (int ) ;
 scalar_t__ FUNC_6 (int ) ;

__attribute__((used)) static err_t FUNC_7(struct netconn *VAR_10,const void *VAR_11,u32 VAR_12,u8 VAR_13)
{
 u32 VAR_14 = 0;
 struct api_msg *VAR_15;
 u16 VAR_16,VAR_17;

 FUNC_0(VAR_1, ("netconn_write(%d)\n",VAR_10->err));

 if(VAR_10==((void*)0)) return VAR_4;
 if(VAR_10->err!=VAR_3) return VAR_10->err;

 if((VAR_15=FUNC_5(VAR_5))==((void*)0)) return (VAR_10->err = VAR_2);

 VAR_15->type = VAR_0;
 VAR_15->msg.conn = VAR_10;
 VAR_10->state = VAR_9;
 while(VAR_10->err==VAR_3 && VAR_12>0) {
  VAR_15->msg.msg.w.dataptr = (void*)VAR_11;
  VAR_15->msg.msg.w.copy = VAR_13;
  if(VAR_10->type==VAR_8) {
   while((VAR_17=FUNC_6(VAR_10->pcb.tcp))==0) {
    FUNC_0(VAR_1,("netconn_write: tcp_sndbuf = 0,err = %d\n", VAR_10->err));
    FUNC_1(VAR_10->sem);
    if(VAR_10->err!=VAR_3) goto ret;
   }
   if(VAR_12>VAR_17)
    VAR_16 = VAR_17;
   else
    VAR_16 = VAR_12;
  } else
   VAR_16 = VAR_12;

  FUNC_0(VAR_1, ("netconn_write: writing %d bytes (%d)\n", VAR_16, VAR_13));
  VAR_15->msg.msg.w.len = VAR_16;
  FUNC_3(VAR_15);
  FUNC_2(VAR_10->mbox,(mqmsg_t)&VAR_14,VAR_6);
  if(VAR_10->err==VAR_3) {
   FUNC_0(VAR_1, ("netconn_write: %d bytes written\n",VAR_16));
   VAR_11 = (void*)((char*)VAR_11+VAR_16);
   VAR_12 -= VAR_16;
  } else if(VAR_10->err==VAR_2) {
   FUNC_0(VAR_1,("netconn_write: mem err\n"));
   VAR_10->err = VAR_3;
   FUNC_1(VAR_10->sem);
  } else {
   FUNC_0(VAR_1,("netconn_write: err = %d\n", VAR_10->err));
   break;
  }
 }
ret:
 FUNC_4(VAR_5,VAR_15);
 VAR_10->state = VAR_7;

 return VAR_10->err;
}
