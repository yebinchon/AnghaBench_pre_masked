
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int TupleTableSlot ;
struct TYPE_4__ {int finishedRemoteScan; } ;
typedef int CustomScanState ;
typedef TYPE_1__ CitusScanState ;


 int FUNC_0 (TYPE_1__*) ;
 int * FUNC_1 (TYPE_1__*) ;

TupleTableSlot *
FUNC_2(CustomScanState *VAR_0)
{
 CitusScanState *VAR_1 = (CitusScanState *) VAR_0;
 TupleTableSlot *VAR_2 = ((void*)0);

 if (!VAR_1->finishedRemoteScan)
 {
  FUNC_0(VAR_1);

  VAR_1->finishedRemoteScan = 1;
 }

 VAR_2 = FUNC_1(VAR_1);

 return VAR_2;
}
