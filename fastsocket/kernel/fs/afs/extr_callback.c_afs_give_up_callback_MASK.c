
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct afs_vnode {scalar_t__ cb_promised; int vfs_inode; struct afs_server* server; } ;
struct afs_server {int cb_lock; int cb_break_waitq; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (char*,int *) ;
 int FUNC_4 (char*,scalar_t__) ;
 int FUNC_5 (char*) ;
 int FUNC_6 (int *,int *) ;
 scalar_t__ FUNC_7 (struct afs_server*) ;
 int FUNC_8 (struct afs_server*,struct afs_vnode*) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_9 (int *,int *) ;
 int FUNC_10 () ;
 int FUNC_11 (int ) ;
 int FUNC_12 (int *) ;
 int FUNC_13 (int *) ;

void FUNC_14(struct afs_vnode *VAR_4)
{
 struct afs_server *VAR_5 = VAR_4->server;

 FUNC_1(VAR_3, VAR_2);

 FUNC_4("%d", VAR_4->cb_promised);

 FUNC_3("GIVE UP INODE %p", &VAR_4->vfs_inode);

 if (!VAR_4->cb_promised) {
  FUNC_5(" [not promised]");
  return;
 }

 FUNC_0(VAR_5 != ((void*)0));

 FUNC_12(&VAR_5->cb_lock);
 if (VAR_4->cb_promised && FUNC_7(VAR_5) == 0) {
  FUNC_6(&VAR_5->cb_break_waitq, &VAR_3);
  for (;;) {
   FUNC_11(VAR_1);
   if (!VAR_4->cb_promised ||
       FUNC_7(VAR_5) != 0)
    break;
   FUNC_13(&VAR_5->cb_lock);
   FUNC_10();
   FUNC_12(&VAR_5->cb_lock);
  }
  FUNC_9(&VAR_5->cb_break_waitq, &VAR_3);
  FUNC_2(VAR_0);
 }



 if (VAR_4->cb_promised)
  FUNC_8(VAR_5, VAR_4);

 FUNC_13(&VAR_5->cb_lock);
 FUNC_5("");
}
