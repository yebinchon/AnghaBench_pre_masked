
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 char* FUNC_0 () ;
 int FUNC_1 (char*,char const*,size_t) ;
 int FUNC_2 (int) ;

int FUNC_3(int *VAR_0, char *VAR_1, size_t VAR_2)
{

   const char *VAR_3 = FUNC_0();

   FUNC_2(VAR_2 > 0);

   if (VAR_3)
   {
      *VAR_0 = -1;
      FUNC_1(VAR_1, VAR_3, VAR_2);
      VAR_1[VAR_2-1] = '\0';
   }
   else
   {
      *VAR_0 = 0;
      VAR_1[0] = '\0';
   }
   return 0;
}
