
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_4__ ;
typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


struct TYPE_16__ {int AccountName; } ;
struct TYPE_15__ {int StartupAccount; int lock; TYPE_4__* ClientOption; } ;
struct TYPE_14__ {int AccountList; } ;
struct TYPE_13__ {int AccountName; } ;
typedef TYPE_1__ RPC_CLIENT_DELETE_ACCOUNT ;
typedef int CLIENT_OPTION ;
typedef TYPE_2__ CLIENT ;
typedef TYPE_3__ ACCOUNT ;


 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (TYPE_2__*,int ) ;
 int VAR_0 ;
 int FUNC_3 (TYPE_4__*) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 TYPE_3__* FUNC_6 (int ,TYPE_3__*) ;
 int FUNC_7 (int ,int,int ) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (int ) ;
 TYPE_4__* FUNC_10 (int) ;

bool FUNC_11(CLIENT *VAR_1, RPC_CLIENT_DELETE_ACCOUNT *VAR_2)
{
 bool VAR_3;

 if (VAR_1 == ((void*)0) || VAR_2 == ((void*)0))
 {
  return 0;
 }

 VAR_3 = 0;

 FUNC_5(VAR_1->AccountList);
 {
  ACCOUNT VAR_4, *VAR_5;


  VAR_4.ClientOption = FUNC_10(sizeof(CLIENT_OPTION));
  FUNC_7(VAR_4.ClientOption->AccountName, sizeof(VAR_4.ClientOption->AccountName), VAR_2->AccountName);

  VAR_5 = FUNC_6(VAR_1->AccountList, &VAR_4);
  if (VAR_5 == ((void*)0))
  {

   FUNC_9(VAR_1->AccountList);

   FUNC_3(VAR_4.ClientOption);
   FUNC_2(VAR_1, VAR_0);
   return 0;
  }

  FUNC_3(VAR_4.ClientOption);

  FUNC_4(VAR_5->lock);
  {

   VAR_3 = 1;
   VAR_5->StartupAccount = 0;
  }
  FUNC_8(VAR_5->lock);
 }
 FUNC_9(VAR_1->AccountList);

 if (VAR_3)
 {
  FUNC_1(VAR_1);
  FUNC_0(VAR_1);
 }

 return VAR_3;
}
