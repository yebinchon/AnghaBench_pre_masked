
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xdr_stream {int dummy; } ;
struct rpc_rqst {int rq_snd_buf; } ;
struct nfs4_pathconf_arg {int* bitmask; int fh; int seq_args; } ;
struct compound_hdr {int minorversion; } ;
typedef int __be32 ;


 int FUNC_0 (struct xdr_stream*,struct rpc_rqst*,struct compound_hdr*) ;
 int FUNC_1 (struct xdr_stream*,int,struct compound_hdr*) ;
 int FUNC_2 (struct compound_hdr*) ;
 int FUNC_3 (struct xdr_stream*,int ,struct compound_hdr*) ;
 int FUNC_4 (struct xdr_stream*,int *,struct compound_hdr*) ;
 int* VAR_0 ;
 int FUNC_5 (int *) ;
 int FUNC_6 (struct xdr_stream*,int *,int *) ;

__attribute__((used)) static int FUNC_7(struct rpc_rqst *VAR_1, __be32 *VAR_2, const struct nfs4_pathconf_arg *VAR_3)
{
 struct xdr_stream VAR_4;
 struct compound_hdr VAR_5 = {
  .minorversion = FUNC_5(&VAR_3->seq_args),
 };

 FUNC_6(&VAR_4, &VAR_1->rq_snd_buf, VAR_2);
 FUNC_0(&VAR_4, VAR_1, &VAR_5);
 FUNC_4(&VAR_4, &VAR_3->seq_args, &VAR_5);
 FUNC_3(&VAR_4, VAR_3->fh, &VAR_5);
 FUNC_1(&VAR_4, VAR_3->bitmask[0] & VAR_0[0],
      &VAR_5);
 FUNC_2(&VAR_5);
 return 0;
}
