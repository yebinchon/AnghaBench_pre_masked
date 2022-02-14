
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int aggcombinefn; int aggserialfn; int aggdeserialfn; int aggtransfn; int aggfinalfn; int aggfnoid; } ;
struct TYPE_4__ {int valueInit; scalar_t__ value; scalar_t__ valueNull; int transtype; } ;
typedef TYPE_1__ StypeBox ;
typedef int Oid ;
typedef int MemoryContext ;
typedef int HeapTuple ;
typedef int FunctionCallInfo ;
typedef TYPE_2__* Form_pg_aggregate ;
typedef scalar_t__ Datum ;


 int VAR_0 ;
 int FUNC_0 (int ,int *) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int ) ;
 int FUNC_2 () ;
 int FUNC_3 (int ) ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_4 (int ,char*,int ,int) ;
 scalar_t__ FUNC_5 (int ,int ,int ,scalar_t__*) ;
 char* FUNC_6 (scalar_t__) ;
 int FUNC_7 (int ,int ,int ) ;
 int FUNC_8 (int ,char*) ;
 int FUNC_9 (int ,int *,int *) ;
 int FUNC_10 (char*) ;

__attribute__((used)) static void
FUNC_11(FunctionCallInfo VAR_5, StypeBox *VAR_6, HeapTuple VAR_7, Oid
       VAR_8)
{
 Datum VAR_9;
 Form_pg_aggregate VAR_10 = (Form_pg_aggregate) FUNC_1(VAR_7);
 Oid VAR_11 = FUNC_2();


 FUNC_7(VAR_3, VAR_11, VAR_10->aggfnoid);
 FUNC_7(VAR_4, VAR_11, VAR_10->aggfinalfn);
 FUNC_7(VAR_4, VAR_11, VAR_10->aggtransfn);
 FUNC_7(VAR_4, VAR_11, VAR_10->aggdeserialfn);
 FUNC_7(VAR_4, VAR_11, VAR_10->aggserialfn);
 FUNC_7(VAR_4, VAR_11, VAR_10->aggcombinefn);

 VAR_9 = FUNC_5(VAR_0, VAR_7,
          VAR_1,
          &VAR_6->valueNull);
 VAR_6->transtype = VAR_8;
 VAR_6->valueInit = !VAR_6->valueNull;
 if (VAR_6->valueNull)
 {
  VAR_6->value = (Datum) 0;
 }
 else
 {
  Oid VAR_12,
   VAR_13;
  char *VAR_14;

  MemoryContext VAR_15;
  MemoryContext VAR_16;
  if (!FUNC_0(VAR_5, &VAR_15))
  {
   FUNC_8(VAR_2, "InitializeStypeBox called from non aggregate context");
  }
  VAR_16 = FUNC_3(VAR_15);

  FUNC_9(VAR_8, &VAR_12, &VAR_13);
  VAR_14 = FUNC_6(VAR_9);
  VAR_6->value = FUNC_4(VAR_12, VAR_14,
            VAR_13, -1);
  FUNC_10(VAR_14);

  FUNC_3(VAR_16);
 }
}
