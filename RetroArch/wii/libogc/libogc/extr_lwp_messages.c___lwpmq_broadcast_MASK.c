
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_7__ {scalar_t__ num_pendingmsgs; int max_msgsize; int wait_queue; } ;
typedef TYPE_1__ mq_cntrl ;
struct TYPE_8__ {scalar_t__ ret_arg_1; int ret_arg; } ;
typedef TYPE_2__ lwp_waitinfo ;
struct TYPE_9__ {TYPE_2__ wait; } ;
typedef TYPE_3__ lwp_cntrl ;


 int VAR_0 ;
 TYPE_3__* FUNC_0 (int *) ;
 int FUNC_1 (int ,void*,int) ;
 int FUNC_2 (char*,TYPE_1__*,void*,int,int,int*) ;

u32 FUNC_3(mq_cntrl *VAR_1,void *VAR_2,u32 VAR_3,u32 VAR_4,u32 *VAR_5)
{
 lwp_cntrl *VAR_6;
 u32 VAR_7;
 lwp_waitinfo *VAR_8;
 u32 VAR_9;



 if(VAR_1->num_pendingmsgs!=0) {
  *VAR_5 = 0;
  return VAR_0;
 }

 VAR_7 = 0;
 while((VAR_6=FUNC_0(&VAR_1->wait_queue))) {
  VAR_8 = &VAR_6->wait;
  ++VAR_7;

  VAR_9 = VAR_3;
  if(VAR_3>VAR_1->max_msgsize)
   VAR_9 = VAR_1->max_msgsize;

  FUNC_1(VAR_8->ret_arg,VAR_2,VAR_9);
  *(u32*)VAR_8->ret_arg_1 = VAR_3;
 }
 *VAR_5 = VAR_7;
 return VAR_0;
}
