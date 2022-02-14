
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct string_list {size_t size; TYPE_1__* elems; } ;
struct TYPE_2__ {char const* data; } ;


 int FUNC_0 (char*,char const*,size_t) ;
 size_t FUNC_1 (char*) ;

void FUNC_2(char *VAR_0, size_t VAR_1,
      const struct string_list *VAR_2, const char *VAR_3)
{
   size_t VAR_4, VAR_5 = FUNC_1(VAR_0);

   VAR_0 += VAR_5;
   VAR_1 -= VAR_5;

   for (VAR_4 = 0; VAR_4 < VAR_2->size; VAR_4++)
   {
      FUNC_0(VAR_0, VAR_2->elems[VAR_4].data, VAR_1);
      if ((VAR_4 + 1) < VAR_2->size)
         FUNC_0(VAR_0, VAR_3, VAR_1);
   }
}
