
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct string_list_elem {char* data; int attr; } ;
struct string_list {int size; int cap; struct string_list_elem* elems; } ;


 scalar_t__ FUNC_0 (int,int) ;
 int FUNC_1 (struct string_list*) ;
 scalar_t__ FUNC_2 (size_t) ;
 int FUNC_3 (char*,char const*) ;
 size_t FUNC_4 (char const*) ;

struct string_list *FUNC_5(
      const struct string_list *VAR_0)
{
   unsigned VAR_1;
   struct string_list_elem *VAR_2 = ((void*)0);
   struct string_list *VAR_3 = (struct string_list*)
      FUNC_0(1, sizeof(struct string_list));

   if (!VAR_3)
      return ((void*)0);

   VAR_3->size = VAR_0->size;
   VAR_3->cap = VAR_0->cap;
   if (VAR_3->cap < VAR_3->size)
      VAR_3->cap = VAR_3->size;

   VAR_2 = (struct string_list_elem*)
      FUNC_0(VAR_3->cap, sizeof(struct string_list_elem));

   if (!VAR_2)
   {
      FUNC_1(VAR_3);
      return ((void*)0);
   }

   VAR_3->elems = VAR_2;

   for (VAR_1 = 0; VAR_1 < VAR_0->size; VAR_1++)
   {
      const char *VAR_4 = VAR_0->elems[VAR_1].data;
      size_t VAR_5 = VAR_4 ? FUNC_4(VAR_4) : 0;

      VAR_3->elems[VAR_1].data = ((void*)0);
      VAR_3->elems[VAR_1].attr = VAR_0->elems[VAR_1].attr;

      if (VAR_5 != 0)
      {
         char *VAR_6 = (char*)FUNC_2(VAR_5 + 1);
         FUNC_3(VAR_6, VAR_4);
         VAR_3->elems[VAR_1].data = VAR_6;
      }
   }

   return VAR_3;
}
