
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


typedef int values ;
typedef int uint32 ;
typedef int replace ;
typedef int isNull ;
typedef int * TupleDesc ;
struct TYPE_7__ {int t_self; } ;
typedef int * SysScanDesc ;
typedef int ScanKeyData ;
typedef int * Relation ;
typedef int Oid ;
typedef TYPE_1__* HeapTuple ;
typedef int Datum ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,int *,TYPE_1__*) ;
 int FUNC_1 (int ) ;
 char* FUNC_2 (int ,int ) ;
 int FUNC_3 () ;
 int FUNC_4 () ;
 int FUNC_5 () ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_6 (TYPE_1__*) ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_7 (int ) ;
 int * FUNC_8 (int *) ;
 int VAR_7 ;
 int FUNC_9 (int *,int ,int ,int ,int ) ;
 int FUNC_10 (int ,char*) ;
 int FUNC_11 (int ) ;
 int FUNC_12 (int ) ;
 int VAR_8 ;
 int FUNC_13 (int ,int ) ;
 int FUNC_14 (char*,char*) ;
 char* FUNC_15 (int ) ;
 int FUNC_16 (int *,int ) ;
 TYPE_1__* FUNC_17 (TYPE_1__*,int *,int*,int*,int*) ;
 int * FUNC_18 (int ,int ) ;
 int FUNC_19 (int*,int,int) ;
 int * FUNC_20 (int *,int ,int,int *,int,int *) ;
 int FUNC_21 (int *) ;
 TYPE_1__* FUNC_22 (int *) ;

__attribute__((used)) static void
FUNC_23(Oid VAR_9, uint32 VAR_10)
{
 Relation VAR_11 = ((void*)0);
 HeapTuple VAR_12 = ((void*)0);
 TupleDesc VAR_13 = ((void*)0);
 SysScanDesc VAR_14 = ((void*)0);
 bool VAR_15 = 0;
 bool VAR_16 = 1;
 int VAR_17 = 1;
 ScanKeyData VAR_18[1];
 Datum VAR_19[VAR_5];
 bool VAR_20[VAR_5];
 bool VAR_21[VAR_5];

 VAR_11 = FUNC_18(FUNC_5(), VAR_7);
 VAR_13 = FUNC_8(VAR_11);

 FUNC_9(&VAR_18[0], VAR_1,
    VAR_2, VAR_4, FUNC_7(VAR_9));

 VAR_14 = FUNC_20(VAR_11,
          FUNC_4(), VAR_16,
          ((void*)0), VAR_17, VAR_18);

 VAR_12 = FUNC_22(VAR_14);
 if (!FUNC_6(VAR_12))
 {
  char *VAR_22 = FUNC_15(VAR_9);
  FUNC_13(VAR_3, (FUNC_14("could not find valid entry for relation %s",
          VAR_22)));
 }

 FUNC_19(VAR_19, 0, sizeof(VAR_19));
 FUNC_19(VAR_20, 0, sizeof(VAR_20));
 FUNC_19(VAR_21, 0, sizeof(VAR_21));

 VAR_19[VAR_0 - 1] = FUNC_12(VAR_10);
 VAR_20[VAR_0 - 1] = 0;
 VAR_21[VAR_0 - 1] = 1;

 VAR_12 = FUNC_17(VAR_12, VAR_13, VAR_19, VAR_20, VAR_21);


 FUNC_0(VAR_11, &VAR_12->t_self, VAR_12);

 FUNC_1(VAR_9);

 FUNC_3();

 FUNC_21(VAR_14);
 FUNC_16(VAR_11, VAR_6);

 VAR_15 = FUNC_11(VAR_9);
 if (VAR_15)
 {
  char *VAR_23 = FUNC_2(VAR_9,
                 VAR_10);

  FUNC_10(VAR_8, VAR_23);
 }
}
