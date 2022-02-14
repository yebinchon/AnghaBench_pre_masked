
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int buf ;
typedef int FILE ;


 int FUNC_0 (char*,int) ;
 int FUNC_1 (int *) ;
 int * FUNC_2 (char*,char*) ;
 int FUNC_3 (int *,char*,int) ;
 int FUNC_4 (char*,int,char*,int) ;

__attribute__((used)) static int FUNC_5(int VAR_0, int VAR_1)
{
   FILE *VAR_2;
   char VAR_3[256];
   FUNC_4(VAR_3, sizeof(VAR_3), "/sys/class/gpio/gpio%d/value", VAR_0);
   VAR_2 = FUNC_2(VAR_3, "w");

   if(!VAR_2)
   {
      FUNC_0("[LED]: failed to set GPIO %d\n", VAR_0);
      return -1;
   }

   FUNC_3(VAR_2, "%d\n", VAR_1 ? 1 : 0);
   FUNC_1(VAR_2);
   return 1;
}
