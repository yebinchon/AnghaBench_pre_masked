
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef size_t UINT ;
struct TYPE_4__ {size_t NumTokens; int * Token; } ;
typedef TYPE_1__ TOKEN_LIST ;
typedef int SERVER ;
typedef int FOLDER ;


 TYPE_1__* FUNC_0 (int *) ;
 int * FUNC_1 (int *,int ) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (int *,int *) ;

void FUNC_4(SERVER *VAR_0, FOLDER *VAR_1)
{
 TOKEN_LIST *VAR_2;
 UINT VAR_3;

 if (VAR_0 == ((void*)0) || VAR_1 == ((void*)0))
 {
  return;
 }

 VAR_2 = FUNC_0(VAR_1);
 for (VAR_3 = 0;VAR_3 < VAR_2->NumTokens;VAR_3++)
 {
  FOLDER *VAR_4 = FUNC_1(VAR_1, VAR_2->Token[VAR_3]);
  if (VAR_4 != ((void*)0))
  {
   FUNC_3(VAR_0, VAR_4);
  }
 }
 FUNC_2(VAR_2);
}
