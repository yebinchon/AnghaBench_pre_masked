
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct string_list {int dummy; } ;


 int FUNC_0 (char const*,struct string_list*,struct string_list*,int,int,int,int) ;
 int FUNC_1 (struct string_list*) ;
 struct string_list* FUNC_2 (char const*,char*) ;

bool FUNC_3(struct string_list *VAR_0,
      const char *VAR_1,
      const char *VAR_2, bool VAR_3,
      bool VAR_4, bool VAR_5,
      bool VAR_6)
{
   struct string_list *VAR_7 = VAR_2 ? FUNC_2(VAR_2, "|") : ((void*)0);
   bool VAR_8 = FUNC_0(VAR_1, VAR_0, VAR_7,
         VAR_3, VAR_4, VAR_5, VAR_6) != -1;

   FUNC_1(VAR_7);

   return VAR_8;
}
