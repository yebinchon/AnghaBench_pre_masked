
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


typedef int wchar_t ;
typedef int c ;
typedef scalar_t__ UINT ;
struct TYPE_15__ {int * AccountList; } ;
struct TYPE_14__ {int lock; TYPE_1__* ClientOption; scalar_t__ StartupAccount; } ;
struct TYPE_13__ {int AccountName; } ;
struct TYPE_12__ {int AccountName; } ;
typedef TYPE_2__ RPC_CLIENT_CONNECT ;
typedef int LIST ;
typedef TYPE_3__ ACCOUNT ;


 int FUNC_0 (int *,int ) ;
 int FUNC_1 () ;
 int FUNC_2 (TYPE_4__*) ;
 int FUNC_3 (TYPE_4__*) ;
 TYPE_4__* FUNC_4 () ;
 int FUNC_5 (TYPE_4__*) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (TYPE_4__*,TYPE_2__*) ;
 int FUNC_8 (int *) ;
 void* FUNC_9 (int *,scalar_t__) ;
 scalar_t__ FUNC_10 (int *) ;
 int FUNC_11 (int ) ;
 int FUNC_12 (int *) ;
 int * FUNC_13 (int *) ;
 int FUNC_14 () ;
 int FUNC_15 (int *) ;
 int FUNC_16 (int ,int,int *) ;
 int FUNC_17 (int ) ;
 int FUNC_18 (int *) ;
 int FUNC_19 (TYPE_2__*,int) ;
 TYPE_4__* VAR_0 ;

void FUNC_20()
{
 UINT VAR_1;
 LIST *VAR_2;
 if (VAR_0 != ((void*)0))
 {

  return;
 }


 FUNC_1();






 VAR_0 = FUNC_4();


 FUNC_2(VAR_0);


 FUNC_5(VAR_0);


 FUNC_3(VAR_0);


 VAR_2 = FUNC_13(((void*)0));
 FUNC_12(VAR_0->AccountList);
 {
  for (VAR_1 = 0;VAR_1 < FUNC_10(VAR_0->AccountList);VAR_1++)
  {
   ACCOUNT *VAR_3 = FUNC_9(VAR_0->AccountList, VAR_1);
   FUNC_11(VAR_3->lock);
   {
    if (VAR_3->StartupAccount)
    {
     FUNC_0(VAR_2, FUNC_6(VAR_3->ClientOption->AccountName));
    }
   }
   FUNC_17(VAR_3->lock);
  }
 }
 FUNC_18(VAR_0->AccountList);

 for (VAR_1 = 0;VAR_1 < FUNC_10(VAR_2);VAR_1++)
 {
  wchar_t *VAR_4 = FUNC_9(VAR_2, VAR_1);
  RPC_CLIENT_CONNECT VAR_5;
  FUNC_19(&VAR_5, sizeof(VAR_5));
  FUNC_16(VAR_5.AccountName, sizeof(VAR_5.AccountName), VAR_4);
  FUNC_7(VAR_0, &VAR_5);
  FUNC_8(VAR_4);
 }
 FUNC_15(VAR_2);
}
