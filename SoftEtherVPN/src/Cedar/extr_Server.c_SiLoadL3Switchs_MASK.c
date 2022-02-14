
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef size_t UINT ;
struct TYPE_7__ {int * Cedar; } ;
struct TYPE_6__ {size_t NumTokens; char** Token; } ;
typedef TYPE_1__ TOKEN_LIST ;
typedef TYPE_2__ SERVER ;
typedef int L3SW ;
typedef int FOLDER ;
typedef int CEDAR ;


 TYPE_1__* FUNC_0 (int *) ;
 int FUNC_1 (int *,char*) ;
 int FUNC_2 (TYPE_1__*) ;
 int * FUNC_3 (int *,char*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *,int ) ;

void FUNC_6(SERVER *VAR_0, FOLDER *VAR_1)
{
 UINT VAR_2;
 TOKEN_LIST *VAR_3;
 CEDAR *VAR_4;

 if (VAR_0 == ((void*)0) || VAR_1 == ((void*)0))
 {
  return;
 }
 VAR_4 = VAR_0->Cedar;

 VAR_3 = FUNC_0(VAR_1);
 if (VAR_3 != ((void*)0))
 {
  for (VAR_2 = 0;VAR_2 < VAR_3->NumTokens;VAR_2++)
  {
   char *VAR_5 = VAR_3->Token[VAR_2];
   L3SW *VAR_6 = FUNC_3(VAR_4, VAR_5);

   FUNC_5(VAR_6, FUNC_1(VAR_1, VAR_5));

   FUNC_4(VAR_6);
  }
 }
 FUNC_2(VAR_3);
}
