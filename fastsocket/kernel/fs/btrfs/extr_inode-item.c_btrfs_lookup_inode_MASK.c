
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u64 ;
struct extent_buffer {int dummy; } ;
struct btrfs_trans_handle {int dummy; } ;
struct btrfs_root {int dummy; } ;
struct btrfs_path {int* slots; struct extent_buffer** nodes; } ;
struct btrfs_key {scalar_t__ offset; scalar_t__ objectid; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct extent_buffer*,struct btrfs_key*,int) ;
 scalar_t__ FUNC_1 (struct btrfs_key*) ;
 int FUNC_2 (struct btrfs_trans_handle*,struct btrfs_root*,struct btrfs_key*,struct btrfs_path*,int,int) ;

int FUNC_3(struct btrfs_trans_handle *VAR_1, struct btrfs_root
         *VAR_2, struct btrfs_path *VAR_3,
         struct btrfs_key *VAR_4, int VAR_5)
{
 int VAR_6 = VAR_5 < 0 ? -1 : 0;
 int VAR_7 = VAR_5 != 0;
 int VAR_8;
 int VAR_9;
 struct extent_buffer *VAR_10;
 struct btrfs_key VAR_11;

 VAR_8 = FUNC_2(VAR_1, VAR_2, VAR_4, VAR_3, VAR_6, VAR_7);
 if (VAR_8 > 0 && FUNC_1(VAR_4) == VAR_0 &&
     VAR_4->offset == (u64)-1 && VAR_3->slots[0] != 0) {
  VAR_9 = VAR_3->slots[0] - 1;
  VAR_10 = VAR_3->nodes[0];
  FUNC_0(VAR_10, &VAR_11, VAR_9);
  if (VAR_11.objectid == VAR_4->objectid &&
      FUNC_1(&VAR_11) == FUNC_1(VAR_4)) {
   VAR_3->slots[0]--;
   return 0;
  }
 }
 return VAR_8;
}
