
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef enum frontend_powerstate { ____Placeholder_frontend_powerstate } frontend_powerstate ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 () ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 int FUNC_3 () ;
 int FUNC_4 () ;

__attribute__((used)) static enum frontend_powerstate FUNC_5(int *VAR_5, int *VAR_6)
{
   enum frontend_powerstate VAR_7 = VAR_2;

   int VAR_8 = FUNC_3();

   int VAR_9 = FUNC_4();
   int VAR_10 = FUNC_2();

   *VAR_6 = FUNC_0();
   *VAR_5 = FUNC_1() * 60;


   if (!VAR_8)
   {
      VAR_7 = VAR_3;
      *VAR_5 = -1;
      *VAR_6 = -1;
   }
   else

   if (VAR_10)
      VAR_7 = VAR_1;
   else if (VAR_9)
      VAR_7 = VAR_0;
   else
      VAR_7 = VAR_4;

   return VAR_7;
}
