
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {struct TYPE_4__* entries; scalar_t__ capacity; } ;
typedef TYPE_1__ VC_CONTAINERS_LIST_T ;


 int FUNC_0 (TYPE_1__*) ;

void FUNC_1(VC_CONTAINERS_LIST_T *VAR_0)
{

   if (VAR_0 && VAR_0->capacity)
   {
      if (VAR_0->entries)
         FUNC_0(VAR_0->entries);
      FUNC_0(VAR_0);
   }
}
