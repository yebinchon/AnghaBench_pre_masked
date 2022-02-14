
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_5__ {int * priority; int fifo; } ;
struct TYPE_6__ {int state; int mode; int timeout_state; TYPE_1__ queues; int sync_state; } ;
typedef TYPE_2__ lwp_thrqueue ;




 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (char*,TYPE_2__*,int,int,int) ;

void FUNC_2(lwp_thrqueue *VAR_2,u32 VAR_3,u32 VAR_4,u32 VAR_5)
{
 u32 VAR_6;

 VAR_2->state = VAR_4;
 VAR_2->mode = VAR_3;
 VAR_2->timeout_state = VAR_5;
 VAR_2->sync_state = VAR_1;



 switch(VAR_3) {
  case 129:
   FUNC_0(&VAR_2->queues.fifo);
   break;
  case 128:
   for(VAR_6=0;VAR_6<VAR_0;VAR_6++)
    FUNC_0(&VAR_2->queues.priority[VAR_6]);
   break;
 }
}
