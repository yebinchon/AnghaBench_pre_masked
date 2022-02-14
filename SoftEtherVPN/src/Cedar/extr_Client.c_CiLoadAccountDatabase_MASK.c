
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef size_t UINT ;
struct TYPE_7__ {int AccountList; } ;
struct TYPE_6__ {size_t NumTokens; int * Token; } ;
typedef TYPE_1__ TOKEN_LIST ;
typedef int FOLDER ;
typedef TYPE_2__ CLIENT ;
typedef int ACCOUNT ;


 int FUNC_0 (int ,int *) ;
 TYPE_1__* FUNC_1 (int *) ;
 int * FUNC_2 (int *,int ) ;
 int * FUNC_3 (int *) ;
 int FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (int ) ;

void FUNC_6(CLIENT *VAR_0, FOLDER *VAR_1)
{
 TOKEN_LIST *VAR_2;
 UINT VAR_3;

 if (VAR_0 == ((void*)0) || VAR_1 == ((void*)0))
 {
  return;
 }

 VAR_2 = FUNC_1(VAR_1);
 if (VAR_2 == ((void*)0))
 {
  return;
 }

 for (VAR_3 = 0;VAR_3 < VAR_2->NumTokens;VAR_3++)
 {
  FOLDER *VAR_4 = FUNC_2(VAR_1, VAR_2->Token[VAR_3]);

  if (VAR_4 != ((void*)0))
  {
   ACCOUNT *VAR_5 = FUNC_3(VAR_4);
   if (VAR_5 != ((void*)0))
   {
    {
     FUNC_0(VAR_0->AccountList, VAR_5);
    }
   }
  }
 }

 FUNC_5(VAR_0->AccountList);

 FUNC_4(VAR_2);
}
