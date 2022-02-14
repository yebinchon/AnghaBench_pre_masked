
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_1__ ;


typedef int values ;
typedef int replace ;
typedef int isnull ;
typedef int * TupleDesc ;
struct TYPE_8__ {int t_self; } ;
typedef int * SysScanDesc ;
typedef int ScanKeyData ;
typedef int * Relation ;
typedef TYPE_1__* HeapTuple ;
typedef int Datum ;
typedef int CatalogIndexState ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,int *,TYPE_1__*,int ) ;
 int FUNC_4 () ;
 int FUNC_5 () ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_6 (TYPE_1__*) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int * FUNC_7 (int *) ;
 int FUNC_8 (int *,int,int ,int ,int) ;
 int FUNC_9 (int *,int ) ;
 int FUNC_10 (TYPE_1__*) ;
 TYPE_1__* FUNC_11 (TYPE_1__*,int *,int*,int*,int*) ;
 int * FUNC_12 (int ,int ) ;
 int FUNC_13 (int*,int,int) ;
 int * FUNC_14 (int *,int ,int,int *,int,int *) ;
 int FUNC_15 (int *) ;
 TYPE_1__* FUNC_16 (int *) ;

__attribute__((used)) static bool
FUNC_17(void)
{
 bool VAR_8 = 0;
 Relation VAR_9 = ((void*)0);
 SysScanDesc VAR_10 = ((void*)0);
 ScanKeyData VAR_11[2];
 int VAR_12 = 2;
 bool VAR_13 = 0;
 HeapTuple VAR_14 = ((void*)0);
 TupleDesc VAR_15 = ((void*)0);
 CatalogIndexState VAR_16;






 VAR_9 = FUNC_12(FUNC_5(), VAR_3);
 VAR_15 = FUNC_7(VAR_9);
 FUNC_8(&VAR_11[0], VAR_0,
    VAR_2, VAR_4, FUNC_0(1));
 FUNC_8(&VAR_11[1], VAR_1,
    VAR_2, VAR_4, FUNC_0(1));

 VAR_16 = FUNC_2(VAR_9);

 VAR_10 = FUNC_14(VAR_9,
          VAR_5, VAR_13,
          ((void*)0), VAR_12, VAR_11);

 VAR_14 = FUNC_16(VAR_10);
 if (FUNC_6(VAR_14))
 {
  VAR_8 = 1;
 }

 while (FUNC_6(VAR_14))
 {
  HeapTuple VAR_17 = ((void*)0);
  Datum VAR_18[VAR_6];
  bool VAR_19[VAR_6];
  bool VAR_20[VAR_6];

  FUNC_13(VAR_20, 0, sizeof(VAR_20));
  FUNC_13(VAR_19, 0, sizeof(VAR_19));
  FUNC_13(VAR_18, 0, sizeof(VAR_18));

  VAR_18[VAR_1 - 1] = FUNC_0(0);
  VAR_20[VAR_1 - 1] = 1;

  VAR_17 = FUNC_11(VAR_14, VAR_15, VAR_18, VAR_19,
           VAR_20);

  FUNC_3(VAR_9, &VAR_17->t_self, VAR_17,
           VAR_16);

  FUNC_4();

  FUNC_10(VAR_17);

  VAR_14 = FUNC_16(VAR_10);
 }

 FUNC_15(VAR_10);
 FUNC_1(VAR_16);
 FUNC_9(VAR_9, VAR_7);

 return VAR_8;
}
