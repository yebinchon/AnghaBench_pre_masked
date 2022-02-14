
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef size_t UINT ;
struct TYPE_4__ {size_t NumTokens; int * Token; } ;
typedef TYPE_1__ TOKEN_LIST ;


 int FUNC_0 (TYPE_1__*) ;
 scalar_t__ FUNC_1 (char*,int ,int) ;
 TYPE_1__* FUNC_2 (char*,char*) ;

bool FUNC_3(char *VAR_0, char *VAR_1, char *VAR_2, bool VAR_3)
{
 TOKEN_LIST *VAR_4;
 bool VAR_5 = 0;
 UINT VAR_6;

 if (VAR_0 == ((void*)0) || VAR_1 == ((void*)0) || VAR_2 == ((void*)0))
 {
  return 0;
 }

 VAR_4 = FUNC_2(VAR_1, VAR_2);

 if (VAR_4 != ((void*)0))
 {
  for (VAR_6 = 0;VAR_6 < VAR_4->NumTokens;VAR_6++)
  {
   if (FUNC_1(VAR_0, VAR_4->Token[VAR_6], VAR_3))
   {
    VAR_5 = 1;

   }

   if (VAR_5)
   {
    break;
   }
  }

  FUNC_0(VAR_4);
 }

 return VAR_5;
}
