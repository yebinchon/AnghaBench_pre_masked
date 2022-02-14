
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rpc_rqst {int rq_svec; int rq_slen; } ;
struct nfs3_mknodargs {scalar_t__ type; int rdev; int sattr; int len; int name; int fh; } ;
typedef int __be32 ;


 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 void* FUNC_2 (scalar_t__) ;
 int FUNC_3 (int ,int *) ;
 int * FUNC_4 (int *,int ,int ) ;
 int * FUNC_5 (int *,int ) ;
 int * FUNC_6 (int *,int ) ;

__attribute__((used)) static int
FUNC_7(struct rpc_rqst *VAR_2, __be32 *VAR_3, struct nfs3_mknodargs *VAR_4)
{
 VAR_3 = FUNC_5(VAR_3, VAR_4->fh);
 VAR_3 = FUNC_4(VAR_3, VAR_4->name, VAR_4->len);
 *VAR_3++ = FUNC_2(VAR_4->type);
 VAR_3 = FUNC_6(VAR_3, VAR_4->sattr);
 if (VAR_4->type == VAR_1 || VAR_4->type == VAR_0) {
  *VAR_3++ = FUNC_2(FUNC_0(VAR_4->rdev));
  *VAR_3++ = FUNC_2(FUNC_1(VAR_4->rdev));
 }

 VAR_2->rq_slen = FUNC_3(VAR_2->rq_svec, VAR_3);
 return 0;
}
