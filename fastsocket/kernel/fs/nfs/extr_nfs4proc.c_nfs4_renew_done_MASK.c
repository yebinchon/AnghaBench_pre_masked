
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rpc_task {scalar_t__ tk_status; } ;
struct nfs_client {int cl_res_state; } ;
struct nfs4_renewdata {unsigned long timestamp; struct nfs_client* client; } ;


 int VAR_0 ;
 int FUNC_0 (struct nfs_client*,unsigned long) ;
 int FUNC_1 (struct nfs_client*) ;
 scalar_t__ FUNC_2 (int ,int *) ;

__attribute__((used)) static void FUNC_3(struct rpc_task *VAR_1, void *VAR_2)
{
 struct nfs4_renewdata *VAR_3 = VAR_2;
 struct nfs_client *VAR_4 = VAR_3->client;
 unsigned long VAR_5 = VAR_3->timestamp;

 if (VAR_1->tk_status < 0) {

  if (FUNC_2(VAR_0, &VAR_4->cl_res_state) != 0)
   FUNC_1(VAR_4);
  return;
 }
 FUNC_0(VAR_4, VAR_5);
}
