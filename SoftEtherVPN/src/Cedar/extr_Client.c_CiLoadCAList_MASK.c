
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef size_t UINT ;
struct TYPE_10__ {int CaList; } ;
struct TYPE_9__ {TYPE_3__* Cedar; } ;
struct TYPE_8__ {size_t NumTokens; int * Token; } ;
typedef TYPE_1__ TOKEN_LIST ;
typedef int FOLDER ;
typedef TYPE_2__ CLIENT ;
typedef TYPE_3__ CEDAR ;


 TYPE_1__* FUNC_0 (int *) ;
 int * FUNC_1 (int *,int ) ;
 int FUNC_2 (TYPE_2__*,int *) ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;

void FUNC_6(CLIENT *VAR_0, FOLDER *VAR_1)
{
 CEDAR *VAR_2;
 TOKEN_LIST *VAR_3;

 if (VAR_0 == ((void*)0) || VAR_1 == ((void*)0))
 {
  return;
 }

 VAR_3 = FUNC_0(VAR_1);

 VAR_2 = VAR_0->Cedar;

 FUNC_4(VAR_2->CaList);
 {
  UINT VAR_4;
  for (VAR_4 = 0;VAR_4 < VAR_3->NumTokens;VAR_4++)
  {
   FOLDER *VAR_5 = FUNC_1(VAR_1, VAR_3->Token[VAR_4]);
   FUNC_2(VAR_0, VAR_5);
  }
 }
 FUNC_5(VAR_2->CaList);

 FUNC_3(VAR_3);
}
