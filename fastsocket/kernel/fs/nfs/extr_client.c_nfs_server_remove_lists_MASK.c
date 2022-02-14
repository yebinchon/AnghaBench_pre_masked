
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nfs_server {int master_link; int client_link; struct nfs_client* nfs_client; } ;
struct nfs_client {int cl_res_state; int cl_superblocks; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int *) ;
 int VAR_1 ;
 int FUNC_3 (int ,int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 () ;

__attribute__((used)) static void FUNC_7(struct nfs_server *VAR_2)
{
 struct nfs_client *VAR_3 = VAR_2->nfs_client;

 FUNC_4(&VAR_1);
 FUNC_1(&VAR_2->client_link);
 if (VAR_3 && FUNC_2(&VAR_3->cl_superblocks))
  FUNC_3(VAR_0, &VAR_3->cl_res_state);
 FUNC_0(&VAR_2->master_link);
 FUNC_5(&VAR_1);

 FUNC_6();
}
