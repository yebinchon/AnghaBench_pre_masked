
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rpc_rqst {int dummy; } ;
struct nfs3_accessres {void* access; int fattr; } ;
typedef int __be32 ;


 int FUNC_0 (int) ;
 void* FUNC_1 (int ) ;
 int * FUNC_2 (int *,int ) ;

__attribute__((used)) static int
FUNC_3(struct rpc_rqst *VAR_0, __be32 *VAR_1, struct nfs3_accessres *VAR_2)
{
 int VAR_3 = FUNC_1(*VAR_1++);

 VAR_1 = FUNC_2(VAR_1, VAR_2->fattr);
 if (VAR_3)
  return FUNC_0(VAR_3);
 VAR_2->access = FUNC_1(*VAR_1++);
 return 0;
}
