
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct btrfs_trans_handle {int dummy; } ;
struct btrfs_device {int dev_root; } ;


 int FUNC_0 (struct btrfs_trans_handle*,struct btrfs_device*,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;

int FUNC_3(struct btrfs_trans_handle *VAR_0,
        struct btrfs_device *VAR_1, u64 VAR_2)
{
 int VAR_3;
 FUNC_1(VAR_1->dev_root);
 VAR_3 = FUNC_0(VAR_0, VAR_1, VAR_2);
 FUNC_2(VAR_1->dev_root);
 return VAR_3;
}
