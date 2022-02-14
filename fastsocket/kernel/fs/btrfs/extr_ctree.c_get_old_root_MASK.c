
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
struct tree_mod_root {int level; int logical; } ;
struct tree_mod_elem {scalar_t__ op; int generation; struct tree_mod_root old_root; } ;
struct extent_buffer {int start; } ;
struct TYPE_2__ {int objectid; } ;
struct btrfs_root {TYPE_1__ root_key; struct extent_buffer* node; int nodesize; int fs_info; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int) ;
 struct tree_mod_elem* FUNC_1 (int ,struct btrfs_root*,int ) ;
 int FUNC_2 (struct extent_buffer*,int ,struct tree_mod_elem*) ;
 struct extent_buffer* FUNC_3 (int ,int ) ;
 struct extent_buffer* FUNC_4 (struct extent_buffer*) ;
 scalar_t__ FUNC_5 (struct extent_buffer*) ;
 struct extent_buffer* FUNC_6 (struct btrfs_root*) ;
 int FUNC_7 (struct extent_buffer*,int ) ;
 int FUNC_8 (struct extent_buffer*,int ) ;
 int FUNC_9 (struct extent_buffer*,int ) ;
 int FUNC_10 (struct extent_buffer*,int ) ;
 int FUNC_11 (struct extent_buffer*,int ) ;
 int FUNC_12 (struct extent_buffer*) ;
 int FUNC_13 (struct extent_buffer*) ;
 int FUNC_14 (struct extent_buffer*) ;
 int FUNC_15 (struct extent_buffer*) ;
 struct tree_mod_elem* FUNC_16 (int ,int ,int ) ;

__attribute__((used)) static inline struct extent_buffer *
FUNC_17(struct btrfs_root *VAR_2, u64 VAR_3)
{
 struct tree_mod_elem *VAR_4;
 struct extent_buffer *VAR_5;
 struct tree_mod_root *VAR_6 = ((void*)0);
 u64 VAR_7 = 0;
 u64 VAR_8;

 VAR_5 = FUNC_6(VAR_2);
 VAR_4 = FUNC_1(VAR_2->fs_info, VAR_2, VAR_3);
 if (!VAR_4)
  return VAR_2->node;

 if (VAR_4->op == VAR_1) {
  VAR_6 = &VAR_4->old_root;
  VAR_7 = VAR_4->generation;
  VAR_8 = VAR_6->logical;
 } else {
  VAR_8 = VAR_2->node->start;
 }

 VAR_4 = FUNC_16(VAR_2->fs_info, VAR_8, VAR_3);
 if (VAR_6)
  VAR_5 = FUNC_3(VAR_8, VAR_2->nodesize);
 else
  VAR_5 = FUNC_4(VAR_2->node);
 FUNC_13(VAR_2->node);
 FUNC_15(VAR_2->node);
 if (!VAR_5)
  return ((void*)0);
 FUNC_12(VAR_5);
 if (VAR_6) {
  FUNC_8(VAR_5, VAR_5->start);
  FUNC_7(VAR_5, VAR_0);
  FUNC_11(VAR_5, VAR_2->root_key.objectid);
  FUNC_10(VAR_5, VAR_6->level);
  FUNC_9(VAR_5, VAR_7);
 }
 if (VAR_4)
  FUNC_2(VAR_5, VAR_3, VAR_4);
 else
  FUNC_0(FUNC_5(VAR_5) != 0);
 FUNC_14(VAR_5);

 return VAR_5;
}
