
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef union string_list_elem_attr {int dummy; } string_list_elem_attr ;
struct string_list {int size; int cap; TYPE_1__* elems; } ;
struct TYPE_2__ {char* data; union string_list_elem_attr attr; } ;


 scalar_t__ FUNC_0 (unsigned int) ;
 int FUNC_1 (struct string_list*,int) ;
 int FUNC_2 (char*,char const*,unsigned int) ;

bool FUNC_3(struct string_list *VAR_0, const char *VAR_1,
      unsigned VAR_2, union string_list_elem_attr VAR_3)
{
   char *VAR_4 = ((void*)0);

   if (VAR_0->size >= VAR_0->cap &&
         !FUNC_1(VAR_0, VAR_0->cap * 2))
      return 0;

   VAR_4 = (char*)FUNC_0(VAR_2 + 1);

   if (!VAR_4)
      return 0;

   FUNC_2(VAR_4, VAR_1, VAR_2 + 1);

   VAR_0->elems[VAR_0->size].data = VAR_4;
   VAR_0->elems[VAR_0->size].attr = VAR_3;

   VAR_0->size++;
   return 1;
}
