
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int UINT ;
struct TYPE_4__ {int NumTokens; int * Token; } ;
typedef TYPE_1__ TOKEN_LIST ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (char*) ;
 TYPE_1__* FUNC_2 (char*,char*) ;
 int FUNC_3 (int ) ;

bool FUNC_4(char *VAR_0, UINT *VAR_1, UINT *VAR_2)
{
 UINT VAR_3 = 0, VAR_4 = 0;
 TOKEN_LIST *VAR_5;

 if (VAR_0 == ((void*)0))
 {
  return 0;
 }

 if (FUNC_1(VAR_0) == 0)
 {

  VAR_5 = FUNC_2(VAR_0, "\t -");

  if (VAR_5->NumTokens == 1)
  {
   VAR_3 = VAR_4 = FUNC_3(VAR_5->Token[0]);
  }
  else if (VAR_5->NumTokens == 2)
  {
   VAR_3 = FUNC_3(VAR_5->Token[0]);
   VAR_4 = FUNC_3(VAR_5->Token[1]);
  }

  FUNC_0(VAR_5);

  if (VAR_3 > VAR_4)
  {
   return 0;
  }

  if (VAR_3 >= 65536 || VAR_4 >= 65536)
  {
   return 0;
  }

  if (VAR_3 == 0 && VAR_4 != 0)
  {
   return 0;
  }
 }

 if (VAR_1 != ((void*)0))
 {
  *VAR_1 = VAR_3;
 }
 if (VAR_2 != ((void*)0))
 {
  *VAR_2 = VAR_4;
 }

 return 1;
}
