
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nfs_server {int openowner_id; int state_owners; } ;
struct nfs4_state_owner {int so_owner_id; int so_server_node; struct nfs_server* so_server; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (int *,int *) ;

__attribute__((used)) static void
FUNC_3(struct nfs4_state_owner *VAR_0)
{
 struct nfs_server *VAR_1 = VAR_0->so_server;

 if (!FUNC_0(&VAR_0->so_server_node))
  FUNC_2(&VAR_0->so_server_node, &VAR_1->state_owners);
 FUNC_1(&VAR_1->openowner_id, &VAR_0->so_owner_id);
}
