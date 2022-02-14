
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_8__ {int fifo; } ;
struct TYPE_9__ {int sync_state; TYPE_1__ queues; } ;
typedef TYPE_2__ lwp_thrqueue ;
struct TYPE_10__ {int timer; } ;
typedef TYPE_3__ lwp_cntrl ;






 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (TYPE_3__*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 TYPE_3__* VAR_0 ;

lwp_cntrl* FUNC_8(lwp_thrqueue *VAR_1)
{
 u32 VAR_2;
 lwp_cntrl *VAR_3;

 FUNC_0(VAR_2);
 if(!FUNC_3(&VAR_1->queues.fifo)) {
  VAR_3 = (lwp_cntrl*)FUNC_2(&VAR_1->queues.fifo);
  if(!FUNC_6(&VAR_3->timer)) {
   FUNC_1(VAR_2);
   FUNC_4(VAR_3);
  } else {
   FUNC_5(&VAR_3->timer);
   FUNC_1(VAR_2);
   FUNC_7(&VAR_3->timer);
   FUNC_4(VAR_3);
  }
  return VAR_3;
 }

 switch(VAR_1->sync_state) {
  case 129:
  case 130:
   FUNC_1(VAR_2);
   return ((void*)0);
  case 131:
  case 128:
   VAR_1->sync_state = 130;
   FUNC_1(VAR_2);
   return VAR_0;
 }
 return ((void*)0);
}
