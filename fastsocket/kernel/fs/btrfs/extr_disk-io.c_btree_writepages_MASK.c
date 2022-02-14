
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef unsigned long u64 ;
struct writeback_control {scalar_t__ sync_mode; scalar_t__ for_kupdate; } ;
struct extent_io_tree {int dummy; } ;
struct btrfs_root {TYPE_1__* fs_info; } ;
struct address_space {int host; } ;
struct TYPE_4__ {struct btrfs_root* root; struct extent_io_tree io_tree; } ;
struct TYPE_3__ {unsigned long dirty_metadata_bytes; } ;


 TYPE_2__* FUNC_0 (int ) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (struct address_space*,struct writeback_control*) ;

__attribute__((used)) static int FUNC_2(struct address_space *VAR_1,
       struct writeback_control *VAR_2)
{
 struct extent_io_tree *VAR_3;
 VAR_3 = &FUNC_0(VAR_1->host)->io_tree;
 if (VAR_2->sync_mode == VAR_0) {
  struct btrfs_root *VAR_4 = FUNC_0(VAR_1->host)->root;
  u64 VAR_5;
  unsigned long VAR_6 = 32 * 1024 * 1024;

  if (VAR_2->for_kupdate)
   return 0;


  VAR_5 = VAR_4->fs_info->dirty_metadata_bytes;
  if (VAR_5 < VAR_6)
   return 0;
 }
 return FUNC_1(VAR_1, VAR_2);
}
