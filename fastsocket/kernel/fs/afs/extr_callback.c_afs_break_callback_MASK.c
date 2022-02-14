
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct afs_vnode {int cb_promised; int lock; int pending_locks; int granted_locks; int cb_broken_work; int cb_promise; int flags; } ;
struct afs_server {int cb_lock; int cb_promises; } ;


 int VAR_0 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (char*) ;
 int VAR_1 ;
 int FUNC_2 (struct afs_vnode*) ;
 scalar_t__ FUNC_3 (int *) ;
 int FUNC_4 (int ,int *) ;
 int FUNC_5 (int *,int *) ;
 int FUNC_6 (int ,int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;

__attribute__((used)) static void FUNC_9(struct afs_server *VAR_2,
          struct afs_vnode *VAR_3)
{
 FUNC_1("");

 FUNC_6(VAR_0, &VAR_3->flags);

 if (VAR_3->cb_promised) {
  FUNC_7(&VAR_3->lock);

  FUNC_0("break callback");

  FUNC_7(&VAR_2->cb_lock);
  if (VAR_3->cb_promised) {
   FUNC_5(&VAR_3->cb_promise, &VAR_2->cb_promises);
   VAR_3->cb_promised = 0;
  }
  FUNC_8(&VAR_2->cb_lock);

  FUNC_4(VAR_1, &VAR_3->cb_broken_work);
  if (FUNC_3(&VAR_3->granted_locks) &&
      !FUNC_3(&VAR_3->pending_locks))
   FUNC_2(VAR_3);
  FUNC_8(&VAR_3->lock);
 }
}
