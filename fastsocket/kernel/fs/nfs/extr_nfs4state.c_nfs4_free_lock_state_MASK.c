
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct nfs_server {int lockowner_id; struct nfs_client* nfs_client; } ;
struct nfs_client {int cl_lock; } ;
struct TYPE_2__ {int wait; } ;
struct nfs4_lock_state {TYPE_1__ ls_sequence; int ls_id; } ;


 int FUNC_0 (struct nfs4_lock_state*) ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

void FUNC_5(struct nfs_server *VAR_0, struct nfs4_lock_state *VAR_1)
{
 struct nfs_client *VAR_2 = VAR_0->nfs_client;

 FUNC_3(&VAR_2->cl_lock);
 FUNC_1(&VAR_0->lockowner_id, &VAR_1->ls_id);
 FUNC_4(&VAR_2->cl_lock);
 FUNC_2(&VAR_1->ls_sequence.wait);
 FUNC_0(VAR_1);
}
