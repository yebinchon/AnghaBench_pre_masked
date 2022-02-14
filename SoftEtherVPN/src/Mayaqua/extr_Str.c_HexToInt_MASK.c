
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t UINT ;


 scalar_t__ FUNC_0 (char) ;
 size_t FUNC_1 (char*) ;

UINT FUNC_2(char *VAR_0)
{
 UINT VAR_1, VAR_2;
 UINT VAR_3 = 0;

 if (VAR_0 == ((void*)0))
 {
  return 0;
 }

 if (VAR_0[0] == '0' && (VAR_0[1] == 'x' || VAR_0[1] == 'X'))
 {
  VAR_0 += 2;
 }

 VAR_1 = FUNC_1(VAR_0);
 for (VAR_2 = 0;VAR_2 < VAR_1;VAR_2++)
 {
  char VAR_4 = VAR_0[VAR_2];

  if ((VAR_4 >= '0' && VAR_4 <= '9') || (VAR_4 >= 'a' && VAR_4 <= 'f') || (VAR_4 >= 'A' && VAR_4 <= 'F'))
  {
   VAR_3 = VAR_3 * 16 + (UINT)FUNC_0(VAR_4);
  }
  else
  {
   break;
  }
 }

 return VAR_3;
}
