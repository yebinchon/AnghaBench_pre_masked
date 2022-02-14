
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct afs_vnode {int cb_promised; int cb_promise; struct afs_server* server; } ;
struct TYPE_2__ {int * rb_node; } ;
struct afs_server {int cb_lock; TYPE_1__ cb_promises; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (char*,int) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (int *,TYPE_1__*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

void FUNC_6(struct afs_vnode *VAR_0)
{
 struct afs_server *VAR_1 = VAR_0->server;

 FUNC_1("%d", VAR_0->cb_promised);

 if (!VAR_0->cb_promised) {
  FUNC_2(" [not promised]");
  return;
 }

 FUNC_0(VAR_1 != ((void*)0));

 FUNC_4(&VAR_1->cb_lock);
 if (VAR_0->cb_promised) {
  FUNC_0(VAR_1->cb_promises.rb_node != ((void*)0));
  FUNC_3(&VAR_0->cb_promise, &VAR_1->cb_promises);
  VAR_0->cb_promised = 0;
 }
 FUNC_5(&VAR_1->cb_lock);
 FUNC_2("");
}
