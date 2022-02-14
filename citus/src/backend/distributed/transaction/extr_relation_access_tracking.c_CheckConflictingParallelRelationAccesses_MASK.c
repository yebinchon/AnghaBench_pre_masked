
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ partitionMethod; scalar_t__ referencedRelationsViaForeignKey; } ;
typedef int ShardPlacementAccessType ;
typedef int Oid ;
typedef TYPE_1__ DistTableCacheEntry ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 TYPE_1__* FUNC_0 (int ) ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_1 (int ,int ,int *,int *) ;
 int VAR_4 ;
 int FUNC_2 (int ) ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 scalar_t__ FUNC_3 () ;
 char* FUNC_4 (int ) ;
 int FUNC_5 () ;
 int FUNC_6 (int ,int ) ;
 int FUNC_7 (char*,...) ;
 int FUNC_8 (char*) ;
 int FUNC_9 (char*,...) ;
 char* FUNC_10 (int ) ;

__attribute__((used)) static void
FUNC_11(Oid VAR_9, ShardPlacementAccessType
           VAR_10)
{
 DistTableCacheEntry *VAR_11 = ((void*)0);
 Oid VAR_12 = VAR_4;
 ShardPlacementAccessType VAR_13 = VAR_8;

 if (!VAR_3 || !FUNC_2(VAR_9))
 {
  return;
 }

 VAR_11 = FUNC_0(VAR_9);
 if (!(VAR_11->partitionMethod == VAR_1 &&
    VAR_11->referencedRelationsViaForeignKey != VAR_6))
 {
  return;
 }

 if (VAR_5 == VAR_7 &&
  FUNC_1(VAR_9, VAR_10,
             &VAR_12,
             &VAR_13))
 {
  char *VAR_14 = FUNC_10(VAR_9);
  char *VAR_15 = FUNC_10(VAR_12);

  char *VAR_16 = FUNC_4(VAR_10);
  char *VAR_17 =
   FUNC_4(VAR_13);

  if (FUNC_3())
  {





   FUNC_6(VAR_2, (FUNC_9("cannot execute parallel %s on relation \"%s\" "
           "after %s command on reference relation "
           "\"%s\" because there is a foreign key between "
           "them and \"%s\" has been accessed in this transaction",
           VAR_16, VAR_14,
           VAR_17, VAR_15,
           VAR_15),
       FUNC_7("When there is a foreign key to a reference "
           "table, Citus needs to perform all operations "
           "over a single connection per node to ensure "
           "consistency."),
       FUNC_8("Try re-running the transaction with "
         "\"SET LOCAL citus.multi_shard_modify_mode TO "
         "\'sequential\';\"")));
  }
  else
  {
   FUNC_6(VAR_0, (FUNC_9("switching to sequential query execution mode"),
        FUNC_7("cannot execute parallel %s on relation \"%s\" "
            "after %s command on reference relation "
            "\"%s\" because there is a foreign key between "
            "them and \"%s\" has been accessed in this transaction",
            VAR_16, VAR_14,
            VAR_17, VAR_15,
            VAR_15)));

   FUNC_5();
  }
 }
}
