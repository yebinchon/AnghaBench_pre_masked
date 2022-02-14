
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


typedef int int64 ;
typedef int int32 ;
struct TYPE_14__ {int relationId; } ;
struct TYPE_13__ {int placementId; } ;
struct TYPE_12__ {int data; } ;
typedef TYPE_1__* StringInfo ;
typedef TYPE_2__ ShardPlacement ;
typedef TYPE_3__ ShardInterval ;
typedef int Oid ;
typedef int List ;


 int VAR_0 ;
 char* FUNC_0 (TYPE_3__*) ;
 int * FUNC_1 (TYPE_3__*,char*,int ) ;
 int * FUNC_2 (TYPE_3__*,char*,int ,int) ;
 int * FUNC_3 (TYPE_3__*) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_4 () ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ,char*,int ,char*,int ) ;
 int FUNC_7 (int ) ;
 int VAR_3 ;
 int VAR_4 ;
 TYPE_3__* FUNC_8 (int ) ;
 int FUNC_9 (int ,int ) ;
 int FUNC_10 (int ,int ) ;
 int FUNC_11 (int ,int ) ;
 int * VAR_5 ;
 int FUNC_12 (int ) ;
 char VAR_6 ;
 TYPE_2__* FUNC_13 (int *,char*,int ,int) ;
 int FUNC_14 (char*,int ,char*,int *) ;
 int * FUNC_15 (int ) ;
 char* FUNC_16 (int ) ;
 int FUNC_17 (int ,int ) ;
 int VAR_7 ;
 int FUNC_18 (TYPE_1__*,int ,int ,int ,int ,int ) ;
 int FUNC_19 (int ,int ) ;
 int FUNC_20 (int ) ;
 int FUNC_21 (char*,char*) ;
 int FUNC_22 (char*) ;
 char* FUNC_23 (int ) ;
 char FUNC_24 (int ) ;
 int * FUNC_25 (int *,int ) ;
 int * FUNC_26 (int *,int *) ;
 TYPE_1__* FUNC_27 () ;
 int FUNC_28 (char*) ;

__attribute__((used)) static void
FUNC_29(int64 VAR_8, char *VAR_9, int32 VAR_10,
      char *VAR_11, int32 VAR_12)
{
 ShardInterval *VAR_13 = FUNC_8(VAR_8);
 Oid VAR_14 = VAR_13->relationId;

 char VAR_15 = FUNC_24(VAR_14);
 char *VAR_16 = FUNC_16(VAR_13->relationId);
 bool VAR_17 = 0;
 bool VAR_18 = 0;
 bool VAR_19 = 0;

 List *VAR_20 = VAR_5;
 List *VAR_21 = VAR_5;
 List *VAR_22 = VAR_5;
 ShardPlacement *VAR_23 = ((void*)0);


 FUNC_10(VAR_14, VAR_0);

 FUNC_7(VAR_14);

 if (VAR_15 == VAR_6)
 {
  char *VAR_24 = FUNC_23(VAR_14);
  FUNC_19(VAR_2, (FUNC_20(VAR_1),
      FUNC_22("cannot repair shard"),
      FUNC_21("Table %s is a foreign table. Repairing "
          "shards backed by foreign tables is "
          "not supported.", VAR_24)));
 }
 FUNC_5(VAR_14);
 FUNC_9(VAR_8, VAR_3);





 FUNC_11(VAR_8, VAR_3);





 FUNC_6(VAR_8, VAR_9, VAR_10, VAR_11,
        VAR_12);





 VAR_19 = FUNC_12(VAR_14);
 VAR_18 = !VAR_19;


 VAR_20 =
  FUNC_2(VAR_13, VAR_9, VAR_10, VAR_18);
 VAR_21 = FUNC_3(VAR_13);
 VAR_20 = FUNC_26(VAR_20, VAR_21);
 if (VAR_19)
 {
  List *VAR_25 = VAR_5;

  char *VAR_26 = FUNC_0(VAR_13);
  StringInfo VAR_27 = FUNC_27();

  VAR_25 =
   FUNC_1(VAR_13, VAR_9, VAR_10);
  VAR_20 = FUNC_26(VAR_20, VAR_25);


  FUNC_18(VAR_27, VAR_7,
       FUNC_28(VAR_26),
       FUNC_28(VAR_26),
       FUNC_28(VAR_9),
       VAR_10);
  VAR_20 = FUNC_25(VAR_20, VAR_27->data);
 }

 FUNC_4();
 FUNC_14(VAR_11, VAR_12, VAR_16,
              VAR_20);


 VAR_22 = FUNC_15(VAR_8);
 VAR_23 = FUNC_13(VAR_22, VAR_11, VAR_12,
             VAR_17);
 FUNC_17(VAR_23->placementId, VAR_4);
}
