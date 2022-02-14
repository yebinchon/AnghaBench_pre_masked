
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__ is_current; int is_destroyed; } ;
typedef TYPE_1__ EGL_CONTEXT_T ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (TYPE_1__*) ;

void FUNC_3(EGL_CONTEXT_T *VAR_0)
{
   FUNC_2(VAR_0);

   if (!VAR_0->is_destroyed)
      return;

   if (VAR_0->is_current)
      return;

   FUNC_0(VAR_0);
   FUNC_1(VAR_0);
}
