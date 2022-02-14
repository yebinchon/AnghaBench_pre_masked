
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ vartype; } ;
typedef TYPE_1__ Var ;
struct TYPE_6__ {char partitionMethod; char replicationModel; } ;
typedef scalar_t__ Oid ;
typedef TYPE_2__ DistTableCacheEntry ;
typedef scalar_t__ CoercionPathType ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 char VAR_2 ;
 TYPE_1__* FUNC_0 (scalar_t__) ;
 TYPE_2__* FUNC_1 (scalar_t__) ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 char VAR_6 ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (char*) ;
 int FUNC_5 (char*) ;
 int FUNC_6 (char*,char*,char*) ;
 scalar_t__ FUNC_7 (scalar_t__,scalar_t__,int ,scalar_t__*) ;
 char* FUNC_8 (scalar_t__) ;
 char* FUNC_9 (scalar_t__) ;

__attribute__((used)) static void
FUNC_10(Oid VAR_7, Oid VAR_8,
           Oid VAR_9)
{
 DistTableCacheEntry *VAR_10 = FUNC_1(VAR_9);
 char VAR_11 = VAR_10->partitionMethod;
 char VAR_12 = VAR_10->replicationModel;
 Var *VAR_13 = FUNC_0(VAR_9);
 Oid VAR_14 = VAR_5;

 if (VAR_11 != VAR_2)
 {
  char *VAR_15 = FUNC_8(VAR_7);
  char *VAR_16 = FUNC_9(VAR_9);

  FUNC_2(VAR_4, (FUNC_3(VAR_3),
      FUNC_6("cannot colocate function \"%s\" and table \"%s\" because "
          "colocate_with option is only supported for hash "
          "distributed tables.", VAR_15,
          VAR_16)));
 }

 if (VAR_12 != VAR_6)
 {
  char *VAR_17 = FUNC_8(VAR_7);
  char *VAR_18 = FUNC_9(VAR_9);

  FUNC_2(VAR_4, (FUNC_6("cannot colocate function \"%s\" and table \"%s\"",
          VAR_17, VAR_18),
      FUNC_4("Citus currently only supports colocating function "
          "with distributed tables that are created using "
          "streaming replication model."),
      FUNC_5("When distributing tables make sure that "
        "citus.replication_model = 'streaming'")));
 }





 VAR_14 = VAR_13->vartype;
 if (VAR_14 != VAR_8)
 {
  Oid VAR_19 = VAR_5;
  CoercionPathType VAR_20 = VAR_1;

  VAR_20 =
   FUNC_7(VAR_8, VAR_14,
          VAR_0, &VAR_19);


  if (VAR_20 == VAR_1)
  {
   char *VAR_21 = FUNC_8(VAR_7);
   char *VAR_22 = FUNC_9(VAR_9);

   FUNC_2(VAR_4, (FUNC_6("cannot colocate function \"%s\" and table \"%s\" "
           "because distribution column types don't match and "
           "there is no coercion path", VAR_22,
           VAR_21)));
  }
 }
}
