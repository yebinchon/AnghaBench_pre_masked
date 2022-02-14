
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rpc_timeout {int dummy; } ;
struct nfs_client {scalar_t__ cl_cons_state; } ;
typedef int rpc_authflavor_t ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,...) ;
 int FUNC_1 (struct nfs_client*,struct rpc_timeout const*,int ,int ,int) ;
 int FUNC_2 (struct nfs_client*,int) ;

int FUNC_3(struct nfs_client *VAR_2, const struct rpc_timeout *VAR_3,
      const char *VAR_4, rpc_authflavor_t VAR_5,
      int VAR_6)
{
 int VAR_7;

 if (VAR_2->cl_cons_state == VAR_0) {

  FUNC_0("<-- nfs_init_client() = 0 [already %p]\n", VAR_2);
  return 0;
 }





 VAR_7 = FUNC_1(VAR_2, VAR_3, VAR_1,
          0, VAR_6);
 if (VAR_7 < 0)
  goto error;
 FUNC_2(VAR_2, VAR_0);
 return 0;

error:
 FUNC_2(VAR_2, VAR_7);
 FUNC_0("<-- nfs_init_client() = xerror %d\n", VAR_7);
 return VAR_7;
}
