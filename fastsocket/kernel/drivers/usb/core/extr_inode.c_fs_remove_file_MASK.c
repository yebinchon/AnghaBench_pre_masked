
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct dentry {TYPE_1__* d_inode; struct dentry* d_parent; } ;
struct TYPE_3__ {int i_mutex; int i_mode; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (struct dentry*) ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (struct dentry*) ;
 int FUNC_5 (TYPE_1__*,struct dentry*) ;
 int FUNC_6 (TYPE_1__*,struct dentry*) ;

__attribute__((used)) static void FUNC_7 (struct dentry *VAR_1)
{
 struct dentry *VAR_2 = VAR_1->d_parent;

 if (!VAR_2 || !VAR_2->d_inode)
  return;

 FUNC_2(&VAR_2->d_inode->i_mutex, VAR_0);
 if (FUNC_4(VAR_1)) {
  if (VAR_1->d_inode) {
   if (FUNC_0(VAR_1->d_inode->i_mode))
    FUNC_5(VAR_2->d_inode, VAR_1);
   else
    FUNC_6(VAR_2->d_inode, VAR_1);
  FUNC_1(VAR_1);
  }
 }
 FUNC_3(&VAR_2->d_inode->i_mutex);
}
