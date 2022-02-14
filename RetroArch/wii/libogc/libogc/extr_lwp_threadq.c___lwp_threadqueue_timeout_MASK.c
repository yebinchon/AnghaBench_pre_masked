
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {scalar_t__ sync_state; int timeout_state; } ;
typedef TYPE_2__ lwp_thrqueue ;
struct TYPE_7__ {TYPE_2__* queue; int ret_code; } ;
struct TYPE_9__ {TYPE_1__ wait; } ;
typedef TYPE_3__ lwp_cntrl ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 () ;
 int FUNC_1 () ;
 scalar_t__ FUNC_2 (TYPE_3__*) ;
 int FUNC_3 (TYPE_2__*,TYPE_3__*) ;

__attribute__((used)) static void FUNC_4(void *VAR_3)
{
 lwp_cntrl *VAR_4;
 lwp_thrqueue *VAR_5;

 FUNC_0();
 VAR_4 = (lwp_cntrl*)VAR_3;
 VAR_5 = VAR_4->wait.queue;
 if(VAR_5->sync_state!=VAR_1 && FUNC_2(VAR_4)) {
  if(VAR_5->sync_state!=VAR_0) VAR_5->sync_state = VAR_2;
 } else {
  VAR_4->wait.ret_code = VAR_4->wait.queue->timeout_state;
  FUNC_3(VAR_4->wait.queue,VAR_4);
 }
 FUNC_1();
}
