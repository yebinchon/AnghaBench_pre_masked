
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 char* FUNC_0 (char*) ;
 int FUNC_1 () ;
 int FUNC_2 (char*,int ,size_t) ;
 size_t FUNC_3 (char*) ;

void FUNC_4(char *VAR_0, size_t VAR_1)
{
   size_t VAR_2;
   const char *VAR_3 = FUNC_0(VAR_0);

   if (!VAR_3)
   {
      FUNC_2(VAR_0, FUNC_1(), VAR_1);
      return;
   }

   VAR_2 = FUNC_3(VAR_0);

   if (VAR_3 != (VAR_0 + VAR_2 - 1))
   {
      VAR_0[VAR_2] = VAR_3[0];
      VAR_0[VAR_2+1] = '\0';
   }
}
