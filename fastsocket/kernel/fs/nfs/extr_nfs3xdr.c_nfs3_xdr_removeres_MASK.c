
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rpc_rqst {int dummy; } ;
struct nfs_removeres {int dir_attr; } ;
typedef int __be32 ;


 int FUNC_0 (struct rpc_rqst*,int *,int ) ;

__attribute__((used)) static int
FUNC_1(struct rpc_rqst *VAR_0, __be32 *VAR_1, struct nfs_removeres *VAR_2)
{
 return FUNC_0(VAR_0, VAR_1, VAR_2->dir_attr);
}
