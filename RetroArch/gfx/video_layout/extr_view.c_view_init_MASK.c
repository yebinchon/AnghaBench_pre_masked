
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ screens_count; int * screens; scalar_t__ layers_count; int * layers; int render_bounds; int bounds; int name; } ;
typedef TYPE_1__ view_t ;


 int FUNC_0 (char const*) ;
 int FUNC_1 () ;
 int FUNC_2 () ;

void FUNC_3(view_t *VAR_0, const char *VAR_1)
{
   VAR_0->name = FUNC_0(VAR_1);
   VAR_0->bounds = FUNC_1();
   VAR_0->render_bounds = FUNC_2();
   VAR_0->layers = ((void*)0);
   VAR_0->layers_count = 0;
   VAR_0->screens = ((void*)0);
   VAR_0->screens_count = 0;
}
