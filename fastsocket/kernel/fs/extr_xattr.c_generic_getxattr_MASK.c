
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct xattr_handler {int (* get ) (struct inode*,char const*,void*,size_t) ;} ;
struct inode {TYPE_1__* i_sb; } ;
struct dentry {struct inode* d_inode; } ;
typedef int ssize_t ;
struct TYPE_2__ {int s_xattr; } ;


 int VAR_0 ;
 int FUNC_0 (struct inode*,char const*,void*,size_t) ;
 struct xattr_handler* FUNC_1 (int ,char const**) ;

ssize_t
FUNC_2(struct dentry *VAR_1, const char *VAR_2, void *VAR_3, size_t VAR_4)
{
 struct xattr_handler *VAR_5;
 struct inode *VAR_6 = VAR_1->d_inode;

 VAR_5 = FUNC_1(VAR_6->i_sb->s_xattr, &VAR_2);
 if (!VAR_5)
  return -VAR_0;
 return VAR_5->get(VAR_6, VAR_2, VAR_3, VAR_4);
}
