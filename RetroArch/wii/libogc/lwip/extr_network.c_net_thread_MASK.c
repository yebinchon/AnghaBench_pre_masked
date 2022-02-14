
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int sys_sem ;
struct timespec {int tv_sec; int tv_nsec; } ;
struct TYPE_5__ {int ctx; int (* f ) (int ) ;} ;
struct TYPE_4__ {int net; int p; } ;
struct TYPE_6__ {TYPE_2__ cb; TYPE_1__ inp; int apimsg; } ;
struct net_msg {int type; TYPE_3__ msg; } ;
typedef int mqmsg_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (int ,int ,int ) ;



 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 void* FUNC_3 (struct timespec*) ;
 int FUNC_4 (int *,int ,int ,int *) ;
 int FUNC_5 (int *,void*) ;
 int VAR_10 ;
 int FUNC_6 (int ) ;
 int VAR_11 ;
 int FUNC_7 (int ,int ) ;
 int FUNC_8 () ;
 int FUNC_9 () ;
 int FUNC_10 (int ,struct net_msg*) ;
 void* VAR_12 ;
 void* VAR_13 ;
 int VAR_14 ;
 int FUNC_11 (int ) ;
 int FUNC_12 () ;
 int VAR_15 ;
 int FUNC_13 () ;

__attribute__((used)) static void* FUNC_14(void *VAR_16)
{
 struct net_msg *VAR_17;
 struct timespec VAR_18;
 sys_sem VAR_19 = (sys_sem)VAR_16;

 FUNC_8();
 FUNC_9();
 FUNC_13();
 FUNC_12();

 VAR_18.tv_sec = VAR_1/VAR_4;
 VAR_18.tv_nsec = 0;
 VAR_12 = FUNC_3(&VAR_18);
 FUNC_4(&VAR_11,VAR_9,VAR_0,((void*)0));
 FUNC_5(&VAR_11,VAR_12);

 VAR_18.tv_sec = 0;
 VAR_18.tv_nsec = VAR_8*VAR_5;
 VAR_13 = FUNC_3(&VAR_18);
 FUNC_4(&VAR_15,VAR_10,VAR_7,((void*)0));

 FUNC_1(VAR_19);

 FUNC_0(VAR_6, ("net_thread(%p)\n",VAR_16));

 while(1) {
  FUNC_2(VAR_14,(mqmsg_t)&VAR_17,VAR_3);
  switch(VAR_17->type) {
   case 130:
       FUNC_0(VAR_6, ("net_thread: API message %p\n", (void *)VAR_17));
    FUNC_6(VAR_17->msg.apimsg);
    break;
   case 128:
       FUNC_0(VAR_6, ("net_thread: IP packet %p\n", (void *)VAR_17));
    FUNC_7(VAR_17->msg.inp.p,VAR_17->msg.inp.net);
    break;
   case 129:
       FUNC_0(VAR_6, ("net_thread: CALLBACK %p\n", (void *)VAR_17));
    VAR_17->msg.cb.f(VAR_17->msg.cb.ctx);
    break;
   default:
    break;
  }
  FUNC_10(VAR_2,VAR_17);
 }
 return ((void*)0);
}
