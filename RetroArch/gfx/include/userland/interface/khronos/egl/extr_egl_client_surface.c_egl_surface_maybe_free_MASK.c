
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ context_binding_count; int is_destroyed; } ;
typedef TYPE_1__ EGL_SURFACE_T ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*) ;

void FUNC_2(EGL_SURFACE_T *VAR_0)
{
   FUNC_1(VAR_0);

   if (!VAR_0->is_destroyed)
      return;

   if (VAR_0->context_binding_count)
      return;

   FUNC_0(VAR_0);
}
