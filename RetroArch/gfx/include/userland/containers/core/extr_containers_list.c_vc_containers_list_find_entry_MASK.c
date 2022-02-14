
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef size_t uint32_t ;
struct TYPE_4__ {size_t entry_size; scalar_t__ entries; } ;
typedef TYPE_1__ VC_CONTAINERS_LIST_T ;


 int FUNC_0 (void*,char const*,size_t) ;
 int FUNC_1 (TYPE_1__ const*,void*,size_t*) ;

bool FUNC_2(const VC_CONTAINERS_LIST_T *VAR_0,
      void *VAR_1)
{
   uint32_t VAR_2;
   size_t VAR_3;

   if (!FUNC_1(VAR_0, VAR_1, &VAR_2))
      return 0;

   VAR_3 = VAR_0->entry_size;
   FUNC_0(VAR_1, (const char *)VAR_0->entries + VAR_3 * VAR_2, VAR_3);

   return 1;
}
