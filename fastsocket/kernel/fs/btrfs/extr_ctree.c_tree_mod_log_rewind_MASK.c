
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
struct tree_mod_elem {scalar_t__ op; scalar_t__ slot; } ;
struct extent_buffer {int start; } ;
struct btrfs_fs_info {TYPE_1__* tree_root; } ;
struct TYPE_2__ {int nodesize; } ;


 int FUNC_0 (int) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (struct extent_buffer*,int ,struct tree_mod_elem*) ;
 struct extent_buffer* FUNC_2 (int ,int ) ;
 struct extent_buffer* FUNC_3 (struct extent_buffer*) ;
 int FUNC_4 (struct extent_buffer*) ;
 scalar_t__ FUNC_5 (struct extent_buffer*) ;
 int FUNC_6 (struct extent_buffer*) ;
 int FUNC_7 (struct extent_buffer*,int ) ;
 int FUNC_8 (struct extent_buffer*,int ) ;
 int FUNC_9 (struct extent_buffer*,scalar_t__) ;
 int FUNC_10 (struct extent_buffer*,int ) ;
 int FUNC_11 (struct extent_buffer*) ;
 int FUNC_12 (struct extent_buffer*) ;
 struct tree_mod_elem* FUNC_13 (struct btrfs_fs_info*,int ,int ) ;

__attribute__((used)) static struct extent_buffer *
FUNC_14(struct btrfs_fs_info *VAR_1, struct extent_buffer *VAR_2,
      u64 VAR_3)
{
 struct extent_buffer *VAR_4;
 struct tree_mod_elem *VAR_5;

 if (!VAR_3)
  return VAR_2;

 if (FUNC_5(VAR_2) == 0)
  return VAR_2;

 VAR_5 = FUNC_13(VAR_1, VAR_2->start, VAR_3);
 if (!VAR_5)
  return VAR_2;

 if (VAR_5->op == VAR_0) {
  FUNC_0(VAR_5->slot != 0);
  VAR_4 = FUNC_2(VAR_2->start,
      VAR_1->tree_root->nodesize);
  FUNC_0(!VAR_4);
  FUNC_8(VAR_4, VAR_2->start);
  FUNC_7(VAR_4,
          FUNC_4(VAR_2));
  FUNC_10(VAR_4, FUNC_6(VAR_2));
  FUNC_9(VAR_4, FUNC_5(VAR_2));
 } else {
  VAR_4 = FUNC_3(VAR_2);
  FUNC_0(!VAR_4);
 }

 FUNC_11(VAR_4);
 FUNC_12(VAR_2);

 FUNC_1(VAR_4, VAR_3, VAR_5);

 return VAR_4;
}
