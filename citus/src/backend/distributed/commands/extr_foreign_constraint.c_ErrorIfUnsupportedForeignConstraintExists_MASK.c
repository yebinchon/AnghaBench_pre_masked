
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef scalar_t__ uint32 ;
typedef int Var ;
struct TYPE_8__ {scalar_t__ contype; scalar_t__ confdeltype; scalar_t__ confupdtype; int confrelid; } ;
struct TYPE_7__ {int rd_id; } ;
typedef int * SysScanDesc ;
typedef int ScanKeyData ;
typedef TYPE_1__* Relation ;
typedef int Oid ;
typedef int * HeapTuple ;
typedef TYPE_2__* Form_pg_constraint ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 char VAR_6 ;
 int * FUNC_0 (int ) ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 scalar_t__ VAR_12 ;
 int VAR_13 ;
 int FUNC_1 (int *,int *,int *,int*,int*) ;
 int FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (int *) ;
 scalar_t__ VAR_14 ;
 int VAR_15 ;
 int FUNC_4 (int ) ;
 char FUNC_5 (int ) ;
 int FUNC_6 (int *,int ,int ,int ,int ) ;
 int VAR_16 ;
 int FUNC_7 (int ) ;
 scalar_t__ FUNC_8 (int ) ;
 int FUNC_9 (int ,int ) ;
 int FUNC_10 (int ) ;
 int FUNC_11 (char*) ;
 int FUNC_12 (char*) ;
 int FUNC_13 (char*) ;
 int FUNC_14 (TYPE_1__*,int ) ;
 TYPE_1__* FUNC_15 (int ,int ) ;
 int * FUNC_16 (TYPE_1__*,int ,int,int *,int,int *) ;
 int FUNC_17 (int *) ;
 int * FUNC_18 (int *) ;

void
FUNC_19(Relation VAR_17, char VAR_18,
            Var *VAR_19,
            uint32 VAR_20)
{
 Relation VAR_21 = ((void*)0);
 SysScanDesc VAR_22 = ((void*)0);
 ScanKeyData VAR_23[1];
 int VAR_24 = 1;
 HeapTuple VAR_25 = ((void*)0);

 Oid VAR_26 = VAR_17->rd_id;
 Oid VAR_27 = VAR_15;
 uint32 VAR_28 = VAR_14;
 bool VAR_29 = 0;
 bool VAR_30 = 1;

 if (FUNC_4(VAR_26))
 {

  VAR_30 = FUNC_7(VAR_26);
 }
 else
 {

  VAR_30 = (VAR_16 == 1);
 }

 VAR_21 = FUNC_15(VAR_4, VAR_0);
 FUNC_6(&VAR_23[0], VAR_1, VAR_2, VAR_13,
    VAR_17->rd_id);
 VAR_22 = FUNC_16(VAR_21, VAR_5,
          1, ((void*)0),
          VAR_24, VAR_23);

 VAR_25 = FUNC_18(VAR_22);
 while (FUNC_3(VAR_25))
 {
  Form_pg_constraint VAR_31 = (Form_pg_constraint) FUNC_2(VAR_25);
  bool VAR_32 = 0;
  char VAR_33 = 0;
  Var *VAR_34 = ((void*)0);
  bool VAR_35 = 0;
  bool VAR_36 = 0;
  int VAR_37 = -1;
  int VAR_38 = -1;
  bool VAR_39 = 0;
  bool VAR_40 = 0;

  if (VAR_31->contype != VAR_3)
  {
   VAR_25 = FUNC_18(VAR_22);
   continue;
  }

  VAR_27 = VAR_31->confrelid;
  VAR_29 = (VAR_26 == VAR_27);

  VAR_32 = FUNC_4(VAR_27);
  if (!VAR_32 && !VAR_29)
  {
   FUNC_9(VAR_9, (FUNC_10(VAR_8),
       FUNC_13("cannot create foreign key constraint"),
       FUNC_11("Referenced table must be a distributed table"
           " or a reference table.")));
  }

  if (!VAR_29)
  {
   VAR_33 = FUNC_5(VAR_27);
   VAR_34 = (VAR_33 == VAR_6) ?
        ((void*)0) :
        FUNC_0(VAR_27);
   VAR_28 = FUNC_8(VAR_27);
  }
  else
  {
   VAR_33 = VAR_18;
   VAR_34 = VAR_19;
   VAR_28 = VAR_20;
  }

  VAR_35 = (VAR_18 == VAR_6);
  VAR_36 = (VAR_33 == VAR_6);






  if (VAR_35 && VAR_36)
  {
   VAR_25 = FUNC_18(VAR_22);
   continue;
  }





  if (VAR_35 && !VAR_36)
  {
   FUNC_9(VAR_9, (FUNC_10(VAR_7),
       FUNC_13("cannot create foreign key constraint "
           "since foreign keys from reference tables "
           "to distributed tables are not supported"),
       FUNC_11("A reference table can only have reference "
           "keys to other reference tables")));
  }





  if (VAR_20 == VAR_14 ||
   (VAR_20 != VAR_28 &&
    !VAR_36))
  {
   FUNC_9(VAR_9, (FUNC_10(VAR_7),
       FUNC_13("cannot create foreign key constraint since "
           "relations are not colocated or not referencing "
           "a reference table"),
       FUNC_11(
        "A distributed table can only have foreign keys "
        "if it is referencing another colocated hash "
        "distributed table or a reference table")));
  }

  FUNC_1(VAR_25,
           VAR_19,
           VAR_34,
           &VAR_37,
           &VAR_38);
  VAR_39 = (VAR_37 != -1);
  VAR_40 =
   (VAR_39 && VAR_37 ==
    VAR_38);






  if (VAR_39)
  {




   if (VAR_31->confdeltype == VAR_12 ||
    VAR_31->confdeltype == VAR_11)
   {
    FUNC_9(VAR_9, (FUNC_10(VAR_7),
        FUNC_13("cannot create foreign key constraint"),
        FUNC_11("SET NULL or SET DEFAULT is not supported"
            " in ON DELETE operation when distribution "
            "key is included in the foreign key constraint")));
   }







   if (VAR_31->confupdtype == VAR_12 ||
    VAR_31->confupdtype == VAR_11 ||
    VAR_31->confupdtype == VAR_10)
   {
    FUNC_9(VAR_9, (FUNC_10(VAR_7),
        FUNC_13("cannot create foreign key constraint"),
        FUNC_11("SET NULL, SET DEFAULT or CASCADE is not "
            "supported in ON UPDATE operation  when "
            "distribution key included in the foreign "
            "constraint.")));
   }
  }





  if (!VAR_36 && !VAR_40)
  {
   FUNC_9(VAR_9, (FUNC_10(VAR_7),
       FUNC_13("cannot create foreign key constraint"),
       FUNC_11("Foreign keys are supported in two cases, "
           "either in between two colocated tables including "
           "partition column in the same ordinal in the both "
           "tables or from distributed to reference tables")));
  }
  if (!VAR_30)
  {
   FUNC_9(VAR_9, (FUNC_10(VAR_7),
       FUNC_13("cannot create foreign key constraint"),
       FUNC_11("Citus Community Edition currently supports "
           "foreign key constraints only for "
           "\"citus.shard_replication_factor = 1\"."),
       FUNC_12("Please change \"citus.shard_replication_factor to "
         "1\". To learn more about using foreign keys with "
         "other replication factors, please contact us at "
         "https://citusdata.com/about/contact_us.")));
  }

  VAR_25 = FUNC_18(VAR_22);
 }


 FUNC_17(VAR_22);
 FUNC_14(VAR_21, VAR_0);
}
