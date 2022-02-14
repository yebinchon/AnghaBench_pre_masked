
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int Tuplestorestate ;
typedef int TupleTableSlot ;
struct TYPE_9__ {int * ps_ResultTupleSlot; } ;
struct TYPE_10__ {TYPE_1__ ps; } ;
struct TYPE_11__ {TYPE_2__ ss; } ;
struct TYPE_13__ {TYPE_3__ customScanState; int * tuplestorestate; } ;
struct TYPE_12__ {int es_direction; } ;
typedef int ScanDirection ;
typedef TYPE_4__ EState ;
typedef TYPE_5__ CitusScanState ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 TYPE_4__* FUNC_3 (TYPE_5__*) ;
 int FUNC_4 (int *,int,int,int *) ;

TupleTableSlot *
FUNC_5(CitusScanState *VAR_1)
{
 Tuplestorestate *VAR_2 = VAR_1->tuplestorestate;
 TupleTableSlot *VAR_3 = ((void*)0);
 EState *VAR_4 = ((void*)0);
 ScanDirection VAR_5 = VAR_0;
 bool VAR_6 = 1;

 if (VAR_2 == ((void*)0))
 {
  return ((void*)0);
 }

 VAR_4 = FUNC_3(VAR_1);
 VAR_5 = VAR_4->es_direction;
 FUNC_0(FUNC_2(VAR_5));

 if (FUNC_1(VAR_5))
 {
  VAR_6 = 0;
 }

 VAR_3 = VAR_1->customScanState.ss.ps.ps_ResultTupleSlot;
 FUNC_4(VAR_2, VAR_6, 0, VAR_3);

 return VAR_3;
}
