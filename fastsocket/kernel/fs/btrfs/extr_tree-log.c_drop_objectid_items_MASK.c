
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u64 ;
struct btrfs_trans_handle {int dummy; } ;
struct btrfs_root {int dummy; } ;
struct btrfs_path {scalar_t__* slots; int * nodes; } ;
struct btrfs_key {scalar_t__ objectid; int type; scalar_t__ offset; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (struct btrfs_trans_handle*,struct btrfs_root*,struct btrfs_path*) ;
 int FUNC_2 (int ,struct btrfs_key*,scalar_t__) ;
 int FUNC_3 (struct btrfs_path*) ;
 int FUNC_4 (struct btrfs_trans_handle*,struct btrfs_root*,struct btrfs_key*,struct btrfs_path*,int,int) ;

__attribute__((used)) static int FUNC_5(struct btrfs_trans_handle *VAR_0,
      struct btrfs_root *VAR_1,
      struct btrfs_path *VAR_2,
      u64 VAR_3, int VAR_4)
{
 int VAR_5;
 struct btrfs_key VAR_6;
 struct btrfs_key VAR_7;

 VAR_6.objectid = VAR_3;
 VAR_6.type = VAR_4;
 VAR_6.offset = (u64)-1;

 while (1) {
  VAR_5 = FUNC_4(VAR_0, VAR_1, &VAR_6, VAR_2, -1, 1);
  FUNC_0(VAR_5 == 0);
  if (VAR_5 < 0)
   break;

  if (VAR_2->slots[0] == 0)
   break;

  VAR_2->slots[0]--;
  FUNC_2(VAR_2->nodes[0], &VAR_7,
          VAR_2->slots[0]);

  if (VAR_7.objectid != VAR_3)
   break;

  VAR_5 = FUNC_1(VAR_0, VAR_1, VAR_2);
  if (VAR_5)
   break;
  FUNC_3(VAR_2);
 }
 FUNC_3(VAR_2);
 if (VAR_5 > 0)
  VAR_5 = 0;
 return VAR_5;
}
