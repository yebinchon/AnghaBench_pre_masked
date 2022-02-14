
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nameidata {int dummy; } ;
struct dentry {scalar_t__ d_inode; } ;


 int FUNC_0 (struct dentry*) ;

__attribute__((used)) static int FUNC_1(struct dentry *VAR_0, struct nameidata *VAR_1)
{

 if (VAR_0->d_inode)
  return 1;
 return FUNC_0(VAR_0);
}
