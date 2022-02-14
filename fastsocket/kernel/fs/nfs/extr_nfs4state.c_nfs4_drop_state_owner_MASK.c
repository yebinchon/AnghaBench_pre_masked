
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nfs_server {int state_owners; struct nfs_client* nfs_client; } ;
struct nfs_client {int cl_lock; } ;
struct nfs4_state_owner {int so_server_node; struct nfs_server* so_server; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static void
FUNC_5(struct nfs4_state_owner *VAR_0)
{
 if (!FUNC_1(&VAR_0->so_server_node)) {
  struct nfs_server *VAR_1 = VAR_0->so_server;
  struct nfs_client *VAR_2 = VAR_1->nfs_client;

  FUNC_3(&VAR_2->cl_lock);
  FUNC_2(&VAR_0->so_server_node, &VAR_1->state_owners);
  FUNC_0(&VAR_0->so_server_node);
  FUNC_4(&VAR_2->cl_lock);
 }
}
