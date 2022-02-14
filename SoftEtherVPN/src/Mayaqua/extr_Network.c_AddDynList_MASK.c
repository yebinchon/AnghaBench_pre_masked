
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int UINT64 ;
typedef size_t UINT ;
struct TYPE_4__ {size_t NumTokens; char** Token; } ;
typedef TYPE_1__ TOKEN_LIST ;
typedef int PACK ;
typedef int BUF ;


 int * FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (TYPE_1__*) ;
 TYPE_1__* FUNC_3 (int *) ;
 int FUNC_4 (int *,char*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (char*,int ) ;

void FUNC_7(BUF *VAR_0)
{
 PACK *VAR_1;
 TOKEN_LIST *VAR_2;

 if (VAR_0 == ((void*)0))
 {
  return;
 }

 FUNC_5(VAR_0);

 VAR_1 = FUNC_0(VAR_0);
 if (VAR_1 == ((void*)0))
 {
  return;
 }

 VAR_2 = FUNC_3(VAR_1);
 if (VAR_2 != ((void*)0))
 {
  UINT VAR_3;

  for (VAR_3 = 0;VAR_3 < VAR_2->NumTokens;VAR_3++)
  {
   char *VAR_4 = VAR_2->Token[VAR_3];
   UINT64 VAR_5 = FUNC_4(VAR_1, VAR_4);

   FUNC_6(VAR_4, VAR_5);
  }

  FUNC_2(VAR_2);
 }

 FUNC_1(VAR_1);
}
