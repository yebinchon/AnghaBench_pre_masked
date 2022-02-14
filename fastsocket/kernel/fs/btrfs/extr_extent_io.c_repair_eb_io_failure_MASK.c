
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
struct page {int dummy; } ;
struct extent_buffer {int len; int start; } ;
struct btrfs_root {TYPE_1__* fs_info; } ;
struct btrfs_mapping_tree {int dummy; } ;
struct TYPE_2__ {struct btrfs_mapping_tree mapping_tree; } ;


 scalar_t__ VAR_0 ;
 struct page* FUNC_0 (struct extent_buffer*,unsigned long) ;
 unsigned long FUNC_1 (int ,int ) ;
 int FUNC_2 (struct btrfs_mapping_tree*,int ,scalar_t__,int ,struct page*,int) ;

int FUNC_3(struct btrfs_root *VAR_1, struct extent_buffer *VAR_2,
    int VAR_3)
{
 struct btrfs_mapping_tree *VAR_4 = &VAR_1->fs_info->mapping_tree;
 u64 VAR_5 = VAR_2->start;
 unsigned long VAR_6, VAR_7 = FUNC_1(VAR_2->start, VAR_2->len);
 int VAR_8 = 0;

 for (VAR_6 = 0; VAR_6 < VAR_7; VAR_6++) {
  struct page *VAR_9 = FUNC_0(VAR_2, VAR_6);
  VAR_8 = FUNC_2(VAR_4, VAR_5, VAR_0,
     VAR_5, VAR_9, VAR_3);
  if (VAR_8)
   break;
  VAR_5 += VAR_0;
 }

 return VAR_8;
}
