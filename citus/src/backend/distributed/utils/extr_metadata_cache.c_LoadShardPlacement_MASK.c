
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64 ;
typedef int ShardPlacement ;
typedef int ShardCacheEntry ;
typedef int GroupShardPlacement ;


 int * FUNC_0 (int ,int ) ;
 int * FUNC_1 (int ) ;
 int * FUNC_2 (int *,int *) ;

ShardPlacement *
FUNC_3(uint64 VAR_0, uint64 VAR_1)
{
 ShardCacheEntry *VAR_2 = ((void*)0);
 GroupShardPlacement *VAR_3 = ((void*)0);
 ShardPlacement *VAR_4 = ((void*)0);

 VAR_2 = FUNC_1(VAR_0);
 VAR_3 = FUNC_0(VAR_0, VAR_1);
 VAR_4 = FUNC_2(VAR_3, VAR_2);

 return VAR_4;
}
