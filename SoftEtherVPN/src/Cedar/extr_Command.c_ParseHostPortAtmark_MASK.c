
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ UINT ;
struct TYPE_4__ {int NumTokens; int * Token; } ;
typedef TYPE_1__ TOKEN_LIST ;


 char* FUNC_0 (int ) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (int ) ;
 TYPE_1__* FUNC_3 (char*,char*) ;
 scalar_t__ FUNC_4 (int ) ;
 int FUNC_5 (char*) ;

bool FUNC_6(char *VAR_0, char **VAR_1, UINT *VAR_2, UINT VAR_3)
{
 TOKEN_LIST *VAR_4;
 bool VAR_5 = 0;

 if (VAR_0 == ((void*)0))
 {
  return 0;
 }

 VAR_4 = FUNC_3(VAR_0, "@");
 if (VAR_4 == ((void*)0))
 {
  return 0;
 }

 if (VAR_2 != ((void*)0))
 {
  *VAR_2 = 0;
 }

 if (VAR_3 == 0)
 {
  if (VAR_4->NumTokens < 2)
  {
   FUNC_1(VAR_4);
   return 0;
  }

  if (FUNC_4(VAR_4->Token[1]) == 0)
  {
   FUNC_1(VAR_4);
   return 0;
  }
 }

 if (VAR_4->NumTokens >= 2 && FUNC_4(VAR_4->Token[1]) == 0)
 {
  FUNC_1(VAR_4);
  return 0;
 }

 if (VAR_4->NumTokens >= 1 && FUNC_2(VAR_4->Token[0]) == 0)
 {
  VAR_5 = 1;

  if (VAR_1 != ((void*)0))
  {
   *VAR_1 = FUNC_0(VAR_4->Token[0]);
   FUNC_5(*VAR_1);
  }

  if (VAR_4->NumTokens >= 2)
  {
   if (VAR_2 != ((void*)0))
   {
    *VAR_2 = FUNC_4(VAR_4->Token[1]);
   }
  }
 }

 if (VAR_2 != ((void*)0))
 {
  if (*VAR_2 == 0)
  {
   *VAR_2 = VAR_3;
  }
 }

 FUNC_1(VAR_4);

 return VAR_5;
}
