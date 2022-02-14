
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct rpc_rqst {int rq_rcv_buf; int rq_svec; int rq_slen; TYPE_1__* rq_cred; } ;
struct rpc_auth {int au_rslack; } ;
struct nfs_readdirargs {int pages; int cookie; int fh; int count; } ;
typedef int __be32 ;
struct TYPE_2__ {struct rpc_auth* cr_auth; } ;


 int VAR_0 ;
 int VAR_1 ;
 void* FUNC_0 (int ) ;
 int FUNC_1 (int ,int *) ;
 int * FUNC_2 (int *,int ) ;
 int FUNC_3 (int *,unsigned int,int ,int ,int ) ;

__attribute__((used)) static int
FUNC_4(struct rpc_rqst *VAR_2, __be32 *VAR_3, struct nfs_readdirargs *VAR_4)
{
 struct rpc_auth *VAR_5 = VAR_2->rq_cred->cr_auth;
 unsigned int VAR_6;
 u32 VAR_7 = VAR_4->count;

 VAR_3 = FUNC_2(VAR_3, VAR_4->fh);
 *VAR_3++ = FUNC_0(VAR_4->cookie);
 *VAR_3++ = FUNC_0(VAR_7);
 VAR_2->rq_slen = FUNC_1(VAR_2->rq_svec, VAR_3);


 VAR_6 = (VAR_1 + VAR_5->au_rslack + VAR_0) << 2;
 FUNC_3(&VAR_2->rq_rcv_buf, VAR_6, VAR_4->pages, 0, VAR_7);
 return 0;
}
