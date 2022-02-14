
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u64 ;
struct btrfs_root {TYPE_2__* fs_info; } ;
struct btrfs_mapping_tree {int dummy; } ;
struct btrfs_device {int dummy; } ;
struct btrfs_bio {int mirror_num; TYPE_1__* stripes; } ;
struct TYPE_4__ {struct btrfs_mapping_tree mapping_tree; } ;
struct TYPE_3__ {struct btrfs_device* dev; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 (struct btrfs_mapping_tree*,int ,int ,int *,struct btrfs_bio**,int) ;
 int FUNC_2 (struct btrfs_bio*) ;

struct btrfs_device *FUNC_3(struct btrfs_root *VAR_1,
         u64 VAR_2, int VAR_3)
{
 struct btrfs_mapping_tree *VAR_4 = &VAR_1->fs_info->mapping_tree;
 int VAR_5;
 u64 VAR_6 = 0;
 struct btrfs_bio *VAR_7 = ((void*)0);
 struct btrfs_device *VAR_8;

 FUNC_0(VAR_3 == 0);
 VAR_5 = FUNC_1(VAR_4, VAR_0, VAR_2, &VAR_6, &VAR_7,
         VAR_3);
 if (VAR_5) {
  FUNC_0(VAR_7 != ((void*)0));
  return ((void*)0);
 }
 FUNC_0(VAR_3 != VAR_7->mirror_num);
 VAR_8 = VAR_7->stripes[VAR_3 - 1].dev;
 FUNC_2(VAR_7);
 return VAR_8;
}
