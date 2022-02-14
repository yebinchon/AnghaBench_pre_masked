
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
struct inode {int dummy; } ;
struct TYPE_2__ {int len; int name; } ;
struct dentry {TYPE_1__ d_name; } ;
struct btrfs_trans_handle {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct btrfs_trans_handle*,struct inode*,struct inode*,int ,int ,int,int ) ;

__attribute__((used)) static int FUNC_1(struct btrfs_trans_handle *VAR_1,
       struct inode *VAR_2, struct dentry *VAR_3,
       struct inode *VAR_4, int VAR_5, u64 VAR_6)
{
 int VAR_7 = FUNC_0(VAR_1, VAR_2, VAR_4,
     VAR_3->d_name.name, VAR_3->d_name.len,
     VAR_5, VAR_6);
 if (VAR_7 > 0)
  VAR_7 = -VAR_0;
 return VAR_7;
}
