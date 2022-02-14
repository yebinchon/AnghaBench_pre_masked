
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct btrfs_trans_handle {int dummy; } ;
struct btrfs_root {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct btrfs_trans_handle*,struct btrfs_root*,int,int ,int ) ;
 int FUNC_1 (struct btrfs_root*,int ) ;

int FUNC_2(struct btrfs_trans_handle *VAR_1,
       struct btrfs_root *VAR_2, u64 VAR_3)
{
 u64 VAR_4 = FUNC_1(VAR_2, VAR_3);
 return FUNC_0(VAR_1, VAR_2, 2 * 1024 * 1024, VAR_4,
         VAR_0);
}
