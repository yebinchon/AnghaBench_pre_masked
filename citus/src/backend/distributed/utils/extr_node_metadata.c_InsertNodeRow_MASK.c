
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int values ;
typedef int isNulls ;
typedef int int32 ;
typedef int * TupleDesc ;
struct TYPE_3__ {char* nodeRack; int shouldHaveShards; int nodeRole; int isActive; int metadataSynced; int hasMetadata; int groupId; int nodeCluster; } ;
typedef int * Relation ;
typedef TYPE_1__ NodeMetadata ;
typedef int * HeapTuple ;
typedef int Datum ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (int *,int *) ;
 int FUNC_4 (int ) ;
 int FUNC_5 () ;
 int FUNC_6 (int ,int) ;
 int FUNC_7 () ;
 int FUNC_8 (int ) ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_9 (int ) ;
 int * FUNC_10 (int *) ;
 int VAR_13 ;
 int FUNC_11 (int) ;
 int FUNC_12 (int *,int ) ;
 int * FUNC_13 (int *,int*,int*) ;
 int * FUNC_14 (int ,int ) ;
 int FUNC_15 (int*,int,int) ;
 int VAR_14 ;

__attribute__((used)) static void
FUNC_16(int VAR_15, char *VAR_16, int32 VAR_17, NodeMetadata *VAR_18)
{
 Relation VAR_19 = ((void*)0);
 TupleDesc VAR_20 = ((void*)0);
 HeapTuple VAR_21 = ((void*)0);
 Datum VAR_22[VAR_11];
 bool VAR_23[VAR_11];

 Datum VAR_24 = FUNC_1(VAR_18->nodeCluster);
 Datum VAR_25 = FUNC_6(VAR_14, VAR_24);


 FUNC_15(VAR_22, 0, sizeof(VAR_22));
 FUNC_15(VAR_23, 0, sizeof(VAR_23));

 VAR_22[VAR_5 - 1] = FUNC_11(VAR_15);
 VAR_22[VAR_0 - 1] = FUNC_8(VAR_18->groupId);
 VAR_22[VAR_6 - 1] = FUNC_2(VAR_16);
 VAR_22[VAR_7 - 1] = FUNC_11(VAR_17);
 VAR_22[VAR_8 - 1] = FUNC_2(VAR_18->nodeRack);
 VAR_22[VAR_1 - 1] = FUNC_0(VAR_18->hasMetadata);
 VAR_22[VAR_3 - 1] = FUNC_0(
  VAR_18->metadataSynced);
 VAR_22[VAR_2 - 1] = FUNC_0(VAR_18->isActive);
 VAR_22[VAR_9 - 1] = FUNC_9(VAR_18->nodeRole);
 VAR_22[VAR_4 - 1] = VAR_25;
 VAR_22[VAR_10 - 1] = FUNC_0(
  VAR_18->shouldHaveShards);

 VAR_19 = FUNC_14(FUNC_7(), VAR_13);

 VAR_20 = FUNC_10(VAR_19);
 VAR_21 = FUNC_13(VAR_20, VAR_22, VAR_23);

 FUNC_3(VAR_19, VAR_21);

 FUNC_4(FUNC_7());


 FUNC_5();


 FUNC_12(VAR_19, VAR_12);
}
