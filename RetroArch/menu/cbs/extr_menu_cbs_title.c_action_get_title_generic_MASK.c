
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct string_list {scalar_t__ size; TYPE_1__* elems; } ;
typedef int elem0_path ;
struct TYPE_2__ {char const* data; } ;


 int VAR_0 ;
 char const* FUNC_0 (int ) ;
 char* FUNC_1 (char*) ;
 int FUNC_2 (char const*) ;
 int FUNC_3 (struct string_list*) ;
 struct string_list* FUNC_4 (char const*,char*) ;
 int FUNC_5 (char*,char*,size_t) ;
 int FUNC_6 (char*,char const*,size_t) ;

__attribute__((used)) static int FUNC_7(char *VAR_1, size_t VAR_2, const char *VAR_3,
      const char *VAR_4)
{
   struct string_list *VAR_5 = ((void*)0);

   if (!FUNC_2(VAR_3))
      VAR_5 = FUNC_4(VAR_3, "|");

   if (VAR_5)
   {
      char VAR_6[255];

      VAR_6[0] = '\0';

      if (VAR_5->size > 0)
         FUNC_6(VAR_6, VAR_5->elems[0].data, sizeof(VAR_6));
      FUNC_3(VAR_5);
      FUNC_6(VAR_1, VAR_4, VAR_2);

      if (!FUNC_2(VAR_6))
      {
         FUNC_5(VAR_1, "- ", VAR_2);
         FUNC_5(VAR_1, FUNC_1(VAR_6), VAR_2);
      }
   }
   else
      FUNC_6(VAR_1, FUNC_0(VAR_0), VAR_2);

   return 0;
}
