
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct afs_writeback {scalar_t__ usage; struct afs_vnode* vnode; } ;
struct afs_vnode {int writeback_lock; } ;


 int FUNC_0 (char*,scalar_t__) ;
 int FUNC_1 (struct afs_writeback*) ;
 int FUNC_2 (struct afs_writeback*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

void FUNC_5(struct afs_writeback *VAR_0)
{
 struct afs_vnode *VAR_1 = VAR_0->vnode;

 FUNC_0("{%d}", VAR_0->usage);

 FUNC_3(&VAR_1->writeback_lock);
 if (--VAR_0->usage == 0)
  FUNC_2(VAR_0);
 else
  VAR_0 = ((void*)0);
 FUNC_4(&VAR_1->writeback_lock);
 if (VAR_0)
  FUNC_1(VAR_0);
}
