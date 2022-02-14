
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


typedef int replace ;
typedef int int32 ;
typedef int * TupleDesc ;
struct TYPE_7__ {int t_self; } ;
typedef int * SysScanDesc ;
typedef int ScanKeyData ;
typedef int * Relation ;
typedef TYPE_1__* HeapTuple ;
typedef int Datum ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (int *,int *,TYPE_1__*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 () ;
 int FUNC_4 () ;
 int FUNC_5 () ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_6 (TYPE_1__*) ;
 int FUNC_7 (int ) ;
 int VAR_6 ;
 int VAR_7 ;
 int * FUNC_8 (int *) ;
 int VAR_8 ;
 int FUNC_9 (int *,int ,int ,int ,int ) ;
 int FUNC_10 (int ,int ) ;
 int FUNC_11 (char*,char*,int ) ;
 int FUNC_12 (int *,int ) ;
 TYPE_1__* FUNC_13 (TYPE_1__*,int *,int *,int*,int*) ;
 int * FUNC_14 (int ,int ) ;
 int FUNC_15 (int*,int ,int) ;
 int * FUNC_16 (int *,int ,int const,int *,int,int *) ;
 int FUNC_17 (int *) ;
 TYPE_1__* FUNC_18 (int *) ;

__attribute__((used)) static void
FUNC_19(int32 VAR_9, char *VAR_10, int32 VAR_11)
{
 const bool VAR_12 = 1;

 Relation VAR_13 = ((void*)0);
 TupleDesc VAR_14 = ((void*)0);
 ScanKeyData VAR_15[1];
 SysScanDesc VAR_16 = ((void*)0);
 HeapTuple VAR_17 = ((void*)0);
 Datum VAR_18[VAR_6];
 bool VAR_19[VAR_6];
 bool VAR_20[VAR_6];

 VAR_13 = FUNC_14(FUNC_5(), VAR_8);
 VAR_14 = FUNC_8(VAR_13);

 FUNC_9(&VAR_15[0], VAR_0,
    VAR_3, VAR_5, FUNC_7(VAR_9));

 VAR_16 = FUNC_16(VAR_13, FUNC_4(), VAR_12,
          ((void*)0), 1, VAR_15);

 VAR_17 = FUNC_18(VAR_16);
 if (!FUNC_6(VAR_17))
 {
  FUNC_10(VAR_4, (FUNC_11("could not find valid entry for node \"%s:%d\"",
          VAR_10, VAR_11)));
 }

 FUNC_15(VAR_20, 0, sizeof(VAR_20));

 VAR_18[VAR_2 - 1] = FUNC_7(VAR_11);
 VAR_19[VAR_2 - 1] = 0;
 VAR_20[VAR_2 - 1] = 1;

 VAR_18[VAR_1 - 1] = FUNC_0(VAR_10);
 VAR_19[VAR_1 - 1] = 0;
 VAR_20[VAR_1 - 1] = 1;

 VAR_17 = FUNC_13(VAR_17, VAR_14, VAR_18, VAR_19, VAR_20);

 FUNC_1(VAR_13, &VAR_17->t_self, VAR_17);

 FUNC_2(FUNC_5());

 FUNC_3();

 FUNC_17(VAR_16);
 FUNC_12(VAR_13, VAR_7);
}
