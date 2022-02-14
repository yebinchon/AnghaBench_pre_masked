
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct btrfs_trans_handle {int dummy; } ;
struct btrfs_root {int dummy; } ;


 int FUNC_0 (struct btrfs_root*,int ) ;
 int FUNC_1 (struct btrfs_trans_handle*,struct btrfs_root*,int ) ;

__attribute__((used)) static int FUNC_2(struct btrfs_trans_handle *VAR_0,
         struct btrfs_root *VAR_1, u64 VAR_2)
{
 int VAR_3;
 VAR_3 = FUNC_0(VAR_1, VAR_2);
 if (VAR_3 > 0)
  VAR_3 = FUNC_1(VAR_0, VAR_1, VAR_2);
 return VAR_3;
}
