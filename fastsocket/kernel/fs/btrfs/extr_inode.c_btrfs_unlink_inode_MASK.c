
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct inode {int dummy; } ;
struct btrfs_trans_handle {int dummy; } ;
struct btrfs_root {int dummy; } ;


 int FUNC_0 (struct btrfs_trans_handle*,struct btrfs_root*,struct inode*,struct inode*,char const*,int) ;
 int FUNC_1 (struct inode*) ;
 int FUNC_2 (struct btrfs_trans_handle*,struct btrfs_root*,struct inode*) ;

int FUNC_3(struct btrfs_trans_handle *VAR_0,
         struct btrfs_root *VAR_1,
         struct inode *VAR_2, struct inode *VAR_3,
         const char *VAR_4, int VAR_5)
{
 int VAR_6;
 VAR_6 = FUNC_0(VAR_0, VAR_1, VAR_2, VAR_3, VAR_4, VAR_5);
 if (!VAR_6) {
  FUNC_1(VAR_3);
  VAR_6 = FUNC_2(VAR_0, VAR_1, VAR_3);
 }
 return VAR_6;
}
