
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef int uint32 ;
struct TYPE_10__ {int vartype; } ;
typedef TYPE_1__ Var ;
typedef TYPE_2__* TupleDesc ;
struct TYPE_11__ {scalar_t__ tdhasoid; } ;
typedef int * Relation ;
typedef scalar_t__ Oid ;


 int VAR_0 ;
 int VAR_1 ;
 char VAR_2 ;
 char VAR_3 ;
 char VAR_4 ;
 scalar_t__ FUNC_0 (TYPE_2__*,TYPE_1__*) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_1 (scalar_t__,char,int) ;
 int FUNC_2 (scalar_t__,char) ;
 int FUNC_3 (scalar_t__) ;
 int FUNC_4 (int *,char,TYPE_1__*,int ) ;
 int FUNC_5 (int *) ;
 int VAR_8 ;
 int VAR_9 ;
 scalar_t__ VAR_10 ;
 int FUNC_6 (scalar_t__) ;
 int VAR_11 ;
 scalar_t__ FUNC_7 (scalar_t__) ;
 scalar_t__ FUNC_8 (scalar_t__) ;
 scalar_t__ FUNC_9 (scalar_t__) ;
 TYPE_2__* FUNC_10 (int *) ;
 char* FUNC_11 (int *) ;
 int FUNC_12 (int *) ;
 scalar_t__ FUNC_13 (TYPE_2__*) ;
 scalar_t__ FUNC_14 (TYPE_1__*,int ,int ) ;
 int FUNC_15 (int ,int ) ;
 int FUNC_16 (int ) ;
 int FUNC_17 (int ) ;
 int FUNC_18 (char*,...) ;
 int FUNC_19 (char*,char*) ;
 int FUNC_20 (char*,...) ;
 int FUNC_21 (int ) ;
 char* FUNC_22 (scalar_t__) ;
 int FUNC_23 (int *,int ) ;
 int * FUNC_24 (scalar_t__,int ) ;

__attribute__((used)) static void
FUNC_25(Oid VAR_12, Var *VAR_13,
          char VAR_14, uint32 VAR_15,
          char VAR_16, bool VAR_17)
{
 Relation VAR_18 = ((void*)0);
 TupleDesc VAR_19 = ((void*)0);
 char *VAR_20 = ((void*)0);
 Oid VAR_21 = VAR_10;

 FUNC_3(VAR_12);
 FUNC_1(VAR_12, VAR_14, VAR_17);
 FUNC_2(VAR_10, VAR_16);


 VAR_18 = FUNC_24(VAR_12, VAR_11);
 VAR_19 = FUNC_10(VAR_18);
 VAR_20 = FUNC_11(VAR_18);

 if (!FUNC_12(VAR_18))
 {
  FUNC_15(VAR_7, (FUNC_20(
       "cannot distribute relations using non-heap access methods")));
 }




 if (VAR_19->tdhasoid)
 {
  FUNC_15(VAR_7, (FUNC_16(VAR_5),
      FUNC_20("cannot distribute relation: %s", VAR_20),
      FUNC_18("Distributed relations must not specify the WITH "
          "(OIDS) option in their definitions.")));
 }



 if (FUNC_13(VAR_19))
 {
  FUNC_15(VAR_7, (FUNC_16(VAR_5),
      FUNC_20("cannot distribute relation: %s", VAR_20),
      FUNC_18("Distributed relations must not use GENERATED "
          "... AS IDENTITY.")));
 }


 if (VAR_14 != VAR_3 &&
  FUNC_0(VAR_19, VAR_13))
 {
  FUNC_15(VAR_7, (FUNC_16(VAR_5),
      FUNC_20("cannot distribute relation: %s", VAR_20),
      FUNC_18("Distribution column must not use GENERATED ALWAYS "
          "AS (...) STORED.")));
 }


 if (VAR_14 == VAR_2)
 {
  Oid VAR_22 = FUNC_14(VAR_13,
                 VAR_9,
                 VAR_8);
  if (VAR_22 == VAR_10)
  {
   FUNC_15(VAR_7, (FUNC_16(VAR_6),
       FUNC_20("could not identify a hash function for type %s",
           FUNC_21(VAR_13->vartype)),
       FUNC_17(VAR_13->vartype),
       FUNC_18("Partition column types must have a hash function "
           "defined to use hash partitioning.")));
  }
 }
 else if (VAR_14 == VAR_4)
 {
  Oid VAR_23 = FUNC_14(VAR_13,
               VAR_1, VAR_0);
  if (VAR_23 == VAR_10)
  {
   FUNC_15(VAR_7,
     (FUNC_16(VAR_6),
      FUNC_20("could not identify a comparison function for type %s",
       FUNC_21(VAR_13->vartype)),
      FUNC_17(VAR_13->vartype),
      FUNC_18("Partition column types must have a comparison function "
          "defined to use range partitioning.")));
  }
 }

 if (FUNC_8(VAR_12))
 {
  VAR_21 = FUNC_7(VAR_12);
 }


 if (FUNC_8(VAR_12) && !FUNC_6(VAR_21))
 {
  char *VAR_24 = FUNC_22(VAR_21);

  FUNC_15(VAR_7, (FUNC_20("cannot distribute relation \"%s\" which is partition of "
          "\"%s\"", VAR_20, VAR_24),
      FUNC_18("Citus does not support distributing partitions "
          "if their parent is not distributed table."),
      FUNC_19("Distribute the partitioned table \"%s\" instead.",
        VAR_24)));
 }







 if (FUNC_9(VAR_12))
 {

  if (VAR_17)
  {
   FUNC_15(VAR_7, (FUNC_16(VAR_5),
       FUNC_20("distributing partitioned tables in only supported "
           "with create_distributed_table UDF")));
  }


  if (VAR_14 != VAR_2)
  {
   FUNC_15(VAR_7, (FUNC_16(VAR_5),
       FUNC_20("distributing partitioned tables in only supported "
           "for hash-distributed tables")));
  }


  if (FUNC_8(VAR_12))
  {
   char *VAR_25 = FUNC_22(VAR_21);

   FUNC_15(VAR_7, (FUNC_16(VAR_5),
       FUNC_20("distributing multi-level partitioned tables "
           "is not supported"),
       FUNC_18("Relation \"%s\" is partitioned table itself and "
           "it is also partition of relation \"%s\".",
           VAR_20, VAR_25)));
  }
 }

 FUNC_4(VAR_18, VAR_14, VAR_13,
         VAR_15);


 FUNC_5(VAR_18);
 FUNC_23(VAR_18, VAR_11);
}
