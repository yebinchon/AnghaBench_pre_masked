
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct string_list {int dummy; } ;
typedef enum string_list_type { ____Placeholder_string_list_type } string_list_type ;


 scalar_t__ FUNC_0 (unsigned int,int) ;
 int FUNC_1 (struct string_list*) ;
 int FUNC_2 (char*,unsigned int,struct string_list*,char*) ;
 struct string_list* FUNC_3 (int,void*,unsigned int*,size_t*) ;

const char *FUNC_4(enum string_list_type VAR_0, void *VAR_1)
{
   unsigned VAR_2 = 0;
   size_t VAR_3;
   struct string_list *VAR_4 = FUNC_3(VAR_0, VAR_1, &VAR_2, &VAR_3);
   char *VAR_5 = (VAR_2 > 0) ? (char*)FUNC_0(VAR_2, sizeof(char)): ((void*)0);

   if (VAR_5 && VAR_4)
      FUNC_2(VAR_5, VAR_2, VAR_4, "|");

   FUNC_1(VAR_4);
   VAR_4 = ((void*)0);

   return VAR_5;
}
