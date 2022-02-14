
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct extent_buffer {int dummy; } ;
struct btrfs_trans_handle {int dummy; } ;
struct btrfs_root {struct extent_buffer* node; int fs_info; } ;
struct btrfs_path {struct extent_buffer** nodes; } ;
struct btrfs_key_ptr {int dummy; } ;
struct btrfs_disk_key {int dummy; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 (struct extent_buffer*) ;
 int FUNC_2 (struct extent_buffer*) ;
 int FUNC_3 (struct extent_buffer*) ;
 int FUNC_4 (struct extent_buffer*,struct btrfs_disk_key*,int ) ;
 int FUNC_5 (int) ;
 int FUNC_6 (struct extent_buffer*,int ) ;
 int FUNC_7 (struct extent_buffer*,int) ;
 int FUNC_8 (struct btrfs_trans_handle*,struct btrfs_root*,struct btrfs_path*,struct btrfs_disk_key*,int) ;
 int FUNC_9 (struct extent_buffer*,int ,int ,int) ;
 int FUNC_10 (int ,struct extent_buffer*,int,int,int) ;
 int FUNC_11 (int ,struct extent_buffer*,int,int ) ;

__attribute__((used)) static void FUNC_12(struct btrfs_trans_handle *VAR_1, struct btrfs_root *VAR_2,
      struct btrfs_path *VAR_3, int VAR_4, int VAR_5,
      int VAR_6)
{
 struct extent_buffer *VAR_7 = VAR_3->nodes[VAR_4];
 u32 VAR_8;
 int VAR_9;

 VAR_8 = FUNC_2(VAR_7);
 if (VAR_5 != VAR_8 - 1) {
  if (VAR_6 && VAR_4)
   FUNC_10(VAR_2->fs_info, VAR_7, VAR_5,
          VAR_5 + 1, VAR_8 - VAR_5 - 1);
  FUNC_9(VAR_7,
         FUNC_5(VAR_5),
         FUNC_5(VAR_5 + 1),
         sizeof(struct btrfs_key_ptr) *
         (VAR_8 - VAR_5 - 1));
 } else if (VAR_6 && VAR_4) {
  VAR_9 = FUNC_11(VAR_2->fs_info, VAR_7, VAR_5,
           VAR_0);
  FUNC_0(VAR_9 < 0);
 }

 VAR_8--;
 FUNC_7(VAR_7, VAR_8);
 if (VAR_8 == 0 && VAR_7 == VAR_2->node) {
  FUNC_0(FUNC_1(VAR_2->node) != 1);

  FUNC_6(VAR_2->node, 0);
 } else if (VAR_5 == 0) {
  struct btrfs_disk_key VAR_10;

  FUNC_4(VAR_7, &VAR_10, 0);
  FUNC_8(VAR_1, VAR_2, VAR_3, &VAR_10, VAR_4 + 1);
 }
 FUNC_3(VAR_7);
}
