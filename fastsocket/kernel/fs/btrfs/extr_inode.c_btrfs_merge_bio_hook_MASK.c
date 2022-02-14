
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u64 ;
struct page {TYPE_2__* mapping; } ;
struct btrfs_root {TYPE_1__* fs_info; } ;
struct btrfs_mapping_tree {int dummy; } ;
struct bio {int bi_size; scalar_t__ bi_sector; } ;
struct TYPE_6__ {struct btrfs_root* root; } ;
struct TYPE_5__ {int host; } ;
struct TYPE_4__ {struct btrfs_mapping_tree mapping_tree; } ;


 TYPE_3__* FUNC_0 (int ) ;
 int FUNC_1 (int) ;
 unsigned long VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (struct btrfs_mapping_tree*,int ,int,int*,int *,int ) ;

int FUNC_3(struct page *VAR_2, unsigned long VAR_3,
    size_t VAR_4, struct bio *VAR_5,
    unsigned long VAR_6)
{
 struct btrfs_root *VAR_7 = FUNC_0(VAR_2->mapping->host)->root;
 struct btrfs_mapping_tree *VAR_8;
 u64 VAR_9 = (u64)VAR_5->bi_sector << 9;
 u64 VAR_10 = 0;
 u64 VAR_11;
 int VAR_12;

 if (VAR_6 & VAR_0)
  return 0;

 VAR_10 = VAR_5->bi_size;
 VAR_8 = &VAR_7->fs_info->mapping_tree;
 VAR_11 = VAR_10;
 VAR_12 = FUNC_2(VAR_8, VAR_1, VAR_9,
         &VAR_11, ((void*)0), 0);

 FUNC_1(VAR_12 < 0);
 if (VAR_11 < VAR_10 + VAR_4)
  return 1;
 return 0;
}
