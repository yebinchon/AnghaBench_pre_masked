
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef void* retro_task_queue_msg_t ;
struct TYPE_4__ {int (* init ) () ;void* msg_push; } ;


 TYPE_1__* VAR_0 ;
 TYPE_1__ VAR_1 ;
 TYPE_1__ VAR_2 ;
 void* VAR_3 ;
 int FUNC_0 () ;
 int VAR_4 ;

void FUNC_1(bool VAR_5, retro_task_queue_msg_t VAR_6)
{
   VAR_0 = &VAR_1;
   VAR_3 = VAR_6;

   VAR_0->msg_push = VAR_6;
   VAR_0->init();
}
