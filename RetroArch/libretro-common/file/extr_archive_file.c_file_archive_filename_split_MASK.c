
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






union string_list_elem_attr {scalar_t__ i; } ;
struct string_list {int dummy; } ;


 char* FUNC_0 (char const*) ;
 int FUNC_1 (struct string_list*,char const*,union string_list_elem_attr) ;
 int FUNC_2 (struct string_list*,char const*,unsigned int,union string_list_elem_attr) ;
 int FUNC_3 (struct string_list*) ;
 struct string_list* FUNC_4 () ;

__attribute__((used)) static struct string_list *FUNC_5(const char *VAR_0)
{
   union string_list_elem_attr VAR_1;
   struct string_list *VAR_2 = FUNC_4();
   const char *VAR_3 = FUNC_0(VAR_0);

   VAR_1.i = 0;

   if (VAR_3)
   {

      if (!FUNC_2(VAR_2, VAR_0, (unsigned)(VAR_3 - VAR_0), VAR_1))
         goto error;


      VAR_3++;

      if (*VAR_3)
      {
         if (!FUNC_1(VAR_2, VAR_3, VAR_1))
            goto error;
      }
   }
   else
      if (!FUNC_1(VAR_2, VAR_0, VAR_1))
         goto error;

   return VAR_2;

error:
   FUNC_3(VAR_2);
   return ((void*)0);
}
