
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef enum BootDeviceIDs { ____Placeholder_BootDeviceIDs } BootDeviceIDs ;


 int FUNC_0 (int) ;
 int FUNC_1 (char*) ;
 int FUNC_2 () ;
 char* FUNC_3 (int) ;

bool FUNC_4(enum BootDeviceIDs VAR_0)
{
   int VAR_1 = - 1;
   int VAR_2 = 3;
   char *VAR_3 = FUNC_3(VAR_0);

   while(VAR_1 < 0 && VAR_2 > 0)
   {
      VAR_1 = FUNC_1(VAR_3);

      FUNC_2();
      FUNC_2();
      FUNC_2();
      FUNC_2();
      FUNC_2();
      FUNC_2();
      FUNC_2();
      FUNC_2();

      VAR_2--;
   };
   if (VAR_1 > 0) {
      FUNC_0(VAR_1);
   }

   return VAR_1 >= 0;
}
