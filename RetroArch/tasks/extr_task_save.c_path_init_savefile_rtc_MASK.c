
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






union string_list_elem_attr {int i; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*,char const*,char*,int) ;
 int FUNC_1 (char*) ;
 scalar_t__ FUNC_2 (int) ;
 int FUNC_3 (int ,char const*,union string_list_elem_attr) ;
 int VAR_3 ;

void FUNC_4(const char *VAR_4)
{
   union string_list_elem_attr VAR_5;
   char *VAR_6 = (char*)
      FUNC_2(VAR_0 * sizeof(char));

   VAR_6[0] = '\0';

   VAR_5.i = VAR_2;
   FUNC_3(VAR_3, VAR_4, VAR_5);


   VAR_5.i = VAR_1;
   FUNC_0(VAR_6,
         VAR_4, ".rtc",
         VAR_0 * sizeof(char));
   FUNC_3(VAR_3, VAR_6, VAR_5);
   FUNC_1(VAR_6);
}
