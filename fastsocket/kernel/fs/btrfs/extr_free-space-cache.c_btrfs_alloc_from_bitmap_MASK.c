
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct btrfs_free_space_ctl {int dummy; } ;
struct btrfs_free_space {int dummy; } ;
struct btrfs_free_cluster {int window_start; } ;
struct btrfs_block_group_cache {struct btrfs_free_space_ctl* free_space_ctl; } ;


 int FUNC_0 (struct btrfs_free_space_ctl*,struct btrfs_free_space*,int ,int ) ;
 int FUNC_1 (struct btrfs_free_space_ctl*,struct btrfs_free_space*,int *,int *) ;

__attribute__((used)) static u64 FUNC_2(struct btrfs_block_group_cache *VAR_0,
       struct btrfs_free_cluster *VAR_1,
       struct btrfs_free_space *VAR_2,
       u64 VAR_3, u64 VAR_4)
{
 struct btrfs_free_space_ctl *VAR_5 = VAR_0->free_space_ctl;
 int VAR_6;
 u64 VAR_7 = VAR_1->window_start;
 u64 VAR_8 = VAR_3;
 u64 VAR_9 = 0;

 VAR_7 = VAR_4;
 VAR_8 = VAR_3;

 VAR_6 = FUNC_1(VAR_5, VAR_2, &VAR_7, &VAR_8);
 if (VAR_6)
  return 0;

 VAR_9 = VAR_7;
 FUNC_0(VAR_5, VAR_2, VAR_9, VAR_3);

 return VAR_9;
}
