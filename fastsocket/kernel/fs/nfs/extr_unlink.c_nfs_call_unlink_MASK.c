
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct nfs_unlinkdata {int list; } ;
struct inode {int i_lock; } ;
struct dentry {struct inode* d_inode; } ;
struct TYPE_2__ {int silly_list; int silly_count; } ;


 TYPE_1__* FUNC_0 (struct inode*) ;
 scalar_t__ FUNC_1 (int *) ;
 struct dentry* FUNC_2 (struct dentry*) ;
 int FUNC_3 (struct dentry*) ;
 int FUNC_4 (int *,int *) ;
 int FUNC_5 (struct dentry*,struct inode*,struct nfs_unlinkdata*) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;

__attribute__((used)) static int FUNC_8(struct dentry *VAR_0, struct nfs_unlinkdata *VAR_1)
{
 struct dentry *VAR_2;
 struct inode *VAR_3;
 int VAR_4 = 0;


 VAR_2 = FUNC_2(VAR_0);
 if (VAR_2 == ((void*)0))
  goto out_free;
 VAR_3 = VAR_2->d_inode;

 FUNC_6(&VAR_3->i_lock);
 if (FUNC_1(&FUNC_0(VAR_3)->silly_count) == 0) {

  FUNC_4(&VAR_1->list, &FUNC_0(VAR_3)->silly_list);
  FUNC_7(&VAR_3->i_lock);
  VAR_4 = 1;
  goto out_dput;
 }
 FUNC_7(&VAR_3->i_lock);
 VAR_4 = FUNC_5(VAR_2, VAR_3, VAR_1);
out_dput:
 FUNC_3(VAR_2);
out_free:
 return VAR_4;
}
