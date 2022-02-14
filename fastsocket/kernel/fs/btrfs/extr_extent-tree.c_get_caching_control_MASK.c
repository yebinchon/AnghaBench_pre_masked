
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct btrfs_caching_control {int count; } ;
struct btrfs_block_group_cache {scalar_t__ cached; int lock; struct btrfs_caching_control* caching_ctl; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static struct btrfs_caching_control *
FUNC_3(struct btrfs_block_group_cache *VAR_1)
{
 struct btrfs_caching_control *VAR_2;

 FUNC_1(&VAR_1->lock);
 if (VAR_1->cached != VAR_0) {
  FUNC_2(&VAR_1->lock);
  return ((void*)0);
 }


 if (!VAR_1->caching_ctl) {
  FUNC_2(&VAR_1->lock);
  return ((void*)0);
 }

 VAR_2 = VAR_1->caching_ctl;
 FUNC_0(&VAR_2->count);
 FUNC_2(&VAR_1->lock);
 return VAR_2;
}
