
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct xattr_handler {int (* set ) (struct inode*,char const*,void const*,size_t,int) ;} ;
struct inode {TYPE_1__* i_sb; } ;
struct dentry {struct inode* d_inode; } ;
struct TYPE_2__ {int s_xattr; } ;


 int VAR_0 ;
 int FUNC_0 (struct inode*,char const*,void const*,size_t,int) ;
 struct xattr_handler* FUNC_1 (int ,char const**) ;

int
FUNC_2(struct dentry *VAR_1, const char *VAR_2, const void *VAR_3, size_t VAR_4, int VAR_5)
{
 struct xattr_handler *VAR_6;
 struct inode *VAR_7 = VAR_1->d_inode;

 if (VAR_4 == 0)
  VAR_3 = "";
 VAR_6 = FUNC_1(VAR_7->i_sb->s_xattr, &VAR_2);
 if (!VAR_6)
  return -VAR_0;
 return VAR_6->set(VAR_7, VAR_2, VAR_3, VAR_4, VAR_5);
}
