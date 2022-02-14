
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rpc_rqst {int rq_svec; int rq_slen; } ;
struct nfs3_createargs {scalar_t__ createmode; int sattr; int * verifier; int len; int name; int fh; } ;
typedef int __be32 ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (int ,int *) ;
 int * FUNC_2 (int *,int ,int ) ;
 int * FUNC_3 (int *,int ) ;
 int * FUNC_4 (int *,int ) ;

__attribute__((used)) static int
FUNC_5(struct rpc_rqst *VAR_1, __be32 *VAR_2, struct nfs3_createargs *VAR_3)
{
 VAR_2 = FUNC_3(VAR_2, VAR_3->fh);
 VAR_2 = FUNC_2(VAR_2, VAR_3->name, VAR_3->len);

 *VAR_2++ = FUNC_0(VAR_3->createmode);
 if (VAR_3->createmode == VAR_0) {
  *VAR_2++ = VAR_3->verifier[0];
  *VAR_2++ = VAR_3->verifier[1];
 } else
  VAR_2 = FUNC_4(VAR_2, VAR_3->sattr);

 VAR_1->rq_slen = FUNC_1(VAR_1->rq_svec, VAR_2);
 return 0;
}
