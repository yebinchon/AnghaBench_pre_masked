
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct extent_buffer {int dummy; } ;
struct btrfs_trans_handle {int dummy; } ;
struct btrfs_root {int dummy; } ;
struct btrfs_path {int* slots; struct extent_buffer** nodes; } ;
struct btrfs_key {int dummy; } ;
struct btrfs_disk_key {int dummy; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (struct btrfs_disk_key*,struct btrfs_key*) ;
 int FUNC_2 (struct extent_buffer*) ;
 int FUNC_3 (struct extent_buffer*,struct btrfs_disk_key*,int) ;
 int FUNC_4 (struct extent_buffer*) ;
 int FUNC_5 (struct extent_buffer*,struct btrfs_disk_key*,int) ;
 scalar_t__ FUNC_6 (struct btrfs_disk_key*,struct btrfs_key*) ;
 int FUNC_7 (struct btrfs_trans_handle*,struct btrfs_root*,struct btrfs_path*,struct btrfs_disk_key*,int) ;

void FUNC_8(struct btrfs_trans_handle *VAR_0,
        struct btrfs_root *VAR_1, struct btrfs_path *VAR_2,
        struct btrfs_key *VAR_3)
{
 struct btrfs_disk_key VAR_4;
 struct extent_buffer *VAR_5;
 int VAR_6;

 VAR_5 = VAR_2->nodes[0];
 VAR_6 = VAR_2->slots[0];
 if (VAR_6 > 0) {
  FUNC_3(VAR_5, &VAR_4, VAR_6 - 1);
  FUNC_0(FUNC_6(&VAR_4, VAR_3) >= 0);
 }
 if (VAR_6 < FUNC_2(VAR_5) - 1) {
  FUNC_3(VAR_5, &VAR_4, VAR_6 + 1);
  FUNC_0(FUNC_6(&VAR_4, VAR_3) <= 0);
 }

 FUNC_1(&VAR_4, VAR_3);
 FUNC_5(VAR_5, &VAR_4, VAR_6);
 FUNC_4(VAR_5);
 if (VAR_6 == 0)
  FUNC_7(VAR_0, VAR_1, VAR_2, &VAR_4, 1);
}
