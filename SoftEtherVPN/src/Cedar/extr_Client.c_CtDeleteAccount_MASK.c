
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_19__ TYPE_4__ ;
typedef struct TYPE_18__ TYPE_3__ ;
typedef struct TYPE_17__ TYPE_2__ ;
typedef struct TYPE_16__ TYPE_1__ ;


struct TYPE_19__ {int AccountName; } ;
struct TYPE_18__ {int lock; int * ClientSession; TYPE_4__* ClientOption; } ;
struct TYPE_17__ {int AccountList; scalar_t__ Halt; } ;
struct TYPE_16__ {int AccountName; } ;
typedef TYPE_1__ RPC_CLIENT_DELETE_ACCOUNT ;
typedef int CLIENT_OPTION ;
typedef TYPE_2__ CLIENT ;
typedef TYPE_3__ ACCOUNT ;


 int FUNC_0 (TYPE_2__*,char*,int ) ;
 int FUNC_1 (TYPE_3__*) ;
 int FUNC_2 (TYPE_2__*) ;
 int FUNC_3 (TYPE_2__*) ;
 int FUNC_4 (TYPE_2__*,int ) ;
 int FUNC_5 (int ,TYPE_3__*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_6 (TYPE_4__*) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int ) ;
 TYPE_3__* FUNC_9 (int ,TYPE_3__*) ;
 int FUNC_10 (int ,int,int ) ;
 int FUNC_11 (int ) ;
 int FUNC_12 (int ) ;
 TYPE_4__* FUNC_13 (int) ;

bool FUNC_14(CLIENT *VAR_3, RPC_CLIENT_DELETE_ACCOUNT *VAR_4, bool VAR_5)
{
 bool VAR_6;

 if (VAR_3 == ((void*)0) || VAR_4 == ((void*)0))
 {
  return 0;
 }

 VAR_6 = 0;

 if (VAR_3->Halt)
 {

  FUNC_4(VAR_3, VAR_2);
  return 0;
 }

 FUNC_8(VAR_3->AccountList);
 {
  ACCOUNT VAR_7, *VAR_8;


  VAR_7.ClientOption = FUNC_13(sizeof(CLIENT_OPTION));
  FUNC_10(VAR_7.ClientOption->AccountName, sizeof(VAR_7.ClientOption->AccountName), VAR_4->AccountName);

  VAR_8 = FUNC_9(VAR_3->AccountList, &VAR_7);
  if (VAR_8 == ((void*)0))
  {

   FUNC_12(VAR_3->AccountList);

   FUNC_6(VAR_7.ClientOption);
   FUNC_4(VAR_3, VAR_1);
   return 0;
  }

  FUNC_6(VAR_7.ClientOption);

  FUNC_7(VAR_8->lock);
  {

   if (VAR_8->ClientSession != ((void*)0))
   {

    FUNC_11(VAR_8->lock);
    FUNC_12(VAR_3->AccountList);
    FUNC_4(VAR_3, VAR_0);

    return 0;
   }


   FUNC_5(VAR_3->AccountList, VAR_8);
  }
  FUNC_11(VAR_8->lock);


  FUNC_1(VAR_8);

  FUNC_0(VAR_3, "LC_DELETE_ACCOUNT", VAR_4->AccountName);
  VAR_6 = 1;

 }
 FUNC_12(VAR_3->AccountList);

 if (VAR_6)
 {
  FUNC_3(VAR_3);
  FUNC_2(VAR_3);
 }

 return VAR_6;
}
