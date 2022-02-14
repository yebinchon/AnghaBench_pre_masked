
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int FILE ;


 int FUNC_0 (int,char*) ;
 int FUNC_1 (int *) ;
 int * FUNC_2 (char*,char*) ;
 int FUNC_3 (int *,char*,char*) ;

void FUNC_4(char * VAR_0)
{
   int VAR_1;
   FILE * VAR_2 = FUNC_2(VAR_0,"w");

   if (!VAR_2)
   {
      return;
   }

   for (VAR_1 = 0; VAR_1 < 128; VAR_1++)
   {
      char VAR_3[1024] = { 0 };
      FUNC_0(VAR_1, VAR_3);
      FUNC_3(VAR_2, "%s\n", VAR_3);
   }

   FUNC_1(VAR_2);
}
