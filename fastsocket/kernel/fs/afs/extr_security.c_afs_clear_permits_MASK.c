
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int vnode; int vid; } ;
struct afs_vnode {int permits_lock; struct afs_permits* permits; TYPE_1__ fid; } ;
struct afs_permits {int rcu; } ;


 int FUNC_0 (char*,int ,int ) ;
 int FUNC_1 (char*) ;
 int VAR_0 ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (struct afs_permits*,int *) ;

void FUNC_6(struct afs_vnode *VAR_1)
{
 struct afs_permits *VAR_2;

 FUNC_0("{%x:%u}", VAR_1->fid.vid, VAR_1->fid.vnode);

 FUNC_3(&VAR_1->permits_lock);
 VAR_2 = VAR_1->permits;
 FUNC_5(VAR_1->permits, ((void*)0));
 FUNC_4(&VAR_1->permits_lock);

 if (VAR_2)
  FUNC_2(&VAR_2->rcu, VAR_0);
 FUNC_1("");
}
