
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint64 ;
typedef int uint32 ;
typedef int text ;
typedef int int64 ;
typedef int int32 ;
struct TYPE_3__ {scalar_t__ replicationModel; int relationId; } ;
typedef int Oid ;
typedef int List ;
typedef TYPE_1__ DistTableCacheEntry ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (int ,int *,int,int) ;
 int FUNC_2 () ;
 TYPE_1__* FUNC_3 (int ) ;
 int * FUNC_4 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_5 (int ) ;
 int VAR_4 ;
 int FUNC_6 () ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int * FUNC_7 (int ,int,int *,int,int) ;
 int FUNC_8 (int ,int,char,int *,int *) ;
 int * FUNC_9 (int) ;
 int * FUNC_10 (int ) ;
 int FUNC_11 (int ,int ) ;
 int FUNC_12 (int,int ) ;
 int * VAR_8 ;
 int VAR_9 ;
 scalar_t__ VAR_10 ;
 int VAR_11 ;
 char FUNC_13 (int ) ;
 int * FUNC_14 (int *,int ) ;
 int FUNC_15 (int ,int ) ;
 int FUNC_16 (int ) ;
 int FUNC_17 (char*,char*) ;
 int FUNC_18 (char*) ;
 int FUNC_19 (char*,...) ;
 char* FUNC_20 (int ) ;
 int * FUNC_21 (int *,int *) ;
 int FUNC_22 (int *) ;

void
FUNC_23(Oid VAR_12, int32 VAR_13,
         int32 VAR_14, bool VAR_15)
{
 char VAR_16 = 0;
 List *VAR_17 = VAR_8;
 int32 VAR_18 = 0;
 uint32 VAR_19 = 0;
 uint64 VAR_20 = 0;
 List *VAR_21 = VAR_8;
 int64 VAR_22 = 0;
 DistTableCacheEntry *VAR_23 = FUNC_3(VAR_12);
 bool VAR_24 = 0;
 List *VAR_25 = VAR_8;


 FUNC_0(VAR_12);







 FUNC_5(VAR_12);


 FUNC_11(VAR_12, VAR_4);


 VAR_21 = FUNC_10(VAR_12);
 if (VAR_21 != VAR_8)
 {
  char *VAR_26 = FUNC_20(VAR_12);
  FUNC_15(VAR_3, (FUNC_16(VAR_2),
      FUNC_19("table \"%s\" has already had shards created for it",
          VAR_26)));
 }


 if (VAR_13 <= 0)
 {
  FUNC_15(VAR_3, (FUNC_16(VAR_1),
      FUNC_19("shard_count must be positive")));
 }


 if (VAR_14 <= 0)
 {
  FUNC_15(VAR_3, (FUNC_16(VAR_1),
      FUNC_19("replication_factor must be positive")));
 }


 if (VAR_23->replicationModel == VAR_10 &&
  VAR_14 > 1)
 {
  char *VAR_27 = FUNC_20(VAR_23->relationId);
  FUNC_15(VAR_3, (FUNC_16(VAR_1),
      FUNC_19("using replication factor %d with the streaming "
          "replication model is not supported",
          VAR_14),
      FUNC_17("The table %s is marked as streaming replicated and "
          "the shard replication factor of streaming replicated "
          "tables must be 1.", VAR_27),
      FUNC_18("Use replication factor 1.")));
 }


 VAR_20 = VAR_5 / VAR_13;


 FUNC_11(FUNC_2(), VAR_11);


 VAR_17 = FUNC_4(VAR_9);
 VAR_17 = FUNC_14(VAR_17, VAR_0);

 VAR_18 = FUNC_22(VAR_17);
 if (VAR_14 > VAR_18)
 {
  FUNC_15(VAR_3, (FUNC_16(VAR_1),
      FUNC_19("replication_factor (%d) exceeds number of worker nodes "
          "(%d)", VAR_14, VAR_18),
      FUNC_18("Add more worker nodes or try again with a lower "
        "replication factor.")));
 }


 VAR_19 = (uint32) VAR_14;
 if (VAR_18 > VAR_14)
 {
  VAR_19++;
 }


 VAR_16 = FUNC_13(VAR_12);

 for (VAR_22 = 0; VAR_22 < VAR_13; VAR_22++)
 {
  uint32 VAR_28 = VAR_22 % VAR_18;


  text *VAR_29 = ((void*)0);
  text *VAR_30 = ((void*)0);
  int32 VAR_31 = VAR_7 + (VAR_22 * VAR_20);
  int32 VAR_32 = VAR_31 + (VAR_20 - 1);
  uint64 VAR_33 = FUNC_6();
  List *VAR_34 = VAR_8;


  if (VAR_22 == (VAR_13 - 1))
  {
   VAR_32 = VAR_6;
  }


  VAR_29 = FUNC_9(VAR_31);
  VAR_30 = FUNC_9(VAR_32);







  FUNC_12(VAR_33, VAR_4);

  FUNC_8(VAR_12, VAR_33, VAR_16,
        VAR_29, VAR_30);

  VAR_34 = FUNC_7(VAR_12,
                  VAR_33,
                  VAR_17,
                  VAR_28,
                  VAR_14);
  VAR_25 = FUNC_21(VAR_25,
             VAR_34);
 }

 FUNC_1(VAR_12, VAR_25,
        VAR_15, VAR_24);
}
