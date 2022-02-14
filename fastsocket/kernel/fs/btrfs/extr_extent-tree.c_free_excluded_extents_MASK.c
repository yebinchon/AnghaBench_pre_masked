
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u64 ;
struct btrfs_root {TYPE_2__* fs_info; } ;
struct TYPE_3__ {scalar_t__ offset; scalar_t__ objectid; } ;
struct btrfs_block_group_cache {TYPE_1__ key; } ;
struct TYPE_4__ {int * freed_extents; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,scalar_t__,scalar_t__,int ,int ) ;

__attribute__((used)) static void FUNC_1(struct btrfs_root *VAR_2,
      struct btrfs_block_group_cache *VAR_3)
{
 u64 VAR_4, VAR_5;

 VAR_4 = VAR_3->key.objectid;
 VAR_5 = VAR_4 + VAR_3->key.offset - 1;

 FUNC_0(&VAR_2->fs_info->freed_extents[0],
     VAR_4, VAR_5, VAR_0, VAR_1);
 FUNC_0(&VAR_2->fs_info->freed_extents[1],
     VAR_4, VAR_5, VAR_0, VAR_1);
}
