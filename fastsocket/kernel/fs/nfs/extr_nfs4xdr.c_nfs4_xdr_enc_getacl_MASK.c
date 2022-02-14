
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct xdr_stream {int dummy; } ;
struct rpc_rqst {int rq_rcv_buf; int rq_snd_buf; } ;
struct nfs_getaclargs {int acl_len; int acl_pgbase; int acl_pages; int fh; int seq_args; } ;
struct compound_hdr {int replen; int minorversion; } ;
typedef int __be32 ;


 int VAR_0 ;
 int FUNC_0 (struct xdr_stream*,struct rpc_rqst*,struct compound_hdr*) ;
 int FUNC_1 (struct xdr_stream*,int ,int ,struct compound_hdr*) ;
 int FUNC_2 (struct compound_hdr*) ;
 int FUNC_3 (struct xdr_stream*,int ,struct compound_hdr*) ;
 int FUNC_4 (struct xdr_stream*,int *,struct compound_hdr*) ;
 int FUNC_5 (int *) ;
 int VAR_1 ;
 int FUNC_6 (struct xdr_stream*,int *,int *) ;
 int FUNC_7 (int *,int,int ,int ,int ) ;

__attribute__((used)) static int
FUNC_8(struct rpc_rqst *VAR_2, __be32 *VAR_3,
  struct nfs_getaclargs *VAR_4)
{
 struct xdr_stream VAR_5;
 struct compound_hdr VAR_6 = {
  .minorversion = FUNC_5(&VAR_4->seq_args),
 };
 uint32_t VAR_7;

 FUNC_6(&VAR_5, &VAR_2->rq_snd_buf, VAR_3);
 FUNC_0(&VAR_5, VAR_2, &VAR_6);
 FUNC_4(&VAR_5, &VAR_4->seq_args, &VAR_6);
 FUNC_3(&VAR_5, VAR_4->fh, &VAR_6);
 VAR_7 = VAR_6.replen + VAR_1 + 1;
 FUNC_1(&VAR_5, VAR_0, 0, &VAR_6);

 FUNC_7(&VAR_2->rq_rcv_buf, VAR_7 << 2,
  VAR_4->acl_pages, VAR_4->acl_pgbase, VAR_4->acl_len);

 FUNC_2(&VAR_6);
 return 0;
}
