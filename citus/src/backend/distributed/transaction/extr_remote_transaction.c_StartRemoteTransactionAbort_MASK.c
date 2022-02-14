
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_3__ ;
typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;


struct TYPE_15__ {scalar_t__ transactionState; int preparedName; } ;
struct TYPE_16__ {TYPE_2__ remoteTransaction; } ;
struct TYPE_14__ {char* data; } ;
typedef TYPE_1__ StringInfoData ;
typedef TYPE_2__ RemoteTransaction ;
typedef TYPE_3__ MultiConnection ;


 int FUNC_0 (int) ;
 int FUNC_1 (TYPE_3__*) ;
 int FUNC_2 (TYPE_3__*) ;
 int FUNC_3 (TYPE_3__*,int const) ;
 int FUNC_4 (TYPE_3__*,int const) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_5 (TYPE_3__*,char*) ;
 int FUNC_6 (TYPE_3__*) ;
 int FUNC_7 (TYPE_3__*,int const) ;
 int FUNC_8 (TYPE_1__*,char*,int ) ;
 int FUNC_9 (TYPE_1__*) ;
 int FUNC_10 (int ) ;

void
FUNC_11(MultiConnection *VAR_5)
{
 RemoteTransaction *VAR_6 = &VAR_5->remoteTransaction;
 const bool VAR_7 = 0;
 const bool VAR_8 = 0;

 FUNC_0(VAR_6->transactionState != VAR_2);
 if (VAR_6->transactionState == VAR_4 ||
  VAR_6->transactionState == VAR_3)
 {
  StringInfoData VAR_9;


  FUNC_2(VAR_5);

  FUNC_9(&VAR_9);
  FUNC_8(&VAR_9, "ROLLBACK PREPARED %s",
       FUNC_10(VAR_6->preparedName));

  if (!FUNC_5(VAR_5, VAR_9.data))
  {
   FUNC_3(VAR_5, VAR_7);

   FUNC_7(VAR_5, VAR_8);
  }
  else
  {
   VAR_6->transactionState = VAR_1;
  }
 }
 else
 {







  if (!FUNC_1(VAR_5))
  {
   FUNC_6(VAR_5);


   return;
  }

  if (!FUNC_5(VAR_5, "ROLLBACK"))
  {

   FUNC_4(VAR_5, VAR_7);
  }
  else
  {
   VAR_6->transactionState = VAR_0;
  }
 }
}
