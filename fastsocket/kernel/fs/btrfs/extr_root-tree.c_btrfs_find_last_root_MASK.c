
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u64 ;
struct extent_buffer {int dummy; } ;
struct btrfs_root_item {int dummy; } ;
struct btrfs_root {int dummy; } ;
struct btrfs_path {int* slots; struct extent_buffer** nodes; } ;
struct btrfs_key {scalar_t__ objectid; scalar_t__ type; scalar_t__ offset; } ;
typedef int found_key ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int) ;
 int VAR_1 ;
 struct btrfs_path* FUNC_1 () ;
 int FUNC_2 (struct btrfs_path*) ;
 int FUNC_3 (struct extent_buffer*,struct btrfs_key*,int) ;
 int FUNC_4 (struct extent_buffer*,int) ;
 int FUNC_5 (int *,struct btrfs_root*,struct btrfs_key*,struct btrfs_path*,int ,int ) ;
 int FUNC_6 (struct btrfs_key*,struct btrfs_key*,int) ;
 int FUNC_7 (struct extent_buffer*,struct btrfs_root_item*,int ,int) ;

int FUNC_8(struct btrfs_root *VAR_2, u64 VAR_3,
   struct btrfs_root_item *VAR_4, struct btrfs_key *VAR_5)
{
 struct btrfs_path *VAR_6;
 struct btrfs_key VAR_7;
 struct btrfs_key VAR_8;
 struct extent_buffer *VAR_9;
 int VAR_10;
 int VAR_11;

 VAR_7.objectid = VAR_3;
 VAR_7.type = VAR_0;
 VAR_7.offset = (u64)-1;

 VAR_6 = FUNC_1();
 if (!VAR_6)
  return -VAR_1;
 VAR_10 = FUNC_5(((void*)0), VAR_2, &VAR_7, VAR_6, 0, 0);
 if (VAR_10 < 0)
  goto out;

 FUNC_0(VAR_10 == 0);
 if (VAR_6->slots[0] == 0) {
  VAR_10 = 1;
  goto out;
 }
 VAR_9 = VAR_6->nodes[0];
 VAR_11 = VAR_6->slots[0] - 1;
 FUNC_3(VAR_9, &VAR_8, VAR_11);
 if (VAR_8.objectid != VAR_3 ||
     VAR_8.type != VAR_0) {
  VAR_10 = 1;
  goto out;
 }
 if (VAR_4)
  FUNC_7(VAR_9, VAR_4, FUNC_4(VAR_9, VAR_11),
       sizeof(*VAR_4));
 if (VAR_5)
  FUNC_6(VAR_5, &VAR_8, sizeof(VAR_8));
 VAR_10 = 0;
out:
 FUNC_2(VAR_6);
 return VAR_10;
}
