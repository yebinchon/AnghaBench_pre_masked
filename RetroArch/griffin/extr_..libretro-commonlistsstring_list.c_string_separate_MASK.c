
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






union string_list_elem_attr {scalar_t__ i; } ;
struct string_list {int dummy; } ;


 int FUNC_0 (char*) ;
 scalar_t__ FUNC_1 (char const*) ;
 int FUNC_2 (struct string_list*,char*,union string_list_elem_attr) ;
 int FUNC_3 (struct string_list*) ;
 struct string_list* FUNC_4 () ;
 char* FUNC_5 (char**,char const*) ;

struct string_list *FUNC_6(char *VAR_0, const char *VAR_1)
{
   char *VAR_2 = ((void*)0);
   char **VAR_3 = ((void*)0);
   struct string_list *VAR_4 = ((void*)0);


   if (!VAR_0 || FUNC_1(VAR_1))
      goto error;

   VAR_3 = &VAR_0;
   VAR_4 = FUNC_4();

   if (!VAR_4)
      goto error;

   VAR_2 = FUNC_5(VAR_3, VAR_1);
   while (VAR_2)
   {
      union string_list_elem_attr VAR_5;

      VAR_5.i = 0;

      if (!FUNC_2(VAR_4, VAR_2, VAR_5))
         goto error;

      FUNC_0(VAR_2);
      VAR_2 = ((void*)0);

      VAR_2 = FUNC_5(VAR_3, VAR_1);
   }

   return VAR_4;

error:
   if (VAR_2)
      FUNC_0(VAR_2);
   if (VAR_4)
      FUNC_3(VAR_4);
   return ((void*)0);
}
