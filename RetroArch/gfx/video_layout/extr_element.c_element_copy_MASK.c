
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int components_count; int * components; int render_bounds; int bounds; int state; int name; } ;
typedef TYPE_1__ element_t ;
typedef int component_t ;


 int * FUNC_0 (int,int) ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (int ) ;

void FUNC_3(element_t *VAR_0, const element_t *VAR_1)
{
   int VAR_2;

   VAR_0->name = FUNC_2(VAR_1->name);
   VAR_0->state = VAR_1->state;

   VAR_0->bounds = VAR_1->bounds;
   VAR_0->render_bounds = VAR_1->render_bounds;

   VAR_0->components = (component_t*)(VAR_1->components_count > 0 ?
         FUNC_0(VAR_1->components_count, sizeof(component_t)) : ((void*)0));

   for (VAR_2 = 0; VAR_2 < VAR_1->components_count; ++VAR_2)
      FUNC_1(&VAR_0->components[VAR_2], &VAR_1->components[VAR_2]);

   VAR_0->components_count = VAR_1->components_count;
}
