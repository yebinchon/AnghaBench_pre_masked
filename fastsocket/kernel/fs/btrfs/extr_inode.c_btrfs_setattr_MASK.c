
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct inode {int i_mode; } ;
struct iattr {int ia_valid; } ;
struct dentry {struct inode* d_inode; } ;
struct btrfs_root {int dummy; } ;
struct TYPE_2__ {struct btrfs_root* root; } ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_1__* FUNC_0 (struct inode*) ;
 int VAR_2 ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (struct inode*) ;
 scalar_t__ FUNC_3 (struct btrfs_root*) ;
 int FUNC_4 (struct inode*,struct iattr*) ;
 int FUNC_5 (struct inode*,struct iattr*) ;
 int FUNC_6 (struct inode*) ;
 int FUNC_7 (struct inode*,struct iattr*) ;

__attribute__((used)) static int FUNC_8(struct dentry *VAR_3, struct iattr *VAR_4)
{
 struct inode *VAR_5 = VAR_3->d_inode;
 struct btrfs_root *VAR_6 = FUNC_0(VAR_5)->root;
 int VAR_7;

 if (FUNC_3(VAR_6))
  return -VAR_2;

 VAR_7 = FUNC_5(VAR_5, VAR_4);
 if (VAR_7)
  return VAR_7;

 if (FUNC_1(VAR_5->i_mode) && (VAR_4->ia_valid & VAR_1)) {
  VAR_7 = FUNC_4(VAR_5, VAR_4);
  if (VAR_7)
   return VAR_7;
 }
 VAR_4->ia_valid &= ~VAR_1;

 if (VAR_4->ia_valid) {
  FUNC_6(VAR_5);
  VAR_7 = FUNC_7(VAR_5, VAR_4);
 }

 if (!VAR_7 && ((VAR_4->ia_valid & VAR_0)))
  VAR_7 = FUNC_2(VAR_5);
 return VAR_7;
}
