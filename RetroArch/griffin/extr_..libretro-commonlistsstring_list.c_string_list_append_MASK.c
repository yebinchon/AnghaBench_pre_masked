
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef union string_list_elem_attr {int dummy; } string_list_elem_attr ;
struct string_list {int size; int cap; TYPE_1__* elems; } ;
struct TYPE_2__ {char* data; union string_list_elem_attr attr; } ;


 char* FUNC_0 (char const*) ;
 int FUNC_1 (struct string_list*,int) ;

bool FUNC_2(struct string_list *VAR_0, const char *VAR_1,
      union string_list_elem_attr VAR_2)
{
   char *VAR_3 = ((void*)0);

   if (VAR_0->size >= VAR_0->cap &&
         !FUNC_1(VAR_0, VAR_0->cap * 2))
      return 0;

   VAR_3 = FUNC_0(VAR_1);
   if (!VAR_3)
      return 0;

   VAR_0->elems[VAR_0->size].data = VAR_3;
   VAR_0->elems[VAR_0->size].attr = VAR_2;

   VAR_0->size++;
   return 1;
}
