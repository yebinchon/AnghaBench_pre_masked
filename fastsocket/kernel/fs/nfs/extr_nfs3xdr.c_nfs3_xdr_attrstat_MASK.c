
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rpc_rqst {int dummy; } ;
struct nfs_fattr {int dummy; } ;
typedef int __be32 ;


 int FUNC_0 (int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *,struct nfs_fattr*) ;

__attribute__((used)) static int
FUNC_3(struct rpc_rqst *VAR_0, __be32 *VAR_1, struct nfs_fattr *VAR_2)
{
 int VAR_3;

 if ((VAR_3 = FUNC_1(*VAR_1++)))
  return FUNC_0(VAR_3);
 FUNC_2(VAR_1, VAR_2);
 return 0;
}
