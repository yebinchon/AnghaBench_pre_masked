
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_20__ TYPE_5__ ;
typedef struct TYPE_19__ TYPE_4__ ;
typedef struct TYPE_18__ TYPE_3__ ;
typedef struct TYPE_17__ TYPE_2__ ;
typedef struct TYPE_16__ TYPE_1__ ;


struct TYPE_20__ {int AccountName; } ;
struct TYPE_19__ {int lock; TYPE_1__* ClientSession; TYPE_5__* ClientOption; } ;
struct TYPE_18__ {int AccountList; } ;
struct TYPE_17__ {int AccountName; } ;
struct TYPE_16__ {int ref; } ;
typedef TYPE_1__ SESSION ;
typedef TYPE_2__ RPC_CLIENT_CONNECT ;
typedef int CLIENT_OPTION ;
typedef TYPE_3__ CLIENT ;
typedef TYPE_4__ ACCOUNT ;


 int FUNC_0 (int ) ;
 int FUNC_1 (TYPE_3__*,char*,int ) ;
 int FUNC_2 (TYPE_3__*) ;
 int FUNC_3 (TYPE_3__*,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_4 (TYPE_5__*) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (TYPE_1__*) ;
 TYPE_4__* FUNC_8 (int ,TYPE_4__*) ;
 int FUNC_9 (TYPE_1__*) ;
 int FUNC_10 (int ,int,int ) ;
 int FUNC_11 (int ) ;
 int FUNC_12 (int ) ;
 TYPE_5__* FUNC_13 (int) ;

bool FUNC_14(CLIENT *VAR_2, RPC_CLIENT_CONNECT *VAR_3, bool VAR_4)
{
 bool VAR_5 = 0;
 ACCOUNT VAR_6, *VAR_7;
 SESSION *VAR_8 = ((void*)0);

 if (VAR_2 == ((void*)0) || VAR_3 == ((void*)0))
 {
  return 0;
 }

 FUNC_6(VAR_2->AccountList);
 {

  VAR_6.ClientOption = FUNC_13(sizeof(CLIENT_OPTION));
  FUNC_10(VAR_6.ClientOption->AccountName, sizeof(VAR_6.ClientOption->AccountName), VAR_3->AccountName);

  VAR_7 = FUNC_8(VAR_2->AccountList, &VAR_6);
  if (VAR_7 == ((void*)0))
  {

   FUNC_12(VAR_2->AccountList);

   FUNC_4(VAR_6.ClientOption);
   FUNC_3(VAR_2, VAR_1);
   return 0;
  }

  FUNC_4(VAR_6.ClientOption);

  FUNC_5(VAR_7->lock);
  {
   if (VAR_7->ClientSession == ((void*)0))
   {

    FUNC_3(VAR_2, VAR_0);
   }
   else
   {
    VAR_8 = VAR_7->ClientSession;
    FUNC_0(VAR_8->ref);

    VAR_7->ClientSession = ((void*)0);
    VAR_5 = 1;
   }
  }
  FUNC_11(VAR_7->lock);
 }
 FUNC_12(VAR_2->AccountList);

 if (VAR_8 != ((void*)0))
 {

  FUNC_1(VAR_2, "LC_DISCONNECT", VAR_3->AccountName);
  FUNC_9(VAR_8);
  FUNC_7(VAR_8);
 }


 if (VAR_5 != 0)
 {
  FUNC_2(VAR_2);
 }

 return VAR_5;
}
