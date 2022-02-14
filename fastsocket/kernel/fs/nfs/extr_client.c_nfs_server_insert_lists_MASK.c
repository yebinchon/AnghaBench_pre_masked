
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nfs_server {int master_link; int client_link; struct nfs_client* nfs_client; } ;
struct nfs_client {int cl_res_state; int cl_superblocks; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int *) ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (int *,int *) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static void FUNC_5(struct nfs_server *VAR_3)
{
 struct nfs_client *VAR_4 = VAR_3->nfs_client;

 FUNC_3(&VAR_1);
 FUNC_2(&VAR_3->client_link, &VAR_4->cl_superblocks);
 FUNC_1(&VAR_3->master_link, &VAR_2);
 FUNC_0(VAR_0, &VAR_4->cl_res_state);
 FUNC_4(&VAR_1);

}
