
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef size_t UINT ;
struct TYPE_4__ {size_t NumTokens; int * Token; } ;
typedef TYPE_1__ TOKEN_LIST ;


 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ,int ) ;
 void* FUNC_2 (int) ;

TOKEN_LIST *FUNC_3(TOKEN_LIST *VAR_0)
{
 UINT VAR_1, VAR_2, VAR_3, VAR_4;
 TOKEN_LIST *VAR_5;

 if (VAR_0 == ((void*)0))
 {
  return ((void*)0);
 }

 VAR_2 = 0;
 for (VAR_1 = 0;VAR_1 < VAR_0->NumTokens;VAR_1++)
 {
  bool VAR_6 = 0;

  for (VAR_3 = 0;VAR_3 < VAR_1;VAR_3++)
  {
   if (FUNC_1(VAR_0->Token[VAR_3], VAR_0->Token[VAR_1]) == 0)
   {
    VAR_6 = 1;
    break;
   }
  }

  if (VAR_6 == 0)
  {
   VAR_2++;
  }
 }

 VAR_5 = FUNC_2(sizeof(TOKEN_LIST));
 VAR_5->Token = FUNC_2(sizeof(char *) * VAR_2);
 VAR_5->NumTokens = VAR_2;

 VAR_4 = 0;

 for (VAR_1 = 0;VAR_1 < VAR_0->NumTokens;VAR_1++)
 {
  bool VAR_7 = 0;

  for (VAR_3 = 0;VAR_3 < VAR_1;VAR_3++)
  {
   if (FUNC_1(VAR_0->Token[VAR_3], VAR_0->Token[VAR_1]) == 0)
   {
    VAR_7 = 1;
    break;
   }
  }

  if (VAR_7 == 0)
  {
   VAR_5->Token[VAR_4++] = FUNC_0(VAR_0->Token[VAR_1]);
  }
 }

 return VAR_5;
}
