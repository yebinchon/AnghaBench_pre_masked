
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct item_file {unsigned int type; size_t directory_ptr; size_t entry_idx; int * path; int * label; int * actiondata; int * userdata; int * alt; } ;
struct TYPE_4__ {int size; int capacity; struct item_file* list; } ;
typedef TYPE_1__ file_list_t ;


 scalar_t__ FUNC_0 (int,int) ;
 int FUNC_1 (TYPE_1__*,int) ;
 int FUNC_2 (struct item_file*) ;
 int FUNC_3 (struct item_file*,struct item_file*,int) ;
 void* FUNC_4 (char const*) ;

bool FUNC_5(file_list_t *VAR_0,
      const char *VAR_1, const char *VAR_2,
      unsigned VAR_3, size_t VAR_4,
      size_t VAR_5,
      size_t VAR_6)
{
   int VAR_7;


   if (VAR_0->size >= VAR_0->capacity)
      if (!FUNC_1(VAR_0, VAR_0->capacity * 2 + 1))
         return 0;

   for (VAR_7 = (unsigned)VAR_0->size; VAR_7 > (int)VAR_6; VAR_7--)
   {
      struct item_file *VAR_8 = (struct item_file*)
         FUNC_0(1, sizeof(struct item_file));

      FUNC_3(VAR_8, &VAR_0->list[VAR_7-1], sizeof(struct item_file));

      FUNC_3(&VAR_0->list[VAR_7-1], &VAR_0->list[VAR_7], sizeof(struct item_file));
      FUNC_3(&VAR_0->list[VAR_7], VAR_8, sizeof(struct item_file));

      FUNC_2(VAR_8);
   }

   VAR_0->list[VAR_6].path = ((void*)0);
   VAR_0->list[VAR_6].label = ((void*)0);
   VAR_0->list[VAR_6].alt = ((void*)0);
   VAR_0->list[VAR_6].type = VAR_3;
   VAR_0->list[VAR_6].directory_ptr = VAR_4;
   VAR_0->list[VAR_6].entry_idx = VAR_5;
   VAR_0->list[VAR_6].userdata = ((void*)0);
   VAR_0->list[VAR_6].actiondata = ((void*)0);

   if (VAR_2)
      VAR_0->list[VAR_6].label = FUNC_4(VAR_2);
   if (VAR_1)
      VAR_0->list[VAR_6].path = FUNC_4(VAR_1);

   VAR_0->size++;

   return 1;
}
