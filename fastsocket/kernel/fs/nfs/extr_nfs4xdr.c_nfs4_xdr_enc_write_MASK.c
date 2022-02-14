
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct xdr_stream {int dummy; } ;
struct TYPE_2__ {int flags; } ;
struct rpc_rqst {TYPE_1__ rq_snd_buf; } ;
struct nfs_writeargs {int bitmask; int fh; int seq_args; } ;
struct compound_hdr {int minorversion; } ;
typedef int __be32 ;


 int VAR_0 ;
 int FUNC_0 (struct xdr_stream*,struct rpc_rqst*,struct compound_hdr*) ;
 int FUNC_1 (struct xdr_stream*,int ,struct compound_hdr*) ;
 int FUNC_2 (struct compound_hdr*) ;
 int FUNC_3 (struct xdr_stream*,int ,struct compound_hdr*) ;
 int FUNC_4 (struct xdr_stream*,int *,struct compound_hdr*) ;
 int FUNC_5 (struct xdr_stream*,struct nfs_writeargs*,struct compound_hdr*) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (struct xdr_stream*,TYPE_1__*,int *) ;

__attribute__((used)) static int FUNC_8(struct rpc_rqst *VAR_1, __be32 *VAR_2, struct nfs_writeargs *VAR_3)
{
 struct xdr_stream VAR_4;
 struct compound_hdr VAR_5 = {
  .minorversion = FUNC_6(&VAR_3->seq_args),
 };

 FUNC_7(&VAR_4, &VAR_1->rq_snd_buf, VAR_2);
 FUNC_0(&VAR_4, VAR_1, &VAR_5);
 FUNC_4(&VAR_4, &VAR_3->seq_args, &VAR_5);
 FUNC_3(&VAR_4, VAR_3->fh, &VAR_5);
 FUNC_5(&VAR_4, VAR_3, &VAR_5);
 VAR_1->rq_snd_buf.flags |= VAR_0;
 if (VAR_3->bitmask)
  FUNC_1(&VAR_4, VAR_3->bitmask, &VAR_5);
 FUNC_2(&VAR_5);
 return 0;
}
