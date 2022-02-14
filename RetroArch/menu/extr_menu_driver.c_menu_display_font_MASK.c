
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int fontpath ;
typedef int font_data_t ;
typedef enum application_special_type { ____Placeholder_application_special_type } application_special_type ;


 int VAR_0 ;
 int FUNC_0 (char*,int,int) ;
 int VAR_1 ;
 int * FUNC_1 (char*,float,int) ;

font_data_t *FUNC_2(
      enum application_special_type VAR_2,
      float VAR_3,
      bool VAR_4)
{
   char VAR_5[VAR_0];

   if (!VAR_1)
      return ((void*)0);

   VAR_5[0] = '\0';

   FUNC_0(
         VAR_5, sizeof(VAR_5), VAR_2);

   return FUNC_1(VAR_5, VAR_3, VAR_4);
}
