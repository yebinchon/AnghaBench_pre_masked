
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int shardIntervalArrayLength; int relationId; } ;
typedef int Oid ;
typedef TYPE_1__ DistTableCacheEntry ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (char*,char*) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (char*) ;
 char* FUNC_5 (int ) ;

__attribute__((used)) static void
FUNC_6(DistTableCacheEntry *VAR_2)
{
 int VAR_3 = VAR_2->shardIntervalArrayLength;
 if (VAR_3 == 0)
 {
  Oid VAR_4 = VAR_2->relationId;
  char *VAR_5 = FUNC_5(VAR_4);

  FUNC_0(VAR_1, (FUNC_1(VAR_0),
      FUNC_4("could not find any shards"),
      FUNC_2("No shards exist for distributed table \"%s\".",
          VAR_5),
      FUNC_3("Run master_create_worker_shards to create shards "
        "and try again.")));
 }
}
