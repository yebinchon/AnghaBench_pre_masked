
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xdr_stream {int dummy; } ;
struct rpc_rqst {int rq_snd_buf; } ;
struct nfs4_link_arg {int bitmask; int name; int dir_fh; int fh; int seq_args; } ;
struct compound_hdr {int minorversion; } ;
typedef int __be32 ;


 int FUNC_0 (struct xdr_stream*,struct rpc_rqst*,struct compound_hdr*) ;
 int FUNC_1 (struct xdr_stream*,int ,struct compound_hdr*) ;
 int FUNC_2 (struct xdr_stream*,int ,struct compound_hdr*) ;
 int FUNC_3 (struct compound_hdr*) ;
 int FUNC_4 (struct xdr_stream*,int ,struct compound_hdr*) ;
 int FUNC_5 (struct xdr_stream*,struct compound_hdr*) ;
 int FUNC_6 (struct xdr_stream*,struct compound_hdr*) ;
 int FUNC_7 (struct xdr_stream*,int *,struct compound_hdr*) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (struct xdr_stream*,int *,int *) ;

__attribute__((used)) static int FUNC_10(struct rpc_rqst *VAR_0, __be32 *VAR_1, const struct nfs4_link_arg *VAR_2)
{
 struct xdr_stream VAR_3;
 struct compound_hdr VAR_4 = {
  .minorversion = FUNC_8(&VAR_2->seq_args),
 };

 FUNC_9(&VAR_3, &VAR_0->rq_snd_buf, VAR_1);
 FUNC_0(&VAR_3, VAR_0, &VAR_4);
 FUNC_7(&VAR_3, &VAR_2->seq_args, &VAR_4);
 FUNC_4(&VAR_3, VAR_2->fh, &VAR_4);
 FUNC_6(&VAR_3, &VAR_4);
 FUNC_4(&VAR_3, VAR_2->dir_fh, &VAR_4);
 FUNC_2(&VAR_3, VAR_2->name, &VAR_4);
 FUNC_5(&VAR_3, &VAR_4);
 FUNC_1(&VAR_3, VAR_2->bitmask, &VAR_4);
 FUNC_3(&VAR_4);
 return 0;
}
