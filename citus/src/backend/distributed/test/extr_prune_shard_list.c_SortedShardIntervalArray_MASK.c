
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int shardIntervalArrayLength; TYPE_1__** sortedShardIntervalArray; } ;
struct TYPE_4__ {int shardId; } ;
typedef TYPE_1__ ShardInterval ;
typedef int Oid ;
typedef TYPE_2__ DistTableCacheEntry ;
typedef int Datum ;
typedef int ArrayType ;


 int * FUNC_0 (int *,int,int ) ;
 TYPE_2__* FUNC_1 (int ) ;
 int VAR_0 ;
 int FUNC_2 (int ) ;
 int * FUNC_3 (int) ;

__attribute__((used)) static ArrayType *
FUNC_4(Oid VAR_1)
{
 ArrayType *VAR_2 = ((void*)0);
 int VAR_3 = 0;
 Oid VAR_4 = VAR_0;

 DistTableCacheEntry *VAR_5 = FUNC_1(VAR_1);
 ShardInterval **VAR_6 = VAR_5->sortedShardIntervalArray;
 int VAR_7 = VAR_5->shardIntervalArrayLength;
 Datum *VAR_8 = FUNC_3(VAR_7 * sizeof(Datum));

 for (VAR_3 = 0; VAR_3 < VAR_7; ++VAR_3)
 {
  ShardInterval *VAR_9 = VAR_6[VAR_3];
  Datum VAR_10 = FUNC_2(VAR_9->shardId);

  VAR_8[VAR_3] = VAR_10;
 }

 VAR_2 = FUNC_0(VAR_8, VAR_7,
            VAR_4);

 return VAR_2;
}
