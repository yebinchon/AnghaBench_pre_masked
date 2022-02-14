
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct string_list {size_t size; TYPE_1__* elems; } ;
typedef int prefixed ;
struct TYPE_2__ {int data; } ;


 scalar_t__ FUNC_0 (int ,char const*) ;
 int FUNC_1 (char*,char const*,int) ;
 int FUNC_2 (char*,char const*,int) ;

bool FUNC_3(const struct string_list *VAR_0,
      const char *VAR_1, const char *VAR_2)
{
   size_t VAR_3;
   char VAR_4[255];

   if (!VAR_0)
      return 0;

   VAR_4[0] = '\0';

   FUNC_2(VAR_4, VAR_1, sizeof(VAR_4));
   FUNC_1(VAR_4, VAR_2, sizeof(VAR_4));

   for (VAR_3 = 0; VAR_3 < VAR_0->size; VAR_3++)
   {
      if (FUNC_0(VAR_0->elems[VAR_3].data, VAR_2) ||
            FUNC_0(VAR_0->elems[VAR_3].data, VAR_4))
         return 1;
   }

   return 0;
}
