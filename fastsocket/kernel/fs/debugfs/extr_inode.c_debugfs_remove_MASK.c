
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct dentry {TYPE_1__* d_inode; struct dentry* d_parent; } ;
struct TYPE_2__ {int i_mutex; } ;


 int FUNC_0 (struct dentry*,struct dentry*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,int *) ;

void FUNC_4(struct dentry *VAR_2)
{
 struct dentry *VAR_3;

 if (!VAR_2)
  return;

 VAR_3 = VAR_2->d_parent;
 if (!VAR_3 || !VAR_3->d_inode)
  return;

 FUNC_1(&VAR_3->d_inode->i_mutex);
 FUNC_0(VAR_2, VAR_3);
 FUNC_2(&VAR_3->d_inode->i_mutex);
 FUNC_3(&VAR_0, &VAR_1);
}
