
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct string_list {size_t size; TYPE_1__* elems; } ;
struct TYPE_2__ {int data; } ;


 scalar_t__ FUNC_0 (int ,char const*) ;

int FUNC_1(const struct string_list *VAR_0, const char *VAR_1)
{
   size_t VAR_2;

   if (!VAR_0)
      return 0;

   for (VAR_2 = 0; VAR_2 < VAR_0->size; VAR_2++)
   {
      if (FUNC_0(VAR_0->elems[VAR_2].data, VAR_1))
         return (int)(VAR_2 + 1);
   }

   return 0;
}
