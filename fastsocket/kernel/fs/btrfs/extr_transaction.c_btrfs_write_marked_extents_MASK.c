
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u64 ;
struct extent_io_tree {int dummy; } ;
struct btrfs_root {TYPE_2__* fs_info; } ;
struct address_space {int dummy; } ;
struct TYPE_4__ {TYPE_1__* btree_inode; } ;
struct TYPE_3__ {struct address_space* i_mapping; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 () ;
 int FUNC_1 (struct extent_io_tree*,scalar_t__,scalar_t__,int ,int,int ) ;
 int FUNC_2 (struct address_space*,scalar_t__,scalar_t__) ;
 int FUNC_3 (struct extent_io_tree*,scalar_t__,scalar_t__*,scalar_t__*,int) ;

int FUNC_4(struct btrfs_root *VAR_2,
          struct extent_io_tree *VAR_3, int VAR_4)
{
 int VAR_5 = 0;
 int VAR_6 = 0;
 struct address_space *VAR_7 = VAR_2->fs_info->btree_inode->i_mapping;
 u64 VAR_8 = 0;
 u64 VAR_9;

 while (!FUNC_3(VAR_3, VAR_8, &VAR_8, &VAR_9,
          VAR_4)) {
  FUNC_1(VAR_3, VAR_8, VAR_9, VAR_0, VAR_4,
       VAR_1);
  VAR_5 = FUNC_2(VAR_7, VAR_8, VAR_9);
  if (VAR_5)
   VAR_6 = VAR_5;
  FUNC_0();
  VAR_8 = VAR_9 + 1;
 }
 if (VAR_5)
  VAR_6 = VAR_5;
 return VAR_6;
}
