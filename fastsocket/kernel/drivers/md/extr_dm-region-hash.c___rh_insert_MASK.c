
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dm_region_hash {scalar_t__ buckets; } ;
struct dm_region {int key; int hash_list; } ;


 int FUNC_0 (int *,scalar_t__) ;
 scalar_t__ FUNC_1 (struct dm_region_hash*,int ) ;

__attribute__((used)) static void FUNC_2(struct dm_region_hash *VAR_0, struct dm_region *VAR_1)
{
 FUNC_0(&VAR_1->hash_list, VAR_0->buckets + FUNC_1(VAR_0, VAR_1->key));
}
