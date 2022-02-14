
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u64 ;
typedef scalar_t__ u32 ;
struct extent_buffer {int dummy; } ;
struct btrfs_root {int dummy; } ;
struct btrfs_path {scalar_t__* slots; struct extent_buffer** nodes; } ;
struct btrfs_key {scalar_t__ objectid; int type; } ;


 scalar_t__ FUNC_0 (struct extent_buffer*) ;
 int FUNC_1 (struct extent_buffer*,struct btrfs_key*,scalar_t__) ;
 int FUNC_2 (struct btrfs_root*,struct btrfs_path*) ;
 int FUNC_3 (struct btrfs_path*) ;

int FUNC_4(struct btrfs_root *VAR_0,
   struct btrfs_path *VAR_1, u64 VAR_2,
   int VAR_3)
{
 struct btrfs_key VAR_4;
 struct extent_buffer *VAR_5;
 u32 VAR_6;
 int VAR_7;

 while (1) {
  if (VAR_1->slots[0] == 0) {
   FUNC_3(VAR_1);
   VAR_7 = FUNC_2(VAR_0, VAR_1);
   if (VAR_7 != 0)
    return VAR_7;
  } else {
   VAR_1->slots[0]--;
  }
  VAR_5 = VAR_1->nodes[0];
  VAR_6 = FUNC_0(VAR_5);
  if (VAR_6 == 0)
   return 1;
  if (VAR_1->slots[0] == VAR_6)
   VAR_1->slots[0]--;

  FUNC_1(VAR_5, &VAR_4, VAR_1->slots[0]);
  if (VAR_4.objectid < VAR_2)
   break;
  if (VAR_4.type == VAR_3)
   return 0;
  if (VAR_4.objectid == VAR_2 &&
      VAR_4.type < VAR_3)
   break;
 }
 return 1;
}
