
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct afs_vnode {int cb_promised; struct afs_server* server; int server_rb; int cb_promise; int flags; } ;
struct afs_server {int fs_lock; int fs_vnodes; int cb_lock; int cb_promises; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (char*,struct afs_server*) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (struct afs_server*) ;
 int FUNC_4 (int *,int *) ;
 int FUNC_5 (int ,int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;

__attribute__((used)) static void FUNC_8(struct afs_vnode *VAR_1)
{
 struct afs_server *VAR_2;

 FUNC_1("{%p}", VAR_1->server);

 FUNC_5(VAR_0, &VAR_1->flags);

 VAR_2 = VAR_1->server;
 if (VAR_2) {
  if (VAR_1->cb_promised) {
   FUNC_6(&VAR_2->cb_lock);
   if (VAR_1->cb_promised) {
    FUNC_4(&VAR_1->cb_promise,
      &VAR_2->cb_promises);
    VAR_1->cb_promised = 0;
   }
   FUNC_7(&VAR_2->cb_lock);
  }

  FUNC_6(&VAR_2->fs_lock);
  FUNC_4(&VAR_1->server_rb, &VAR_2->fs_vnodes);
  FUNC_7(&VAR_2->fs_lock);

  VAR_1->server = ((void*)0);
  FUNC_3(VAR_2);
 } else {
  FUNC_0(!VAR_1->cb_promised);
 }

 FUNC_2("");
}
