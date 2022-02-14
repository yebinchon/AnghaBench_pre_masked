
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rpc_rqst {int dummy; } ;
struct nfs2_fsstat {void* bavail; void* bfree; void* blocks; void* bsize; void* tsize; } ;
typedef int __be32 ;


 int FUNC_0 (int) ;
 void* FUNC_1 (int ) ;

__attribute__((used)) static int
FUNC_2(struct rpc_rqst *VAR_0, __be32 *VAR_1, struct nfs2_fsstat *VAR_2)
{
 int VAR_3;

 if ((VAR_3 = FUNC_1(*VAR_1++)))
  return FUNC_0(VAR_3);

 VAR_2->tsize = FUNC_1(*VAR_1++);
 VAR_2->bsize = FUNC_1(*VAR_1++);
 VAR_2->blocks = FUNC_1(*VAR_1++);
 VAR_2->bfree = FUNC_1(*VAR_1++);
 VAR_2->bavail = FUNC_1(*VAR_1++);
 return 0;
}
