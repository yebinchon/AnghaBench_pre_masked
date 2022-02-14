
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_9__ {scalar_t__ transactionState; } ;
struct TYPE_10__ {TYPE_1__ remoteTransaction; } ;
typedef TYPE_1__ RemoteTransaction ;
typedef int PGresult ;
typedef TYPE_2__ MultiConnection ;


 int FUNC_0 (TYPE_2__*,int const) ;
 int * FUNC_1 (TYPE_2__*,int const) ;
 int FUNC_2 (TYPE_2__*,int *,int const) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_5 (TYPE_2__*) ;
 int FUNC_6 (TYPE_2__*,int const) ;

void
FUNC_7(MultiConnection *VAR_2)
{
 RemoteTransaction *VAR_3 = &VAR_2->remoteTransaction;
 const bool VAR_4 = 0;

 if (VAR_3->transactionState == VAR_0)
 {
  PGresult *VAR_5 = FUNC_1(VAR_2, VAR_4);
  if (!FUNC_3(VAR_5))
  {
   const bool VAR_6 = 0;

   FUNC_2(VAR_2, VAR_5, VAR_4);

   FUNC_6(VAR_2, VAR_6);
  }

  FUNC_4(VAR_5);
 }







 if (!FUNC_0(VAR_2, VAR_4))
 {
  FUNC_5(VAR_2);
 }

 VAR_3->transactionState = VAR_1;
}
