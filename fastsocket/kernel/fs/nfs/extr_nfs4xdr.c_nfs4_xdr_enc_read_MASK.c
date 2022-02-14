
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct xdr_stream {int dummy; } ;
struct TYPE_2__ {int flags; } ;
struct rpc_rqst {TYPE_1__ rq_rcv_buf; int rq_snd_buf; } ;
struct nfs_readargs {int count; int pgbase; int pages; int fh; int seq_args; } ;
struct compound_hdr {int replen; int minorversion; } ;
typedef int __be32 ;


 int VAR_0 ;
 int FUNC_0 (struct xdr_stream*,struct rpc_rqst*,struct compound_hdr*) ;
 int FUNC_1 (struct compound_hdr*) ;
 int FUNC_2 (struct xdr_stream*,int ,struct compound_hdr*) ;
 int FUNC_3 (struct xdr_stream*,struct nfs_readargs*,struct compound_hdr*) ;
 int FUNC_4 (struct xdr_stream*,int *,struct compound_hdr*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (struct xdr_stream*,int *,int *) ;
 int FUNC_7 (TYPE_1__*,int,int ,int ,int ) ;

__attribute__((used)) static int FUNC_8(struct rpc_rqst *VAR_1, __be32 *VAR_2, struct nfs_readargs *VAR_3)
{
 struct xdr_stream VAR_4;
 struct compound_hdr VAR_5 = {
  .minorversion = FUNC_5(&VAR_3->seq_args),
 };

 FUNC_6(&VAR_4, &VAR_1->rq_snd_buf, VAR_2);
 FUNC_0(&VAR_4, VAR_1, &VAR_5);
 FUNC_4(&VAR_4, &VAR_3->seq_args, &VAR_5);
 FUNC_2(&VAR_4, VAR_3->fh, &VAR_5);
 FUNC_3(&VAR_4, VAR_3, &VAR_5);

 FUNC_7(&VAR_1->rq_rcv_buf, VAR_5.replen << 2,
    VAR_3->pages, VAR_3->pgbase, VAR_3->count);
 VAR_1->rq_rcv_buf.flags |= VAR_0;
 FUNC_1(&VAR_5);
 return 0;
}
