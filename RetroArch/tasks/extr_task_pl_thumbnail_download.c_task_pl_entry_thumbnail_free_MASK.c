
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ state; } ;
typedef TYPE_1__ retro_task_t ;
typedef int pl_thumb_handle_t ;


 int FUNC_0 (int *,int) ;

__attribute__((used)) static void FUNC_1(retro_task_t *VAR_0)
{
   pl_thumb_handle_t *VAR_1 = ((void*)0);

   if (!VAR_0)
      return;

   VAR_1 = (pl_thumb_handle_t*)VAR_0->state;

   FUNC_0(VAR_1, 0);
}
