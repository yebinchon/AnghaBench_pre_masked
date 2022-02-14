
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct xdr_stream {int dummy; } ;
struct rpc_rqst {int rq_rcv_buf; int rq_snd_buf; } ;
struct nfs4_fs_locations_arg {int page; int bitmask; int name; int dir_fh; int seq_args; } ;
struct compound_hdr {int replen; int minorversion; } ;
typedef int __be32 ;


 int VAR_0 ;
 int FUNC_0 (struct xdr_stream*,struct rpc_rqst*,struct compound_hdr*) ;
 int FUNC_1 (struct xdr_stream*,int ,struct compound_hdr*) ;
 int FUNC_2 (struct xdr_stream*,int ,struct compound_hdr*) ;
 int FUNC_3 (struct compound_hdr*) ;
 int FUNC_4 (struct xdr_stream*,int ,struct compound_hdr*) ;
 int FUNC_5 (struct xdr_stream*,int *,struct compound_hdr*) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (struct xdr_stream*,int *,int *) ;
 int FUNC_8 (int *,int,int *,int ,int ) ;

__attribute__((used)) static int FUNC_9(struct rpc_rqst *VAR_1, __be32 *VAR_2, struct nfs4_fs_locations_arg *VAR_3)
{
 struct xdr_stream VAR_4;
 struct compound_hdr VAR_5 = {
  .minorversion = FUNC_6(&VAR_3->seq_args),
 };
 uint32_t VAR_6;

 FUNC_7(&VAR_4, &VAR_1->rq_snd_buf, VAR_2);
 FUNC_0(&VAR_4, VAR_1, &VAR_5);
 FUNC_5(&VAR_4, &VAR_3->seq_args, &VAR_5);
 FUNC_4(&VAR_4, VAR_3->dir_fh, &VAR_5);
 FUNC_2(&VAR_4, VAR_3->name, &VAR_5);
 VAR_6 = VAR_5.replen;
 FUNC_1(&VAR_4, VAR_3->bitmask, &VAR_5);

 FUNC_8(&VAR_1->rq_rcv_buf, VAR_6 << 2, &VAR_3->page,
   0, VAR_0);
 FUNC_3(&VAR_5);
 return 0;
}
