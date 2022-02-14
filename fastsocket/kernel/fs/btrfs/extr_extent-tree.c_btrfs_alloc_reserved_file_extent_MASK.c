
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u64 ;
struct btrfs_trans_handle {int dummy; } ;
struct btrfs_root {int fs_info; } ;
struct btrfs_key {int offset; int objectid; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ,struct btrfs_trans_handle*,int ,int ,int ,scalar_t__,scalar_t__,scalar_t__,int ,int *,int ) ;

int FUNC_2(struct btrfs_trans_handle *VAR_2,
         struct btrfs_root *VAR_3,
         u64 VAR_4, u64 VAR_5,
         u64 VAR_6, struct btrfs_key *VAR_7)
{
 int VAR_8;

 FUNC_0(VAR_4 == VAR_1);

 VAR_8 = FUNC_1(VAR_3->fs_info, VAR_2, VAR_7->objectid,
      VAR_7->offset, 0,
      VAR_4, VAR_5, VAR_6,
      VAR_0, ((void*)0), 0);
 return VAR_8;
}
