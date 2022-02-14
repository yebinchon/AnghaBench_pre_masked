
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct string_list {int dummy; } ;


 scalar_t__ FUNC_0 (int,int) ;
 int FUNC_1 (struct string_list*,int) ;
 int FUNC_2 (struct string_list*) ;

struct string_list *FUNC_3(void)
{
   struct string_list *VAR_0 = (struct string_list*)
      FUNC_0(1, sizeof(*VAR_0));

   if (!VAR_0)
      return ((void*)0);

   if (!FUNC_1(VAR_0, 32))
   {
      FUNC_2(VAR_0);
      return ((void*)0);
   }

   return VAR_0;
}
