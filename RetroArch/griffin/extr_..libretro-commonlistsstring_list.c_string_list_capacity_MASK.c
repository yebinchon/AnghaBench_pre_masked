
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct string_list_elem {int dummy; } ;
struct string_list {size_t cap; struct string_list_elem* elems; } ;


 int FUNC_0 (struct string_list_elem*,int ,int) ;
 scalar_t__ FUNC_1 (struct string_list_elem*,size_t) ;

__attribute__((used)) static bool FUNC_2(struct string_list *VAR_0, size_t VAR_1)
{
   struct string_list_elem *VAR_2 = (struct string_list_elem*)
      FUNC_1(VAR_0->elems, VAR_1 * sizeof(*VAR_2));

   if (!VAR_2)
      return 0;

   if (VAR_1 > VAR_0->cap)
      FUNC_0(&VAR_2[VAR_0->cap], 0, sizeof(*VAR_2) * (VAR_1 - VAR_0->cap));

   VAR_0->elems = VAR_2;
   VAR_0->cap = VAR_1;
   return 1;
}
