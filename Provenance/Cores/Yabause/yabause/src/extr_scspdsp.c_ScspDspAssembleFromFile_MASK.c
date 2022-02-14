
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
typedef int line ;
typedef int FILE ;


 int FUNC_0 (char*) ;
 int FUNC_1 (int *) ;
 char* FUNC_2 (char*,int,int *) ;
 int * FUNC_3 (char*,char*) ;

void FUNC_4(char * VAR_0, u64* VAR_1)
{
   int VAR_2;
   char VAR_3[1024] = { 0 };

   FILE * VAR_4 = FUNC_3(VAR_0, "r");

   if (!VAR_4)
   {
      return;
   }

   for (VAR_2 = 0; VAR_2 < 128; VAR_2++)
   {
      char * VAR_5 = FUNC_2(VAR_3, sizeof(VAR_3), VAR_4);
      VAR_1[VAR_2] = FUNC_0(VAR_3);
   }
   FUNC_1(VAR_4);
}
