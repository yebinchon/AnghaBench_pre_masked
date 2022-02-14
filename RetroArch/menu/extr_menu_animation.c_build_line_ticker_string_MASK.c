
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct string_list {int size; TYPE_1__* elems; } ;
struct TYPE_2__ {char* data; } ;


 int FUNC_0 (char*,char*,size_t) ;

__attribute__((used)) static void FUNC_1(
      size_t VAR_0, size_t VAR_1, struct string_list *VAR_2,
      char *VAR_3, size_t VAR_4)
{
   size_t VAR_5;

   for (VAR_5 = 0; VAR_5 < VAR_0; VAR_5++)
   {
      size_t VAR_6 = VAR_5 + VAR_1;
      size_t VAR_7 = VAR_6 % (VAR_2->size + 1);
      bool VAR_8 = 1;

      if (VAR_7 >= VAR_2->size)
         VAR_8 = 0;

      if (VAR_8)
         FUNC_0(VAR_3, VAR_2->elems[VAR_7].data, VAR_4);

      if (VAR_5 < VAR_0 - 1)
         FUNC_0(VAR_3, "\n", VAR_4);
   }
}
