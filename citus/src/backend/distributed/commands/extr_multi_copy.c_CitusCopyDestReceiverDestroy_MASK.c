
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ connectionStateHash; scalar_t__ shardStateHash; struct TYPE_3__* columnCoercionPaths; struct TYPE_3__* columnOutputFunctions; struct TYPE_3__* copyOutState; } ;
typedef int DestReceiver ;
typedef TYPE_1__ CitusCopyDestReceiver ;


 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (TYPE_1__*) ;

__attribute__((used)) static void
FUNC_2(DestReceiver *VAR_0)
{
 CitusCopyDestReceiver *VAR_1 = (CitusCopyDestReceiver *) VAR_0;

 if (VAR_1->copyOutState)
 {
  FUNC_1(VAR_1->copyOutState);
 }

 if (VAR_1->columnOutputFunctions)
 {
  FUNC_1(VAR_1->columnOutputFunctions);
 }

 if (VAR_1->columnCoercionPaths)
 {
  FUNC_1(VAR_1->columnCoercionPaths);
 }

 if (VAR_1->shardStateHash)
 {
  FUNC_0(VAR_1->shardStateHash);
 }

 if (VAR_1->connectionStateHash)
 {
  FUNC_0(VAR_1->connectionStateHash);
 }

 FUNC_1(VAR_1);
}
