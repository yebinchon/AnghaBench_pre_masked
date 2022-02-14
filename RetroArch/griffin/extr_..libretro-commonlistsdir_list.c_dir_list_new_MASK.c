
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct string_list {int dummy; } ;


 int FUNC_0 (struct string_list*,char const*,char const*,int,int,int,int) ;
 int FUNC_1 (struct string_list*) ;
 struct string_list* FUNC_2 () ;

struct string_list *FUNC_3(const char *VAR_0,
      const char *VAR_1, bool VAR_2,
      bool VAR_3, bool VAR_4,
      bool VAR_5)
{
   struct string_list *VAR_6 = ((void*)0);

   if (!(VAR_6 = FUNC_2()))
      return ((void*)0);

   if (!FUNC_0(VAR_6, VAR_0, VAR_1, VAR_2,
            VAR_3, VAR_4, VAR_5))
   {
      FUNC_1(VAR_6);
      return ((void*)0);
   }

   return VAR_6;
}
