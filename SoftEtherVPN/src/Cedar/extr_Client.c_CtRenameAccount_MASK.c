
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_6__ ;
typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


struct TYPE_16__ {int AccountName; } ;
struct TYPE_15__ {int lock; TYPE_6__* ClientOption; int * ClientSession; } ;
struct TYPE_14__ {int AccountList; } ;
struct TYPE_13__ {int NewName; int OldName; } ;
typedef TYPE_1__ RPC_RENAME_ACCOUNT ;
typedef int CLIENT_OPTION ;
typedef TYPE_2__ CLIENT ;
typedef TYPE_3__ ACCOUNT ;


 int FUNC_0 (TYPE_2__*,char*,int ,int ) ;
 int FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (TYPE_2__*) ;
 int FUNC_3 (TYPE_2__*,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_4 (TYPE_6__*) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ) ;
 TYPE_3__* FUNC_7 (int ,TYPE_3__*) ;
 int FUNC_8 (int ) ;
 scalar_t__ FUNC_9 (int ,int ) ;
 int FUNC_10 (int ,int,int ) ;
 scalar_t__ FUNC_11 (int ) ;
 int FUNC_12 (int ) ;
 int FUNC_13 (int ) ;
 void* FUNC_14 (int) ;

bool FUNC_15(CLIENT *VAR_4, RPC_RENAME_ACCOUNT *VAR_5, bool VAR_6)
{
 bool VAR_7;

 if (VAR_4 == ((void*)0) || VAR_5 == ((void*)0))
 {
  return 0;
 }


 VAR_7 = 0;

 if (FUNC_9(VAR_5->NewName, VAR_5->OldName) == 0)
 {

  return 1;
 }

 FUNC_6(VAR_4->AccountList);
 {
  ACCOUNT VAR_8, *VAR_9, *VAR_10;

  if (FUNC_11(VAR_5->NewName) == 0)
  {

   FUNC_3(VAR_4, VAR_3);
   FUNC_13(VAR_4->AccountList);
   return 0;
  }


  VAR_8.ClientOption = FUNC_14(sizeof(CLIENT_OPTION));
  FUNC_10(VAR_8.ClientOption->AccountName, sizeof(VAR_8.ClientOption->AccountName), VAR_5->OldName);

  VAR_9 = FUNC_7(VAR_4->AccountList, &VAR_8);
  if (VAR_9 == ((void*)0))
  {

   FUNC_13(VAR_4->AccountList);

   FUNC_4(VAR_8.ClientOption);
   FUNC_3(VAR_4, VAR_2);
   return 0;
  }

  FUNC_4(VAR_8.ClientOption);


  VAR_8.ClientOption = FUNC_14(sizeof(CLIENT_OPTION));
  FUNC_10(VAR_8.ClientOption->AccountName, sizeof(VAR_8.ClientOption->AccountName), VAR_5->NewName);

  VAR_10 = FUNC_7(VAR_4->AccountList, &VAR_8);
  if (VAR_10 != ((void*)0))
  {

   FUNC_13(VAR_4->AccountList);

   FUNC_4(VAR_8.ClientOption);
   FUNC_3(VAR_4, VAR_1);
   return 0;
  }

  FUNC_4(VAR_8.ClientOption);

  FUNC_5(VAR_9->lock);
  {

   if (VAR_9->ClientSession != ((void*)0))
   {

    FUNC_12(VAR_9->lock);
    FUNC_13(VAR_4->AccountList);
    FUNC_3(VAR_4, VAR_0);

    return 0;
   }


   FUNC_10(VAR_9->ClientOption->AccountName, sizeof(VAR_9->ClientOption->AccountName),
    VAR_5->NewName);

   FUNC_0(VAR_4, "LC_RENAME_ACCOUNT", VAR_5->OldName, VAR_5->NewName);

   VAR_7 = 1;
  }
  FUNC_12(VAR_9->lock);

  FUNC_8(VAR_4->AccountList);

 }
 FUNC_13(VAR_4->AccountList);

 FUNC_2(VAR_4);

 FUNC_1(VAR_4);

 return VAR_7;
}
