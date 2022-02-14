
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_3__ {size_t entry_size; int (* comparator ) (void const*,char const*) ;int size; scalar_t__ entries; } ;
typedef TYPE_1__ VC_CONTAINERS_LIST_T ;
typedef int (* VC_CONTAINERS_LIST_COMPARATOR_T ) (void const*,char const*) ;



__attribute__((used)) static bool FUNC_0(const VC_CONTAINERS_LIST_T *VAR_0,
      const void *VAR_1,
      uint32_t *VAR_2)
{
   const char *VAR_3 = (const char *)VAR_0->entries;
   size_t VAR_4 = VAR_0->entry_size;
   VC_CONTAINERS_LIST_COMPARATOR_T VAR_5 = VAR_0->comparator;
   uint32_t VAR_6 = 0, VAR_7 = VAR_0->size;
   uint32_t VAR_8 = VAR_7 >> 1;
   bool VAR_9 = 0;

   while (VAR_8 < VAR_7)
   {
      int VAR_10 = VAR_5(VAR_1, VAR_3 + VAR_8 * VAR_4);

      if (VAR_10 < 0)
         VAR_7 = VAR_8;
      else if (VAR_10 > 0)
         VAR_6 = VAR_8 + 1;
      else {
         VAR_9 = 1;
         break;
      }

      VAR_8 = (VAR_6 + VAR_7) >> 1;
   }

   if (VAR_2) *VAR_2 = VAR_8;
   return VAR_9;
}
