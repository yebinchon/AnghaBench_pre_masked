
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
 int FUNC_0 (int) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int *,int *,TYPE_1__*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 () ;
 int FUNC_5 () ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_6 (TYPE_1__*) ;
 int FUNC_7 (int ) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int * FUNC_8 (int *) ;
 int VAR_9 ;
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
FUNC_19(char *VAR_10, int32 VAR_11, int VAR_12, bool VAR_13)
{
 const bool VAR_14 = 0;

 Relation VAR_15 = ((void*)0);
 TupleDesc VAR_16 = ((void*)0);
 ScanKeyData VAR_17[2];
 SysScanDesc VAR_18 = ((void*)0);
 HeapTuple VAR_19 = ((void*)0);
 Datum VAR_20[VAR_7];
 bool VAR_21[VAR_7];
 bool VAR_22[VAR_7];

 VAR_15 = FUNC_14(FUNC_5(), VAR_9);
 VAR_16 = FUNC_8(VAR_15);

 FUNC_9(&VAR_17[0], VAR_0,
    VAR_2, VAR_5, FUNC_1(VAR_10));
 FUNC_9(&VAR_17[1], VAR_1,
    VAR_2, VAR_4, FUNC_7(VAR_11));

 VAR_18 = FUNC_16(VAR_15, VAR_6, VAR_14,
          ((void*)0), 2, VAR_17);

 VAR_19 = FUNC_18(VAR_18);
 if (!FUNC_6(VAR_19))
 {
  FUNC_10(VAR_3, (FUNC_11("could not find valid entry for node \"%s:%d\"",
          VAR_10, VAR_11)));
 }

 FUNC_15(VAR_22, 0, sizeof(VAR_22));

 VAR_20[VAR_12 - 1] = FUNC_0(VAR_13);
 VAR_21[VAR_12 - 1] = 0;
 VAR_22[VAR_12 - 1] = 1;

 VAR_19 = FUNC_13(VAR_19, VAR_16, VAR_20, VAR_21, VAR_22);

 FUNC_2(VAR_15, &VAR_19->t_self, VAR_19);

 FUNC_3(FUNC_5());

 FUNC_4();

 FUNC_17(VAR_18);
 FUNC_12(VAR_15, VAR_8);
}
