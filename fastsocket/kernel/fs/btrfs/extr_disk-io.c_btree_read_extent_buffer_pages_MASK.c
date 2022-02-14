
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u64 ;
struct extent_io_tree {int dummy; } ;
struct extent_buffer {int read_mirror; int len; int start; int bflags; } ;
struct btrfs_root {TYPE_1__* fs_info; } ;
struct TYPE_4__ {struct extent_io_tree io_tree; } ;
struct TYPE_3__ {int mapping_tree; int btree_inode; } ;


 TYPE_2__* FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int *,int ,int ) ;
 int FUNC_2 (int ,int *) ;
 int FUNC_3 (struct extent_io_tree*,struct extent_buffer*,int ,int ,int ,int) ;
 int FUNC_4 (struct btrfs_root*,struct extent_buffer*,int) ;
 scalar_t__ FUNC_5 (int ,int *) ;
 int FUNC_6 (struct extent_io_tree*,struct extent_buffer*,int ,int ) ;

__attribute__((used)) static int FUNC_7(struct btrfs_root *VAR_3,
       struct extent_buffer *VAR_4,
       u64 VAR_5, u64 VAR_6)
{
 struct extent_io_tree *VAR_7;
 int VAR_8 = 0;
 int VAR_9;
 int VAR_10 = 0;
 int VAR_11 = 0;
 int VAR_12 = 0;

 FUNC_2(VAR_0, &VAR_4->bflags);
 VAR_7 = &FUNC_0(VAR_3->fs_info->btree_inode)->io_tree;
 while (1) {
  VAR_9 = FUNC_3(VAR_7, VAR_4, VAR_5,
            VAR_1,
            VAR_2, VAR_11);
  if (!VAR_9 && !FUNC_6(VAR_7, VAR_4,
         VAR_6, 0))
   break;






  if (FUNC_5(VAR_0, &VAR_4->bflags))
   break;

  VAR_10 = FUNC_1(&VAR_3->fs_info->mapping_tree,
           VAR_4->start, VAR_4->len);
  if (VAR_10 == 1)
   break;

  if (!VAR_12) {
   VAR_8 = 1;
   VAR_12 = VAR_4->read_mirror;
  }

  VAR_11++;
  if (VAR_11 == VAR_12)
   VAR_11++;

  if (VAR_11 > VAR_10)
   break;
 }

 if (VAR_8 && !VAR_9)
  FUNC_4(VAR_3, VAR_4, VAR_12);

 return VAR_9;
}
