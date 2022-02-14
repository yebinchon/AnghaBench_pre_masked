
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {char partitionMethod; } ;
struct TYPE_6__ {int minValue; int relationId; } ;
typedef TYPE_1__ ShardInterval ;
typedef int Oid ;
typedef TYPE_2__ DistTableCacheEntry ;
typedef int Datum ;


 char VAR_0 ;
 char VAR_1 ;
 TYPE_2__* FUNC_0 (int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int ,TYPE_2__*) ;
 int VAR_4 ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (char*) ;

int
FUNC_5(ShardInterval *VAR_5)
{
 int VAR_6 = VAR_4;
 Oid VAR_7 = VAR_5->relationId;
 Datum VAR_8 = VAR_5->minValue;

 DistTableCacheEntry *VAR_9 = FUNC_0(VAR_7);
 char VAR_10 = VAR_9->partitionMethod;





 if (VAR_10 != VAR_0 && VAR_10 != VAR_1)
 {
  FUNC_2(VAR_3, (FUNC_3(VAR_2),
      FUNC_4("finding index of a given shard is only supported for "
          "hash distributed and reference tables")));
 }


 if (VAR_10 == VAR_1)
 {

  VAR_6 = 0;

  return VAR_6;
 }

 VAR_6 = FUNC_1(VAR_8, VAR_9);

 return VAR_6;
}
