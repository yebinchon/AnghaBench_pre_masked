
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {struct TYPE_5__* value; struct TYPE_5__* key; struct TYPE_5__* next; } ;
typedef TYPE_1__ bsp_epair_t ;
struct TYPE_6__ {TYPE_1__* epairs; } ;
typedef TYPE_2__ bsp_entity_t ;
struct TYPE_7__ {int numentities; TYPE_2__* entities; } ;


 int FUNC_0 (TYPE_1__*) ;
 TYPE_3__ VAR_0 ;

void FUNC_1(void)
{
 int VAR_1;
 bsp_entity_t *VAR_2;
 bsp_epair_t *VAR_3, *VAR_4;

 for (VAR_1 = 1; VAR_1 < VAR_0.numentities; VAR_1++)
 {
  VAR_2 = &VAR_0.entities[VAR_1];
  for (VAR_3 = VAR_2->epairs; VAR_3; VAR_3 = VAR_4)
  {
   VAR_4 = VAR_3->next;

   if (VAR_3->key) FUNC_0(VAR_3->key);
   if (VAR_3->value) FUNC_0(VAR_3->value);
   FUNC_0(VAR_3);
  }
 }
 VAR_0.numentities = 0;
}
