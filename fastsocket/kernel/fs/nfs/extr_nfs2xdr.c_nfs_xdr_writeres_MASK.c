
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct rpc_rqst {int dummy; } ;
struct nfs_writeres {int fattr; TYPE_1__* verf; } ;
typedef int __be32 ;
struct TYPE_2__ {int committed; } ;


 int VAR_0 ;
 int FUNC_0 (struct rpc_rqst*,int *,int ) ;

__attribute__((used)) static int
FUNC_1(struct rpc_rqst *VAR_1, __be32 *VAR_2, struct nfs_writeres *VAR_3)
{
 VAR_3->verf->committed = VAR_0;
 return FUNC_0(VAR_1, VAR_2, VAR_3->fattr);
}
