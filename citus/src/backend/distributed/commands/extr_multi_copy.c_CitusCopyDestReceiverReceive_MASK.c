
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int TupleTableSlot ;
struct TYPE_3__ {int connectionStateHash; } ;
typedef int List ;
typedef int DestReceiver ;
typedef TYPE_1__ CitusCopyDestReceiver ;


 int FUNC_0 (int *,TYPE_1__*) ;
 int * FUNC_1 (int ) ;
 int FUNC_2 () ;
 int FUNC_3 () ;
 int FUNC_4 () ;
 int FUNC_5 () ;
 int FUNC_6 (int *) ;

__attribute__((used)) static bool
FUNC_7(TupleTableSlot *VAR_0, DestReceiver *VAR_1)
{
 bool VAR_2 = 0;
 CitusCopyDestReceiver *VAR_3 = (CitusCopyDestReceiver *) VAR_1;

 FUNC_5();
 {
  VAR_2 = FUNC_0(VAR_0, VAR_3);
 }
 FUNC_2();
 {




  List *VAR_4 = FUNC_1(VAR_3->connectionStateHash);
  FUNC_6(VAR_4);

  FUNC_4();
 }
 FUNC_3();

 return VAR_2;
}
