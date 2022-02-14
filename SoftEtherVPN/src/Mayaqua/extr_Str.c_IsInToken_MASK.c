
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef size_t UINT ;
struct TYPE_3__ {size_t NumTokens; int * Token; } ;
typedef TYPE_1__ TOKEN_LIST ;


 scalar_t__ FUNC_0 (int ,char*) ;

bool FUNC_1(TOKEN_LIST *VAR_0, char *VAR_1)
{
 UINT VAR_2;

 if (VAR_0 == ((void*)0) || VAR_1 == ((void*)0))
 {
  return 0;
 }

 for (VAR_2 = 0;VAR_2 < VAR_0->NumTokens;VAR_2++)
 {
  if (FUNC_0(VAR_0->Token[VAR_2], VAR_1) == 0)
  {
   return 1;
  }
 }

 return 0;
}
