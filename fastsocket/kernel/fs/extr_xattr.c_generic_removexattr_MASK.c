
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct xattr_handler {int (* set ) (struct inode*,char const*,int *,int ,int ) ;} ;
struct inode {TYPE_1__* i_sb; } ;
struct dentry {struct inode* d_inode; } ;
struct TYPE_2__ {int s_xattr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct inode*,char const*,int *,int ,int ) ;
 struct xattr_handler* FUNC_1 (int ,char const**) ;

int
FUNC_2(struct dentry *VAR_2, const char *VAR_3)
{
 struct xattr_handler *VAR_4;
 struct inode *VAR_5 = VAR_2->d_inode;

 VAR_4 = FUNC_1(VAR_5->i_sb->s_xattr, &VAR_3);
 if (!VAR_4)
  return -VAR_0;
 return VAR_4->set(VAR_5, VAR_3, ((void*)0), 0, VAR_1);
}
