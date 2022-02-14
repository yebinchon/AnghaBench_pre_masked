
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int rotation; scalar_t__ hw_render_bottom_left; } ;
typedef TYPE_1__ gl_core_t ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*,int *,int) ;
 scalar_t__ FUNC_1 () ;

__attribute__((used)) static void FUNC_2(void *VAR_1, unsigned VAR_2)
{
   gl_core_t *VAR_3 = (gl_core_t*)VAR_1;

   if (!VAR_3)
      return;

   VAR_3->rotation = FUNC_1() && VAR_3->hw_render_bottom_left ? 90 * VAR_2 : 270 * VAR_2;
   FUNC_0(VAR_3, &VAR_0, 1);
}
