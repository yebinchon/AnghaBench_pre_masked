
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int png_structp ;
typedef int FILE ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int * FUNC_3 (char*,char*) ;
 int FUNC_4 (char*,int ,int) ;
 int FUNC_5 (int ,char*) ;
 int FUNC_6 (char*,char*) ;

__attribute__((used)) static int
FUNC_7(png_structp VAR_0)
{
   FILE *VAR_1 = FUNC_3("/proc/cpuinfo", "rb");

   char *VAR_2 = "msa";
   char VAR_3[10];

   if (VAR_1 != ((void*)0))
   {
      while(!FUNC_1(VAR_1))
      {
         int VAR_4 = FUNC_2(VAR_1);
         static int VAR_5 = 0;

         while(!(VAR_4 <= 32))
         {
            VAR_3[VAR_5++] = VAR_4;
            VAR_4 = FUNC_2(VAR_1);
         }

         int VAR_6 = FUNC_6(VAR_2, VAR_3);

         if (VAR_6 == 0)
            return 1;

         VAR_5 = 0;
         FUNC_4(VAR_3, 0, 10);
      }

      FUNC_0(VAR_1);
   }




   return 0;
}
