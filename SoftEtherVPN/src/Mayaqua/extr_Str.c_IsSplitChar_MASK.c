
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t UINT ;


 size_t FUNC_0 (char*) ;
 char FUNC_1 (char) ;
 char* VAR_0 ;

bool FUNC_2(char VAR_1, char *VAR_2)
{
 UINT VAR_3, VAR_4;
 char VAR_5 = FUNC_1(VAR_1);
 if (VAR_2 == ((void*)0))
 {
  VAR_2 = VAR_0;
 }

 VAR_4 = FUNC_0(VAR_2);

 for (VAR_3 = 0;VAR_3 < VAR_4;VAR_3++)
 {
  if (FUNC_1(VAR_2[VAR_3]) == VAR_5)
  {
   return 1;
  }
 }

 return 0;
}
