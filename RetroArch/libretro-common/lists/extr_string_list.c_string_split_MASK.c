
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






union string_list_elem_attr {scalar_t__ i; } ;
struct string_list {int dummy; } ;


 int FUNC_0 (char*) ;
 char* FUNC_1 (char const*) ;
 int FUNC_2 (struct string_list*,char const*,union string_list_elem_attr) ;
 int FUNC_3 (struct string_list*) ;
 struct string_list* FUNC_4 () ;
 char* FUNC_5 (char*,char const*,char**) ;

struct string_list *FUNC_6(const char *VAR_0, const char *VAR_1)
{
   char *VAR_2 = ((void*)0);
   char *VAR_3 = ((void*)0);
   const char *VAR_4 = ((void*)0);
   struct string_list *VAR_5 = FUNC_4();

   if (!VAR_5)
      goto error;

   VAR_3 = FUNC_1(VAR_0);
   if (!VAR_3)
      goto error;

   VAR_4 = FUNC_5(VAR_3, VAR_1, &VAR_2);
   while (VAR_4)
   {
      union string_list_elem_attr VAR_6;

      VAR_6.i = 0;

      if (!FUNC_2(VAR_5, VAR_4, VAR_6))
         goto error;

      VAR_4 = FUNC_5(((void*)0), VAR_1, &VAR_2);
   }

   FUNC_0(VAR_3);
   return VAR_5;

error:
   FUNC_3(VAR_5);
   FUNC_0(VAR_3);
   return ((void*)0);
}
