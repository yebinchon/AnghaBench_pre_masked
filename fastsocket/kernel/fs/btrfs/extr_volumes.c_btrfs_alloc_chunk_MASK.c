
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
struct map_lookup {int dummy; } ;
struct btrfs_trans_handle {int dummy; } ;
struct btrfs_root {TYPE_1__* fs_info; } ;
struct TYPE_2__ {struct btrfs_root* chunk_root; } ;


 int VAR_0 ;
 int FUNC_0 (struct btrfs_trans_handle*,struct btrfs_root*,struct map_lookup**,int *,int *,int ,int ) ;
 int FUNC_1 (struct btrfs_trans_handle*,struct btrfs_root*,struct map_lookup*,int ,int ,int ) ;
 int FUNC_2 (struct btrfs_root*,int ,int *) ;

int FUNC_3(struct btrfs_trans_handle *VAR_1,
        struct btrfs_root *VAR_2, u64 VAR_3)
{
 u64 VAR_4;
 u64 VAR_5;
 u64 VAR_6;
 struct map_lookup *VAR_7;
 struct btrfs_root *VAR_8 = VAR_2->fs_info->chunk_root;
 int VAR_9;

 VAR_9 = FUNC_2(VAR_8, VAR_0,
         &VAR_4);
 if (VAR_9)
  return VAR_9;

 VAR_9 = FUNC_0(VAR_1, VAR_2, &VAR_7, &VAR_5,
      &VAR_6, VAR_4, VAR_3);
 if (VAR_9)
  return VAR_9;

 VAR_9 = FUNC_1(VAR_1, VAR_2, VAR_7, VAR_4,
       VAR_5, VAR_6);
 if (VAR_9)
  return VAR_9;
 return 0;
}
