
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int X ;
typedef size_t UINT ;
struct TYPE_4__ {size_t NumTokens; int * Token; } ;
typedef TYPE_1__ TOKEN_LIST ;
typedef int LIST ;
typedef int FOLDER ;
typedef int BUF ;


 int * FUNC_0 (int *,int) ;
 TYPE_1__* FUNC_1 (int *) ;
 int * FUNC_2 (int *,char*) ;
 int * FUNC_3 (int *,int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (TYPE_1__*) ;
 int FUNC_6 (int *,int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;

void FUNC_9(LIST *VAR_0, FOLDER *VAR_1)
{

 if (VAR_0 == ((void*)0) || VAR_1 == ((void*)0))
 {
  return;
 }

 FUNC_7(VAR_0);
 {
  UINT VAR_2;
  TOKEN_LIST *VAR_3;

  VAR_3 = FUNC_1(VAR_1);

  for (VAR_2 = 0;VAR_2 < VAR_3->NumTokens;VAR_2++)
  {
   FOLDER *VAR_4 = FUNC_3(VAR_1, VAR_3->Token[VAR_2]);
   BUF *VAR_5;

   VAR_5 = FUNC_2(VAR_4, "X509");
   if (VAR_5 != ((void*)0))
   {
    X *VAR_6 = FUNC_0(VAR_5, 0);
    if (VAR_6 != ((void*)0))
    {
     FUNC_6(VAR_0, VAR_6);
    }
    FUNC_4(VAR_5);
   }
  }

  FUNC_5(VAR_3);
 }
 FUNC_8(VAR_0);
}
