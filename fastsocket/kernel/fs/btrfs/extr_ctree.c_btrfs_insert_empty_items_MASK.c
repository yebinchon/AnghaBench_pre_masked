
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct btrfs_trans_handle {int dummy; } ;
struct btrfs_root {int dummy; } ;
struct btrfs_path {int* slots; } ;
struct btrfs_key {int dummy; } ;
struct btrfs_item {int dummy; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 (struct btrfs_trans_handle*,struct btrfs_root*,struct btrfs_key*,struct btrfs_path*,scalar_t__,int) ;
 int FUNC_2 (struct btrfs_trans_handle*,struct btrfs_root*,struct btrfs_path*,struct btrfs_key*,scalar_t__*,scalar_t__,scalar_t__,int) ;

int FUNC_3(struct btrfs_trans_handle *VAR_1,
       struct btrfs_root *VAR_2,
       struct btrfs_path *VAR_3,
       struct btrfs_key *VAR_4, u32 *VAR_5,
       int VAR_6)
{
 int VAR_7 = 0;
 int VAR_8;
 int VAR_9;
 u32 VAR_10 = 0;
 u32 VAR_11 = 0;

 for (VAR_9 = 0; VAR_9 < VAR_6; VAR_9++)
  VAR_11 += VAR_5[VAR_9];

 VAR_10 = VAR_11 + (VAR_6 * sizeof(struct btrfs_item));
 VAR_7 = FUNC_1(VAR_1, VAR_2, VAR_4, VAR_3, VAR_10, 1);
 if (VAR_7 == 0)
  return -VAR_0;
 if (VAR_7 < 0)
  return VAR_7;

 VAR_8 = VAR_3->slots[0];
 FUNC_0(VAR_8 < 0);

 FUNC_2(VAR_1, VAR_2, VAR_3, VAR_4, VAR_5,
          VAR_11, VAR_10, VAR_6);
 return 0;
}
