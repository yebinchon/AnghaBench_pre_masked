
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct rpc_rqst {int dummy; } ;
struct nfs_writeres {int count; TYPE_1__* verf; int fattr; } ;
typedef enum nfs3_stable_how { ____Placeholder_nfs3_stable_how } nfs3_stable_how ;
typedef int __be32 ;
struct TYPE_2__ {int committed; int * verifier; } ;


 int FUNC_0 (int) ;
 void* FUNC_1 (int ) ;
 int * FUNC_2 (int *,int ) ;

__attribute__((used)) static int
FUNC_3(struct rpc_rqst *VAR_0, __be32 *VAR_1, struct nfs_writeres *VAR_2)
{
 int VAR_3;

 VAR_3 = FUNC_1(*VAR_1++);
 VAR_1 = FUNC_2(VAR_1, VAR_2->fattr);

 if (VAR_3 != 0)
  return FUNC_0(VAR_3);

 VAR_2->count = FUNC_1(*VAR_1++);
 VAR_2->verf->committed = (enum nfs3_stable_how)FUNC_1(*VAR_1++);
 VAR_2->verf->verifier[0] = *VAR_1++;
 VAR_2->verf->verifier[1] = *VAR_1++;

 return VAR_2->count;
}
