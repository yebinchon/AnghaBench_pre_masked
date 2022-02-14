
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rpc_rqst {int rq_snd_buf; int rq_svec; int rq_slen; } ;
struct nfs3_symlinkargs {int pathlen; int pages; int sattr; int fromlen; int fromname; int fromfh; } ;
typedef int __be32 ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int *) ;
 int * FUNC_2 (int *,int ,int ) ;
 int * FUNC_3 (int *,int ) ;
 int FUNC_4 (int *,int ,int ,int ) ;
 int * FUNC_5 (int *,int ) ;

__attribute__((used)) static int
FUNC_6(struct rpc_rqst *VAR_0, __be32 *VAR_1, struct nfs3_symlinkargs *VAR_2)
{
 VAR_1 = FUNC_3(VAR_1, VAR_2->fromfh);
 VAR_1 = FUNC_2(VAR_1, VAR_2->fromname, VAR_2->fromlen);
 VAR_1 = FUNC_5(VAR_1, VAR_2->sattr);
 *VAR_1++ = FUNC_0(VAR_2->pathlen);
 VAR_0->rq_slen = FUNC_1(VAR_0->rq_svec, VAR_1);


 FUNC_4(&VAR_0->rq_snd_buf, VAR_2->pages, 0, VAR_2->pathlen);
 return 0;
}
