
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nameidata {int flags; } ;
struct inode {int dummy; } ;
struct dentry {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct inode*,struct dentry*,int,struct nameidata*) ;
 int FUNC_1 (struct inode*,struct dentry*,int,int ) ;

__attribute__((used)) static int FUNC_2(struct inode *VAR_2, struct dentry *VAR_3, int VAR_4,
         struct nameidata *VAR_5)
{
 if (VAR_5 && (VAR_5->flags & VAR_1)) {
  int VAR_6 = FUNC_0(VAR_2, VAR_3, VAR_4, VAR_5);
  if (VAR_6 != -VAR_0)
   return VAR_6;

 }
 return FUNC_1(VAR_2, VAR_3, VAR_4, 0);
}
