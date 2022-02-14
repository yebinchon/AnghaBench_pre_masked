
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {struct TYPE_5__* next; struct TYPE_5__* component_list; int component_lock; } ;
typedef TYPE_1__ VC_PRIVATE_COMPONENT_T ;
typedef TYPE_1__ ILCS_COMMON_T ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static void FUNC_2(ILCS_COMMON_T *VAR_0)
{
   FUNC_1(&VAR_0->component_lock);

   while(VAR_0->component_list)
   {
      VC_PRIVATE_COMPONENT_T *VAR_1 = VAR_0->component_list;
      VAR_0->component_list = VAR_1->next;
      FUNC_0(VAR_1);
   }

   FUNC_0(VAR_0);
}
