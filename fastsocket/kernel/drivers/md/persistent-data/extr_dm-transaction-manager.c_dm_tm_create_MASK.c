
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dm_transaction_manager {scalar_t__ buckets; int lock; struct dm_space_map* sm; struct dm_block_manager* bm; int * real; scalar_t__ is_clone; } ;
struct dm_space_map {int dummy; } ;
struct dm_block_manager {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct dm_transaction_manager* FUNC_0 (int ) ;
 int VAR_2 ;
 int FUNC_1 (scalar_t__) ;
 struct dm_transaction_manager* FUNC_2 (int,int ) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static struct dm_transaction_manager *FUNC_4(struct dm_block_manager *VAR_3,
         struct dm_space_map *VAR_4)
{
 int VAR_5;
 struct dm_transaction_manager *VAR_6;

 VAR_6 = FUNC_2(sizeof(*VAR_6), VAR_2);
 if (!VAR_6)
  return FUNC_0(-VAR_1);

 VAR_6->is_clone = 0;
 VAR_6->real = ((void*)0);
 VAR_6->bm = VAR_3;
 VAR_6->sm = VAR_4;

 FUNC_3(&VAR_6->lock);
 for (VAR_5 = 0; VAR_5 < VAR_0; VAR_5++)
  FUNC_1(VAR_6->buckets + VAR_5);

 return VAR_6;
}
