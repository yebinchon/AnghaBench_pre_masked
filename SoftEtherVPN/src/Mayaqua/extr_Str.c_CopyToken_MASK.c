
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef size_t UINT ;
struct TYPE_4__ {int NumTokens; int * Token; } ;
typedef TYPE_1__ TOKEN_LIST ;


 int FUNC_0 (int ) ;
 void* FUNC_1 (int) ;

TOKEN_LIST *FUNC_2(TOKEN_LIST *VAR_0)
{
 TOKEN_LIST *VAR_1;
 UINT VAR_2;

 if (VAR_0 == ((void*)0))
 {
  return ((void*)0);
 }

 VAR_1 = FUNC_1(sizeof(TOKEN_LIST));
 VAR_1->NumTokens = VAR_0->NumTokens;
 VAR_1->Token = FUNC_1(sizeof(char *) * VAR_1->NumTokens);
 for (VAR_2 = 0;VAR_2 < VAR_1->NumTokens;VAR_2++)
 {
  VAR_1->Token[VAR_2] = FUNC_0(VAR_0->Token[VAR_2]);
 }

 return VAR_1;
}
