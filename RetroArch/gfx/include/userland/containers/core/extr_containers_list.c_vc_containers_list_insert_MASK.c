
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef size_t uint32_t ;
struct TYPE_4__ {int capacity; size_t entry_size; int size; void* entries; } ;
typedef TYPE_1__ VC_CONTAINERS_LIST_T ;


 int FUNC_0 (char*,void*,size_t) ;
 int FUNC_1 (char*,char*,size_t) ;
 void* FUNC_2 (void*,int) ;
 int FUNC_3 (TYPE_1__*,void*,size_t*) ;

bool FUNC_4(VC_CONTAINERS_LIST_T *VAR_0,
      void *VAR_1,
      bool VAR_2)
{
   uint32_t VAR_3;
   char *VAR_4;
   size_t VAR_5;
   bool VAR_6;

   if (!VAR_0 || !VAR_0->capacity) return 0;

   VAR_5 = VAR_0->entry_size;
   VAR_6 = FUNC_3(VAR_0, VAR_1, &VAR_3);
   VAR_4 = (char *)VAR_0->entries + VAR_5 * VAR_3;

   if (!VAR_6 || VAR_2)
   {

      if (VAR_0->size == VAR_0->capacity)
      {
         void *VAR_7 = FUNC_2(VAR_0->entries, (VAR_0->size + 1) * VAR_5);

         if (!VAR_7)
            return 0;
         VAR_0->entries = VAR_7;
         VAR_0->capacity++;
      }


      if (VAR_3 < VAR_0->size)
         FUNC_1(VAR_4 + VAR_5, VAR_4, (VAR_0->size - VAR_3) * VAR_5);

      VAR_0->size++;
   }


   FUNC_0(VAR_4, VAR_1, VAR_0->entry_size);

   return 1;
}
