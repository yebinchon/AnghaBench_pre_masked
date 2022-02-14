
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


 char VAR_0 ;
 TYPE_1__* FUNC_0 (scalar_t__) ;
 TYPE_2__* FUNC_1 (scalar_t__) ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (char*,...) ;
 int FUNC_5 (char*,...) ;
 char* FUNC_6 (scalar_t__) ;

__attribute__((used)) static void
FUNC_7(Oid VAR_4, char VAR_5,
         Oid VAR_6, Oid VAR_7)
{
 DistTableCacheEntry *VAR_8 = FUNC_1(VAR_7);
 char VAR_9 = VAR_8->partitionMethod;
 char VAR_10 = VAR_8->replicationModel;
 Var *VAR_11 = FUNC_0(VAR_7);
 Oid VAR_12 = VAR_3;

 if (VAR_9 != VAR_0)
 {
  FUNC_2(VAR_2, (FUNC_3(VAR_1),
      FUNC_5("cannot distribute relation"),
      FUNC_4("Currently, colocate_with option is only supported "
          "for hash distributed tables.")));
 }

 if (VAR_10 != VAR_5)
 {
  char *VAR_13 = FUNC_6(VAR_4);
  char *VAR_14 = FUNC_6(VAR_7);

  FUNC_2(VAR_2, (FUNC_5("cannot colocate tables %s and %s",
          VAR_14, VAR_13),
      FUNC_4("Replication models don't match for %s and %s.",
          VAR_14, VAR_13)));
 }

 VAR_12 = VAR_11->vartype;
 if (VAR_12 != VAR_6)
 {
  char *VAR_15 = FUNC_6(VAR_4);
  char *VAR_16 = FUNC_6(VAR_7);

  FUNC_2(VAR_2, (FUNC_5("cannot colocate tables %s and %s",
          VAR_16, VAR_15),
      FUNC_4("Distribution column types don't match for "
          "%s and %s.", VAR_16,
          VAR_15)));
 }
}
