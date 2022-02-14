
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct dentry {TYPE_1__* d_inode; struct dentry* d_parent; } ;
struct TYPE_3__ {int i_mutex; int i_mode; } ;


 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (struct dentry*) ;
 int FUNC_2 (struct dentry*) ;
 scalar_t__ FUNC_3 (struct dentry*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (TYPE_1__*,struct dentry*) ;
 int FUNC_7 (TYPE_1__*,struct dentry*) ;

__attribute__((used)) static void FUNC_8(struct dentry *VAR_0)
{
 struct dentry *VAR_1;

 VAR_1 = VAR_0->d_parent;
 if (!VAR_1 || !VAR_1->d_inode)
  return;
 FUNC_4(&VAR_1->d_inode->i_mutex);
 if (FUNC_3(VAR_0)) {
  if (FUNC_0(VAR_0->d_inode->i_mode))
   FUNC_6(VAR_1->d_inode, VAR_0);
  else
   FUNC_7(VAR_1->d_inode, VAR_0);
 }
 FUNC_1(VAR_0);
 FUNC_2(VAR_0);
 FUNC_5(&VAR_1->d_inode->i_mutex);
}
