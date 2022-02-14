
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int TupleTableSlot ;
struct TYPE_4__ {int * ss_ScanTupleSlot; } ;
struct TYPE_5__ {TYPE_1__ ss; } ;
typedef TYPE_2__ ForeignScanState ;


 int FUNC_0 (int *) ;

__attribute__((used)) static TupleTableSlot *
FUNC_1(ForeignScanState *VAR_0)
{
 TupleTableSlot *VAR_1 = VAR_0->ss.ss_ScanTupleSlot;
 FUNC_0(VAR_1);

 return VAR_1;
}
