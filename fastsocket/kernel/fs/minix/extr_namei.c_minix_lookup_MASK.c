
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct nameidata {int dummy; } ;
struct inode {TYPE_4__* i_sb; } ;
struct TYPE_7__ {scalar_t__ len; } ;
struct dentry {TYPE_2__ d_name; int d_op; } ;
typedef scalar_t__ ino_t ;
struct TYPE_9__ {TYPE_1__* s_root; } ;
struct TYPE_8__ {scalar_t__ s_namelen; } ;
struct TYPE_6__ {int d_op; } ;


 int VAR_0 ;
 struct dentry* FUNC_0 (struct inode*) ;
 struct dentry* FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (struct inode*) ;
 int FUNC_3 (struct dentry*,struct inode*) ;
 struct inode* FUNC_4 (TYPE_4__*,scalar_t__) ;
 scalar_t__ FUNC_5 (struct dentry*) ;
 TYPE_3__* FUNC_6 (TYPE_4__*) ;

__attribute__((used)) static struct dentry *FUNC_7(struct inode * VAR_1, struct dentry *VAR_2, struct nameidata *VAR_3)
{
 struct inode * VAR_4 = ((void*)0);
 ino_t VAR_5;

 VAR_2->d_op = VAR_1->i_sb->s_root->d_op;

 if (VAR_2->d_name.len > FUNC_6(VAR_1->i_sb)->s_namelen)
  return FUNC_1(-VAR_0);

 VAR_5 = FUNC_5(VAR_2);
 if (VAR_5) {
  VAR_4 = FUNC_4(VAR_1->i_sb, VAR_5);
  if (FUNC_2(VAR_4))
   return FUNC_0(VAR_4);
 }
 FUNC_3(VAR_2, VAR_4);
 return ((void*)0);
}
