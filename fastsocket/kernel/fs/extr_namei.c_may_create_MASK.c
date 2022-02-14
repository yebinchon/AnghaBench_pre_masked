
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct inode {int dummy; } ;
struct dentry {scalar_t__ d_inode; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (struct inode*) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (struct inode*,struct dentry*,int ) ;
 int FUNC_2 (struct inode*,int) ;

__attribute__((used)) static inline int FUNC_3(struct inode *VAR_5, struct dentry *VAR_6)
{
 FUNC_1(VAR_5, VAR_6, VAR_0);
 if (VAR_6->d_inode)
  return -VAR_1;
 if (FUNC_0(VAR_5))
  return -VAR_2;
 return FUNC_2(VAR_5, VAR_4 | VAR_3);
}
