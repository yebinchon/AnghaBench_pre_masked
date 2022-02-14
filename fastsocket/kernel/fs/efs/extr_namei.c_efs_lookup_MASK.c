
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct nameidata {int dummy; } ;
struct inode {int i_sb; } ;
struct TYPE_2__ {int len; int name; } ;
struct dentry {TYPE_1__ d_name; } ;
typedef scalar_t__ efs_ino_t ;


 struct dentry* FUNC_0 (struct inode*) ;
 scalar_t__ FUNC_1 (struct inode*) ;
 struct dentry* FUNC_2 (struct inode*,struct dentry*) ;
 scalar_t__ FUNC_3 (struct inode*,int ,int ) ;
 struct inode* FUNC_4 (int ,scalar_t__) ;

struct dentry *FUNC_5(struct inode *VAR_0, struct dentry *VAR_1, struct nameidata *VAR_2) {
 efs_ino_t VAR_3;
 struct inode * VAR_4 = ((void*)0);

 VAR_3 = FUNC_3(VAR_0, VAR_1->d_name.name, VAR_1->d_name.len);
 if (VAR_3) {
  VAR_4 = FUNC_4(VAR_0->i_sb, VAR_3);
  if (FUNC_1(VAR_4))
   return FUNC_0(VAR_4);
 }

 return FUNC_2(VAR_4, VAR_1);
}
