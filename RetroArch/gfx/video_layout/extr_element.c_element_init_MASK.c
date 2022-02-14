
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int state; int o_bind; int i_bind; int i_mask; int i_raw; int components_count; int * components; int render_bounds; int bounds; int name; } ;
typedef TYPE_1__ element_t ;
typedef int component_t ;


 int * FUNC_0 (int,int) ;
 int FUNC_1 (char const*) ;
 int FUNC_2 () ;
 int FUNC_3 () ;

void FUNC_4(element_t *VAR_0, const char *VAR_1, int VAR_2)
{
   VAR_0->name = FUNC_1(VAR_1);
   VAR_0->state = -1;
   VAR_0->o_bind = -1;
   VAR_0->i_bind = -1;
   VAR_0->i_mask = -1;
   VAR_0->i_raw = 0;

   VAR_0->bounds = FUNC_2();
   VAR_0->render_bounds = FUNC_3();

   VAR_0->components = (component_t*)(VAR_2 > 0 ?
         FUNC_0(VAR_2, sizeof(component_t)) : ((void*)0));
   VAR_0->components_count = VAR_2;
}
