
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int replace ;
typedef int * TupleDesc ;
struct TYPE_10__ {int t_self; } ;
struct TYPE_9__ {int objectSubId; int objectId; int classId; } ;
typedef int * SysScanDesc ;
typedef int ScanKeyData ;
typedef int * Relation ;
typedef TYPE_1__ ObjectAddress ;
typedef TYPE_2__* HeapTuple ;
typedef int Datum ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int *,int *,TYPE_2__*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 () ;
 int FUNC_3 () ;
 int FUNC_4 () ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_5 (TYPE_2__*) ;
 int FUNC_6 (int) ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_7 (int ) ;
 int * FUNC_8 (int *) ;
 int VAR_11 ;
 int FUNC_9 (int *,int ,int ,int ,int ) ;
 int FUNC_10 (int ,int ) ;
 int FUNC_11 (char*,int ,int ,int ) ;
 int FUNC_12 (int *,int ) ;
 TYPE_2__* FUNC_13 (TYPE_2__*,int *,int *,int*,int*) ;
 int * FUNC_14 (int ,int ) ;
 int FUNC_15 (int*,int ,int) ;
 int * FUNC_16 (int *,int ,int const,int *,int,int *) ;
 int FUNC_17 (int *) ;
 TYPE_2__* FUNC_18 (int *) ;

__attribute__((used)) static void
FUNC_19(const ObjectAddress *VAR_12,
          int *VAR_13,
          int *VAR_14)
{
 const bool VAR_15 = 1;

 Relation VAR_16 = ((void*)0);
 TupleDesc VAR_17 = ((void*)0);
 ScanKeyData VAR_18[3];
 SysScanDesc VAR_19 = ((void*)0);
 HeapTuple VAR_20 = ((void*)0);
 Datum VAR_21[VAR_9];
 bool VAR_22[VAR_9];
 bool VAR_23[VAR_9];

 VAR_16 = FUNC_14(FUNC_4(), VAR_11);
 VAR_17 = FUNC_8(VAR_16);


 FUNC_9(&VAR_18[0], VAR_0, VAR_5, VAR_8,
    FUNC_7(VAR_12->classId));
 FUNC_9(&VAR_18[1], VAR_3, VAR_5, VAR_8,
    FUNC_7(VAR_12->objectId));
 FUNC_9(&VAR_18[2], VAR_4, VAR_5,
    VAR_7, FUNC_7(VAR_12->objectSubId));

 VAR_19 = FUNC_16(VAR_16, FUNC_3(),
          VAR_15,
          ((void*)0), 3, VAR_18);

 VAR_20 = FUNC_18(VAR_19);
 if (!FUNC_5(VAR_20))
 {
  FUNC_10(VAR_6, (FUNC_11("could not find valid entry for node \"%d,%d,%d\" "
          "in pg_dist_object", VAR_12->classId,
          VAR_12->objectId, VAR_12->objectSubId)));
 }

 FUNC_15(VAR_23, 0, sizeof(VAR_23));

 VAR_23[VAR_2 - 1] = 1;

 if (VAR_13 != ((void*)0))
 {
  VAR_21[VAR_2 - 1] = FUNC_6(
   *VAR_13);
  VAR_22[VAR_2 - 1] = 0;
 }
 else
 {
  VAR_22[VAR_2 - 1] = 1;
 }

 VAR_23[VAR_1 - 1] = 1;
 if (VAR_14 != ((void*)0))
 {
  VAR_21[VAR_1 - 1] = FUNC_6(*VAR_14);
  VAR_22[VAR_1 - 1] = 0;
 }
 else
 {
  VAR_22[VAR_1 - 1] = 1;
 }

 VAR_20 = FUNC_13(VAR_20, VAR_17, VAR_21, VAR_22, VAR_23);

 FUNC_0(VAR_16, &VAR_20->t_self, VAR_20);

 FUNC_1(FUNC_4());

 FUNC_2();

 FUNC_17(VAR_19);

 FUNC_12(VAR_16, VAR_10);
}
