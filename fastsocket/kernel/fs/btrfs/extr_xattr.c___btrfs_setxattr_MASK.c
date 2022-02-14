
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct inode {int i_ctime; } ;
struct btrfs_trans_handle {int dummy; } ;
struct btrfs_root {int dummy; } ;
struct TYPE_2__ {struct btrfs_root* root; } ;


 TYPE_1__* FUNC_0 (struct inode*) ;
 int FUNC_1 (int) ;
 int VAR_0 ;
 scalar_t__ FUNC_2 (struct btrfs_trans_handle*) ;
 int FUNC_3 (struct btrfs_trans_handle*) ;
 int FUNC_4 (struct btrfs_trans_handle*,struct btrfs_root*) ;
 struct btrfs_trans_handle* FUNC_5 (struct btrfs_root*,int) ;
 int FUNC_6 (struct btrfs_trans_handle*,struct btrfs_root*,struct inode*) ;
 int FUNC_7 (struct btrfs_trans_handle*,struct inode*,char const*,void const*,size_t,int) ;
 int FUNC_8 (struct inode*) ;

int FUNC_9(struct btrfs_trans_handle *VAR_1,
       struct inode *VAR_2, const char *VAR_3,
       const void *VAR_4, size_t VAR_5, int VAR_6)
{
 struct btrfs_root *VAR_7 = FUNC_0(VAR_2)->root;
 int VAR_8;

 if (VAR_1)
  return FUNC_7(VAR_1, VAR_2, VAR_3, VAR_4, VAR_5, VAR_6);

 VAR_1 = FUNC_5(VAR_7, 2);
 if (FUNC_2(VAR_1))
  return FUNC_3(VAR_1);

 VAR_8 = FUNC_7(VAR_1, VAR_2, VAR_3, VAR_4, VAR_5, VAR_6);
 if (VAR_8)
  goto out;

 FUNC_8(VAR_2);
 VAR_2->i_ctime = VAR_0;
 VAR_8 = FUNC_6(VAR_1, VAR_7, VAR_2);
 FUNC_1(VAR_8);
out:
 FUNC_4(VAR_1, VAR_7);
 return VAR_8;
}
