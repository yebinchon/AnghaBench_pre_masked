
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nameidata {int flags; } ;
struct inode {int dummy; } ;
struct dentry {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct inode*,struct dentry*,int,int ,int *,int ,int) ;

__attribute__((used)) static int FUNC_1(struct inode *VAR_2, struct dentry *VAR_3,
         int VAR_4, struct nameidata *VAR_5)
{
 int VAR_6 = 0;
 if (VAR_5 && (VAR_5->flags & VAR_0))
  VAR_6 = 1;
 return FUNC_0(VAR_2, VAR_3, VAR_1 | VAR_4, 0, ((void*)0), 0, VAR_6);
}
