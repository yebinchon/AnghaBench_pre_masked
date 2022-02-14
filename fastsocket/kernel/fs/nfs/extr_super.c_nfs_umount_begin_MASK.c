
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct super_block {int dummy; } ;
struct rpc_clnt {int dummy; } ;
struct nfs_server {struct rpc_clnt* client; struct rpc_clnt* client_acl; } ;


 int FUNC_0 (struct rpc_clnt*) ;
 struct nfs_server* FUNC_1 (struct super_block*) ;
 int FUNC_2 () ;
 int FUNC_3 (struct rpc_clnt*) ;
 int FUNC_4 () ;

__attribute__((used)) static void FUNC_5(struct super_block *VAR_0)
{
 struct nfs_server *VAR_1;
 struct rpc_clnt *VAR_2;

 FUNC_2();

 VAR_1 = FUNC_1(VAR_0);

 VAR_2 = VAR_1->client_acl;
 if (!FUNC_0(VAR_2))
  FUNC_3(VAR_2);
 VAR_2 = VAR_1->client;
 if (!FUNC_0(VAR_2))
  FUNC_3(VAR_2);

 FUNC_4();
}
