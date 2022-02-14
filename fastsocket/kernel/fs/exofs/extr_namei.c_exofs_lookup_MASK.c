
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct nameidata {int dummy; } ;
struct inode {int i_sb; } ;
struct TYPE_2__ {scalar_t__ len; } ;
struct dentry {TYPE_1__ d_name; } ;
typedef scalar_t__ ino_t ;


 int VAR_0 ;
 struct dentry* FUNC_0 (struct inode*) ;
 struct dentry* FUNC_1 (int ) ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_2 (struct inode*) ;
 struct dentry* FUNC_3 (struct inode*,struct dentry*) ;
 struct inode* FUNC_4 (int ,scalar_t__) ;
 scalar_t__ FUNC_5 (struct inode*,struct dentry*) ;

__attribute__((used)) static struct dentry *FUNC_6(struct inode *VAR_2, struct dentry *VAR_3,
       struct nameidata *VAR_4)
{
 struct inode *VAR_5;
 ino_t VAR_6;

 if (VAR_3->d_name.len > VAR_1)
  return FUNC_1(-VAR_0);

 VAR_6 = FUNC_5(VAR_2, VAR_3);
 VAR_5 = ((void*)0);
 if (VAR_6) {
  VAR_5 = FUNC_4(VAR_2->i_sb, VAR_6);
  if (FUNC_2(VAR_5))
   return FUNC_0(VAR_5);
 }
 return FUNC_3(VAR_5, VAR_3);
}
