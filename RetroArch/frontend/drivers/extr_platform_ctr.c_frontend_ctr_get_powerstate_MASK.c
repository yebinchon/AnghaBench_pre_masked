
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef enum frontend_powerstate { ____Placeholder_frontend_powerstate } frontend_powerstate ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int*) ;
 int FUNC_1 (int*) ;

__attribute__((used)) static enum frontend_powerstate FUNC_2(
      int* VAR_3, int* VAR_4)
{
   u8 VAR_5 = 0;
   u8 VAR_6 = 0;

   FUNC_1(&VAR_5);

   *VAR_4 = VAR_5;

   *VAR_3 = -1;

   FUNC_0(&VAR_6);

   if (VAR_6)
   {
      if (VAR_5 == 100)
         return VAR_0;
      return VAR_1;
   }

   return VAR_2;
}
