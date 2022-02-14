
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {unsigned int components_count; int * name; int * components; } ;
typedef TYPE_1__ element_t ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;

void FUNC_2(element_t *VAR_0)
{
   unsigned VAR_1;

   for (VAR_1 = 0; VAR_1 < VAR_0->components_count; ++VAR_1)
      FUNC_0(&VAR_0->components[VAR_1]);
   FUNC_1(VAR_0->components);

   FUNC_1(VAR_0->name);
}
