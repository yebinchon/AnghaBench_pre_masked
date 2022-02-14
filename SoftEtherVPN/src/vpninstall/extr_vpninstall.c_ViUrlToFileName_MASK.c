
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t UINT ;


 int FUNC_0 (char*) ;

char *FUNC_1(char *VAR_0)
{
 UINT VAR_1, VAR_2;
 char *VAR_3 = VAR_0;
 bool VAR_4 = 1;
 VAR_2 = FUNC_0(VAR_0);

 for (VAR_1 = 0;VAR_1 < VAR_2;VAR_1++)
 {
  char VAR_5 = VAR_0[VAR_1];

  if (VAR_5 == '?' || VAR_5 == '#')
  {
   VAR_4 = 0;
  }

  if (VAR_4)
  {
   if (VAR_5 == '/' || VAR_5 == '\\')
   {
    if (FUNC_0(VAR_0 + VAR_1 + 1) > 1)
    {
     VAR_3 = VAR_0 + VAR_1 + 1;
    }
   }
  }
 }

 return VAR_3;
}
