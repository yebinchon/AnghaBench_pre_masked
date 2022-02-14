
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {struct TYPE_3__* columnOutputFunctions; struct TYPE_3__* copyOutState; } ;
typedef TYPE_1__ RemoteFileDestReceiver ;
typedef int DestReceiver ;


 int FUNC_0 (TYPE_1__*) ;

__attribute__((used)) static void
FUNC_1(DestReceiver *VAR_0)
{
 RemoteFileDestReceiver *VAR_1 = (RemoteFileDestReceiver *) VAR_0;

 if (VAR_1->copyOutState)
 {
  FUNC_0(VAR_1->copyOutState);
 }

 if (VAR_1->columnOutputFunctions)
 {
  FUNC_0(VAR_1->columnOutputFunctions);
 }

 FUNC_0(VAR_1);
}
