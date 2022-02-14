
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rpc_auth {int dummy; } ;
struct nfs_server {int client; } ;
struct nfs_fsinfo {int dummy; } ;
struct nfs_fh {int dummy; } ;
typedef int rpc_authflavor_t ;


 int VAR_0 ;
 int FUNC_0 (struct nfs_server*,struct nfs_fh*,struct nfs_fsinfo*) ;
 struct rpc_auth* FUNC_1 (int ,int ) ;

__attribute__((used)) static int FUNC_2(struct nfs_server *VAR_1, struct nfs_fh *VAR_2,
    struct nfs_fsinfo *VAR_3, rpc_authflavor_t VAR_4)
{
 struct rpc_auth *VAR_5;
 int VAR_6;

 VAR_5 = FUNC_1(VAR_4, VAR_1->client);
 if (!VAR_5) {
  VAR_6 = -VAR_0;
  goto out;
 }
 VAR_6 = FUNC_0(VAR_1, VAR_2, VAR_3);
out:
 return VAR_6;
}
