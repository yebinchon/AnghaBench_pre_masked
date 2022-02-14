
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct string_list {size_t size; struct string_list* elems; struct string_list* userdata; struct string_list* data; } ;


 int FUNC_0 (struct string_list*) ;

void FUNC_1(struct string_list *VAR_0)
{
   size_t VAR_1;
   if (!VAR_0)
      return;

   if (VAR_0->elems)
   {
      for (VAR_1 = 0; VAR_1 < VAR_0->size; VAR_1++)
      {
         if (VAR_0->elems[VAR_1].data)
            FUNC_0(VAR_0->elems[VAR_1].data);
         if (VAR_0->elems[VAR_1].userdata)
            FUNC_0(VAR_0->elems[VAR_1].userdata);
         VAR_0->elems[VAR_1].data = ((void*)0);
         VAR_0->elems[VAR_1].userdata = ((void*)0);
      }

      FUNC_0(VAR_0->elems);
   }

   VAR_0->elems = ((void*)0);
   FUNC_0(VAR_0);
}
