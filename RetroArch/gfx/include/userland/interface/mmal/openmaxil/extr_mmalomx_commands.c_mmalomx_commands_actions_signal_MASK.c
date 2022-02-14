
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int cmd_sema; scalar_t__ cmd_thread_used; } ;
typedef TYPE_1__ MMALOMX_COMPONENT_T ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int *) ;

void FUNC_2(MMALOMX_COMPONENT_T *VAR_0)
{
   if (VAR_0->cmd_thread_used)
      FUNC_1(&VAR_0->cmd_sema);
   else
      FUNC_0(VAR_0);
}
