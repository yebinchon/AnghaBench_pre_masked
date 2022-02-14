
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nfs_server {struct nfs_client* nfs_client; } ;
struct nfs_client {int dummy; } ;
struct nfs4_state {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct nfs_client*) ;
 int FUNC_1 (struct nfs_client*,struct nfs4_state*) ;
 int FUNC_2 (struct nfs4_state*) ;

int FUNC_3(const struct nfs_server *VAR_1, struct nfs4_state *VAR_2)
{
 struct nfs_client *VAR_3 = VAR_1->nfs_client;

 if (!FUNC_2(VAR_2))
  return -VAR_0;
 FUNC_1(VAR_3, VAR_2);
 FUNC_0(VAR_3);
 return 0;
}
