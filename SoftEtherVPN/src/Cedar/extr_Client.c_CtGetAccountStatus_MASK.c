
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_4__ ;
typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


struct TYPE_16__ {int AccountName; } ;
struct TYPE_15__ {int lock; int * ClientSession; TYPE_4__* ClientOption; } ;
struct TYPE_14__ {int AccountList; } ;
struct TYPE_13__ {int AccountName; } ;
typedef int SESSION ;
typedef TYPE_1__ RPC_CLIENT_GET_CONNECTION_STATUS ;
typedef int CLIENT_OPTION ;
typedef TYPE_2__ CLIENT ;
typedef TYPE_3__ ACCOUNT ;


 int FUNC_0 (TYPE_1__*,int *) ;
 int FUNC_1 (TYPE_2__*,int ) ;
 int VAR_0 ;
 int FUNC_2 (TYPE_4__*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 TYPE_3__* FUNC_5 (int ,TYPE_3__*) ;
 int FUNC_6 (int ,int,int ) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (TYPE_1__*,int) ;
 TYPE_4__* FUNC_10 (int) ;

bool FUNC_11(CLIENT *VAR_1, RPC_CLIENT_GET_CONNECTION_STATUS *VAR_2)
{

 if (VAR_1 == ((void*)0) || VAR_2 == ((void*)0))
 {
  return 0;
 }

 FUNC_4(VAR_1->AccountList);
 {
  ACCOUNT VAR_3, *VAR_4;


  VAR_3.ClientOption = FUNC_10(sizeof(CLIENT_OPTION));
  FUNC_6(VAR_3.ClientOption->AccountName, sizeof(VAR_3.ClientOption->AccountName), VAR_2->AccountName);

  VAR_4 = FUNC_5(VAR_1->AccountList, &VAR_3);
  if (VAR_4 == ((void*)0))
  {

   FUNC_8(VAR_1->AccountList);

   FUNC_2(VAR_3.ClientOption);
   FUNC_1(VAR_1, VAR_0);
   return 0;
  }

  FUNC_2(VAR_3.ClientOption);

  FUNC_3(VAR_4->lock);
  {
   FUNC_9(VAR_2, sizeof(RPC_CLIENT_GET_CONNECTION_STATUS));
   if (VAR_4->ClientSession != ((void*)0))
   {
    SESSION *VAR_5 = VAR_4->ClientSession;
    FUNC_0(VAR_2, VAR_5);
   }
  }
  FUNC_7(VAR_4->lock);
 }
 FUNC_8(VAR_1->AccountList);

 return 1;
}
