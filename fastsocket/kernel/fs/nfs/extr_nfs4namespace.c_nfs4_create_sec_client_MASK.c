
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rpc_clnt {int dummy; } ;
struct rpc_auth {int dummy; } ;
struct qstr {int dummy; } ;
struct inode {int dummy; } ;
typedef scalar_t__ rpc_authflavor_t ;


 scalar_t__ VAR_0 ;
 struct rpc_clnt* FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 (struct rpc_clnt*) ;
 scalar_t__ FUNC_2 (struct inode*,struct qstr*) ;
 struct rpc_clnt* FUNC_3 (struct rpc_clnt*) ;
 int FUNC_4 (struct rpc_clnt*) ;
 struct rpc_auth* FUNC_5 (scalar_t__,struct rpc_clnt*) ;

struct rpc_clnt *FUNC_6(struct rpc_clnt *VAR_1, struct inode *VAR_2,
     struct qstr *VAR_3)
{
 struct rpc_clnt *VAR_4;
 struct rpc_auth *VAR_5;
 rpc_authflavor_t VAR_6;

 VAR_6 = FUNC_2(VAR_2, VAR_3);
 if (VAR_6 < 0)
  return FUNC_0(VAR_6);

 VAR_4 = FUNC_3(VAR_1);
 if (FUNC_1(VAR_4))
  return VAR_4;

 VAR_5 = FUNC_5(VAR_6, VAR_4);
 if (!VAR_5) {
  FUNC_4(VAR_4);
  VAR_4 = FUNC_0(-VAR_0);
 }

 return VAR_4;
}
