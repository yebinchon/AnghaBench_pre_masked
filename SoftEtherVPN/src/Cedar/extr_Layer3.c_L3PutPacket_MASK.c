
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int UINT ;
struct TYPE_6__ {int * CancelList; TYPE_1__* Switch; } ;
struct TYPE_5__ {int lock; } ;
typedef int PKT ;
typedef TYPE_1__ L3SW ;
typedef TYPE_2__ L3IF ;


 int FUNC_0 (int *) ;
 int FUNC_1 (void*) ;
 int FUNC_2 (TYPE_2__*,int *) ;
 int FUNC_3 (int ) ;
 int * FUNC_4 () ;
 int * FUNC_5 (void*,int ) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int ) ;

void FUNC_8(L3IF *VAR_0, void *VAR_1, UINT VAR_2)
{
 PKT *VAR_3;
 L3SW *VAR_4;
 if (VAR_0 == ((void*)0))
 {
  return;
 }

 VAR_4 = VAR_0->Switch;

 if (VAR_1 != ((void*)0))
 {

  if (VAR_0->CancelList == ((void*)0))
  {
   VAR_0->CancelList = FUNC_4();
  }


  VAR_3 = FUNC_5(VAR_1, VAR_2);

  if (VAR_3 == ((void*)0))
  {

   FUNC_1(VAR_1);
  }
  else
  {

   FUNC_3(VAR_4->lock);
   {
    FUNC_2(VAR_0, VAR_3);
   }
   FUNC_7(VAR_4->lock);
  }
 }
 else
 {

  if (VAR_0->CancelList != ((void*)0))
  {
   FUNC_0(VAR_0->CancelList);
   FUNC_6(VAR_0->CancelList);
   VAR_0->CancelList = ((void*)0);
  }
 }
}
