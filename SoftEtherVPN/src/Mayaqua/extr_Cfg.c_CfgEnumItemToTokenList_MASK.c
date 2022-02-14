
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef size_t UINT ;
struct TYPE_10__ {int Name; int Items; } ;
struct TYPE_9__ {int NumTokens; int * Token; } ;
typedef TYPE_1__ TOKEN_LIST ;
typedef TYPE_2__ FOLDER ;


 int FUNC_0 (int ) ;
 int FUNC_1 (TYPE_1__*) ;
 TYPE_2__* FUNC_2 (int ,size_t) ;
 int FUNC_3 (int ) ;
 TYPE_1__* FUNC_4 (TYPE_1__*) ;
 void* FUNC_5 (int) ;

TOKEN_LIST *FUNC_6(FOLDER *VAR_0)
{
 TOKEN_LIST *VAR_1, *VAR_2;
 UINT VAR_3;

 if (VAR_0 == ((void*)0))
 {
  return ((void*)0);
 }

 VAR_1 = FUNC_5(sizeof(TOKEN_LIST));
 VAR_1->NumTokens = FUNC_3(VAR_0->Items);
 VAR_1->Token = FUNC_5(sizeof(char *) * VAR_1->NumTokens);

 for (VAR_3 = 0;VAR_3 < VAR_1->NumTokens;VAR_3++)
 {
  FOLDER *VAR_4 = FUNC_2(VAR_0->Items, VAR_3);
  VAR_1->Token[VAR_3] = FUNC_0(VAR_4->Name);
 }

 VAR_2 = FUNC_4(VAR_1);
 FUNC_1(VAR_1);

 return VAR_2;
}
