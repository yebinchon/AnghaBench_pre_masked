
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rpc_rqst {int rq_svec; int rq_slen; } ;
struct nfs_linkargs {int tolen; int toname; int tofh; int fromfh; } ;
typedef int __be32 ;


 int FUNC_0 (int ,int *) ;
 int * FUNC_1 (int *,int ,int ) ;
 int * FUNC_2 (int *,int ) ;

__attribute__((used)) static int
FUNC_3(struct rpc_rqst *VAR_0, __be32 *VAR_1, struct nfs_linkargs *VAR_2)
{
 VAR_1 = FUNC_2(VAR_1, VAR_2->fromfh);
 VAR_1 = FUNC_2(VAR_1, VAR_2->tofh);
 VAR_1 = FUNC_1(VAR_1, VAR_2->toname, VAR_2->tolen);
 VAR_0->rq_slen = FUNC_0(VAR_0->rq_svec, VAR_1);
 return 0;
}
