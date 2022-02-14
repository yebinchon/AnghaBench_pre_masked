
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef size_t uint32_t ;
struct TYPE_4__ {size_t capacity; size_t entry_size; int comparator; scalar_t__ size; scalar_t__ entries; } ;
typedef TYPE_1__ VC_CONTAINERS_LIST_T ;
typedef int VC_CONTAINERS_LIST_COMPARATOR_T ;


 int FUNC_0 (TYPE_1__*) ;
 scalar_t__ FUNC_1 (size_t) ;

VC_CONTAINERS_LIST_T *FUNC_2(uint32_t VAR_0,
      size_t VAR_1,
      VC_CONTAINERS_LIST_COMPARATOR_T VAR_2)
{
   VC_CONTAINERS_LIST_T *VAR_3;

   VAR_3 = (VC_CONTAINERS_LIST_T *)FUNC_1(sizeof(VC_CONTAINERS_LIST_T));
   if (!VAR_3)
      return ((void*)0);


   if (!VAR_0) VAR_0 = 1;

   VAR_3->entries = FUNC_1(VAR_0 * VAR_1);
   if (!VAR_3->entries)
   {
      FUNC_0(VAR_3);
      return ((void*)0);
   }

   VAR_3->size = 0;
   VAR_3->capacity = VAR_0;
   VAR_3->entry_size = VAR_1;
   VAR_3->comparator = VAR_2;

   return VAR_3;
}
