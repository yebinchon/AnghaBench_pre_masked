
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int X ;
struct TYPE_3__ {int lock; int * ServerK; int * ServerX; } ;
typedef int K ;
typedef TYPE_1__ CEDAR ;


 int * FUNC_0 (int *) ;
 int * FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;

void FUNC_6(CEDAR *VAR_0, X *VAR_1, K *VAR_2)
{

 if (VAR_1 == ((void*)0) || VAR_2 == ((void*)0))
 {
  return;
 }

 FUNC_4(VAR_0->lock);
 {
  if (VAR_0->ServerX != ((void*)0))
  {
   FUNC_3(VAR_0->ServerX);
  }

  if (VAR_0->ServerK != ((void*)0))
  {
   FUNC_2(VAR_0->ServerK);
  }

  VAR_0->ServerX = FUNC_1(VAR_1);
  VAR_0->ServerK = FUNC_0(VAR_2);
 }
 FUNC_5(VAR_0->lock);
}
