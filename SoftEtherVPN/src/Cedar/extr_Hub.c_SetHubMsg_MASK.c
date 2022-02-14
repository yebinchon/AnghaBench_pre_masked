
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int wchar_t ;
struct TYPE_3__ {int lock; int * Msg; } ;
typedef TYPE_1__ HUB ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int ) ;
 int * FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int ) ;

void FUNC_5(HUB *VAR_0, wchar_t *VAR_1)
{

 if (VAR_0 == ((void*)0))
 {
  return;
 }

 FUNC_1(VAR_0->lock);
 {
  if (VAR_0->Msg != ((void*)0))
  {
   FUNC_0(VAR_0->Msg);
   VAR_0->Msg = ((void*)0);
  }

  if (FUNC_3(VAR_1) == 0)
  {
   VAR_0->Msg = FUNC_2(VAR_1);
  }
 }
 FUNC_4(VAR_0->lock);
}
