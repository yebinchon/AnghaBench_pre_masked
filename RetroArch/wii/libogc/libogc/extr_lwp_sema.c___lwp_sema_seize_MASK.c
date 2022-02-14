
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int u64 ;
typedef void* u32 ;
struct TYPE_7__ {scalar_t__ count; int wait_queue; } ;
typedef TYPE_2__ lwp_sema ;
struct TYPE_6__ {void* id; int * queue; void* ret_code; } ;
struct TYPE_8__ {TYPE_1__ wait; } ;
typedef TYPE_3__ lwp_cntrl ;


 void* VAR_0 ;
 void* VAR_1 ;
 int FUNC_0 (void*) ;
 int FUNC_1 (void*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,int ) ;
 TYPE_3__* VAR_2 ;

u32 FUNC_4(lwp_sema *VAR_3,u32 VAR_4,u32 VAR_5,u64 VAR_6)
{
 u32 VAR_7;
 lwp_cntrl *VAR_8;

 VAR_8 = VAR_2;
 VAR_8->wait.ret_code = VAR_0;

 FUNC_0(VAR_7);
 if(VAR_3->count!=0) {
  --VAR_3->count;
  FUNC_1(VAR_7);
  return VAR_0;
 }

 if(!VAR_5) {
  FUNC_1(VAR_7);
  VAR_8->wait.ret_code = VAR_1;
  return VAR_1;
 }

 FUNC_2(&VAR_3->wait_queue);
 VAR_8->wait.queue = &VAR_3->wait_queue;
 VAR_8->wait.id = VAR_4;
 FUNC_1(VAR_7);

 FUNC_3(&VAR_3->wait_queue,VAR_6);
 return VAR_0;
}
