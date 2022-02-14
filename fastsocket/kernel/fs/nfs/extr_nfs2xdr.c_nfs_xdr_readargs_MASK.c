
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_4__ {int flags; } ;
struct rpc_rqst {TYPE_2__ rq_rcv_buf; int rq_svec; int rq_slen; TYPE_1__* rq_cred; } ;
struct rpc_auth {int au_rslack; } ;
struct nfs_readargs {int pgbase; int pages; int fh; int count; int offset; } ;
typedef int __be32 ;
struct TYPE_3__ {struct rpc_auth* cr_auth; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 void* FUNC_0 (int ) ;
 int FUNC_1 (int ,int *) ;
 int * FUNC_2 (int *,int ) ;
 int FUNC_3 (TYPE_2__*,unsigned int,int ,int ,int ) ;

__attribute__((used)) static int
FUNC_4(struct rpc_rqst *VAR_3, __be32 *VAR_4, struct nfs_readargs *VAR_5)
{
 struct rpc_auth *VAR_6 = VAR_3->rq_cred->cr_auth;
 unsigned int VAR_7;
 u32 VAR_8 = (u32)VAR_5->offset;
 u32 VAR_9 = VAR_5->count;

 VAR_4 = FUNC_2(VAR_4, VAR_5->fh);
 *VAR_4++ = FUNC_0(VAR_8);
 *VAR_4++ = FUNC_0(VAR_9);
 *VAR_4++ = FUNC_0(VAR_9);
 VAR_3->rq_slen = FUNC_1(VAR_3->rq_svec, VAR_4);


 VAR_7 = (VAR_1 + VAR_6->au_rslack + VAR_0) << 2;
 FUNC_3(&VAR_3->rq_rcv_buf, VAR_7,
    VAR_5->pages, VAR_5->pgbase, VAR_9);
 VAR_3->rq_rcv_buf.flags |= VAR_2;
 return 0;
}
