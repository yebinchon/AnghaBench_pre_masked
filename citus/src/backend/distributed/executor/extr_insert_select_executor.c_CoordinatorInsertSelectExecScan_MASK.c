
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int TupleTableSlot ;
typedef int CustomScanState ;


 int * FUNC_0 (int *) ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 int FUNC_3 () ;
 int FUNC_4 () ;
 int VAR_0 ;

TupleTableSlot *
FUNC_5(CustomScanState *VAR_1)
{
 TupleTableSlot *VAR_2 = ((void*)0);
 VAR_0++;

 FUNC_4();
 {
  VAR_2 = FUNC_0(VAR_1);
 }
 FUNC_1();
 {
  VAR_0--;
  FUNC_3();
 }
 FUNC_2();

 VAR_0--;
 return VAR_2;
}
