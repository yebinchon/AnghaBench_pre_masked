
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {unsigned int capacity; int size; TYPE_1__* list; } ;
typedef TYPE_2__ file_list_t ;
struct TYPE_5__ {unsigned int type; size_t directory_ptr; size_t entry_idx; int * path; int * label; int * actiondata; int * userdata; int * alt; } ;


 int FUNC_0 (TYPE_2__*,int) ;
 void* FUNC_1 (char const*) ;

bool FUNC_2(file_list_t *VAR_0,
      const char *VAR_1, const char *VAR_2,
      unsigned VAR_3, size_t VAR_4,
      size_t VAR_5)
{
   unsigned VAR_6 = (unsigned)VAR_0->size;

   if (VAR_6 >= VAR_0->capacity)
      if (!FUNC_0(VAR_0, VAR_0->capacity * 2 + 1))
         return 0;

   VAR_0->list[VAR_6].path = ((void*)0);
   VAR_0->list[VAR_6].label = ((void*)0);
   VAR_0->list[VAR_6].alt = ((void*)0);
   VAR_0->list[VAR_6].type = VAR_3;
   VAR_0->list[VAR_6].directory_ptr = VAR_4;
   VAR_0->list[VAR_6].entry_idx = VAR_5;
   VAR_0->list[VAR_6].userdata = ((void*)0);
   VAR_0->list[VAR_6].actiondata = ((void*)0);

   if (VAR_2)
      VAR_0->list[VAR_6].label = FUNC_1(VAR_2);
   if (VAR_1)
      VAR_0->list[VAR_6].path = FUNC_1(VAR_1);

   VAR_0->size++;

   return 1;
}
