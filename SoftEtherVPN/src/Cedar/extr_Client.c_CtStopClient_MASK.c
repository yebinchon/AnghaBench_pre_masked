
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


typedef size_t UINT ;
struct TYPE_14__ {int Halt; int AccountList; } ;
struct TYPE_13__ {int lock; TYPE_1__* ClientSession; } ;
struct TYPE_12__ {int ref; } ;
typedef TYPE_1__ SESSION ;
typedef TYPE_2__ ACCOUNT ;


 int FUNC_0 (int ) ;
 int FUNC_1 (TYPE_3__*) ;
 int FUNC_2 (TYPE_3__*) ;
 int FUNC_3 (TYPE_3__*) ;
 int FUNC_4 () ;
 int FUNC_5 (TYPE_3__*) ;
 int FUNC_6 (TYPE_2__**) ;
 size_t FUNC_7 (int ) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (TYPE_1__*) ;
 int FUNC_11 (TYPE_1__*) ;
 TYPE_2__** FUNC_12 (int ) ;
 int FUNC_13 (int ) ;
 int FUNC_14 (int ) ;
 TYPE_3__* VAR_0 ;

void FUNC_15()
{
 UINT VAR_1, VAR_2;
 ACCOUNT **VAR_3;
 if (VAR_0 == ((void*)0))
 {

  return;
 }


 VAR_0->Halt = 1;


 FUNC_3(VAR_0);


 FUNC_4();


 FUNC_1(VAR_0);


 FUNC_9(VAR_0->AccountList);
 {
  VAR_2 = FUNC_7(VAR_0->AccountList);
  VAR_3 = FUNC_12(VAR_0->AccountList);
 }
 FUNC_14(VAR_0->AccountList);

 for (VAR_1 = 0;VAR_1 < VAR_2;VAR_1++)
 {
  ACCOUNT *VAR_4 = VAR_3[VAR_1];
  SESSION *VAR_5 = ((void*)0);

  FUNC_8(VAR_4->lock);
  {
   if (VAR_4->ClientSession != ((void*)0))
   {
    VAR_5 = VAR_4->ClientSession;
    FUNC_0(VAR_5->ref);
   }
  }
  FUNC_13(VAR_4->lock);

  if (VAR_5 != ((void*)0))
  {
   FUNC_11(VAR_5);
   FUNC_10(VAR_5);
   FUNC_8(VAR_4->lock);
   {
    if (VAR_4->ClientSession != ((void*)0))
    {
     FUNC_10(VAR_4->ClientSession);
     VAR_4->ClientSession = ((void*)0);
    }
   }
   FUNC_13(VAR_4->lock);
  }
 }

 FUNC_6(VAR_3);


 FUNC_2(VAR_0);


 FUNC_5(VAR_0);
 VAR_0 = ((void*)0);
}
