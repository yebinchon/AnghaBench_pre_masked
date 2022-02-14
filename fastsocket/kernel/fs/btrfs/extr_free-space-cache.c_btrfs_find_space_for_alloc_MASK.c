
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u64 ;
struct btrfs_free_space_ctl {int tree_lock; } ;
struct btrfs_free_space {scalar_t__ bytes; scalar_t__ offset; scalar_t__ bitmap; } ;
struct btrfs_block_group_cache {struct btrfs_free_space_ctl* free_space_ctl; } ;


 int FUNC_0 (struct btrfs_free_space_ctl*,struct btrfs_free_space*,scalar_t__,scalar_t__) ;
 int VAR_0 ;
 struct btrfs_free_space* FUNC_1 (struct btrfs_free_space_ctl*,scalar_t__*,scalar_t__*) ;
 int FUNC_2 (struct btrfs_free_space_ctl*,struct btrfs_free_space*) ;
 int FUNC_3 (int ,struct btrfs_free_space*) ;
 int FUNC_4 (struct btrfs_free_space_ctl*,struct btrfs_free_space*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (struct btrfs_free_space_ctl*,struct btrfs_free_space*) ;

u64 FUNC_8(struct btrfs_block_group_cache *VAR_1,
          u64 VAR_2, u64 VAR_3, u64 VAR_4)
{
 struct btrfs_free_space_ctl *VAR_5 = VAR_1->free_space_ctl;
 struct btrfs_free_space *VAR_6 = ((void*)0);
 u64 VAR_7 = VAR_3 + VAR_4;
 u64 VAR_8 = 0;

 FUNC_5(&VAR_5->tree_lock);
 VAR_6 = FUNC_1(VAR_5, &VAR_2, &VAR_7);
 if (!VAR_6)
  goto out;

 VAR_8 = VAR_2;
 if (VAR_6->bitmap) {
  FUNC_0(VAR_5, VAR_6, VAR_2, VAR_3);
  if (!VAR_6->bytes)
   FUNC_2(VAR_5, VAR_6);
 } else {
  FUNC_7(VAR_5, VAR_6);
  VAR_6->offset += VAR_3;
  VAR_6->bytes -= VAR_3;
  if (!VAR_6->bytes)
   FUNC_3(VAR_0, VAR_6);
  else
   FUNC_4(VAR_5, VAR_6);
 }

out:
 FUNC_6(&VAR_5->tree_lock);

 return VAR_8;
}
