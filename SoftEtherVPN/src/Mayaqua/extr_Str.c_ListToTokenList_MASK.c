
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef size_t UINT ;
struct TYPE_3__ {size_t NumTokens; int * Token; } ;
typedef TYPE_1__ TOKEN_LIST ;
typedef int LIST ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int *,size_t) ;
 size_t FUNC_2 (int *) ;
 void* FUNC_3 (int) ;

TOKEN_LIST *FUNC_4(LIST *VAR_0)
{
 UINT VAR_1;
 TOKEN_LIST *VAR_2;

 if (VAR_0 == ((void*)0))
 {
  return ((void*)0);
 }

 VAR_2 = FUNC_3(sizeof(TOKEN_LIST));
 VAR_2->NumTokens = FUNC_2(VAR_0);
 VAR_2->Token = FUNC_3(sizeof(char *) * VAR_2->NumTokens);
 for (VAR_1 = 0;VAR_1 < FUNC_2(VAR_0);VAR_1++)
 {
  VAR_2->Token[VAR_1] = FUNC_0(FUNC_1(VAR_0, VAR_1));
 }

 return VAR_2;
}
