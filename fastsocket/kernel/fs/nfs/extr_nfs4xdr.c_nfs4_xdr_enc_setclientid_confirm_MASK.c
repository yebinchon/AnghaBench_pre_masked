
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct xdr_stream {int dummy; } ;
struct rpc_rqst {int rq_snd_buf; } ;
struct nfs4_setclientid_res {int dummy; } ;
struct compound_hdr {int nops; } ;
typedef int __be32 ;


 int const VAR_0 ;
 int FUNC_0 (struct xdr_stream*,struct rpc_rqst*,struct compound_hdr*) ;
 int FUNC_1 (struct xdr_stream*,int const*,struct compound_hdr*) ;
 int FUNC_2 (struct compound_hdr*) ;
 int FUNC_3 (struct xdr_stream*,struct compound_hdr*) ;
 int FUNC_4 (struct xdr_stream*,struct nfs4_setclientid_res*,struct compound_hdr*) ;
 int FUNC_5 (struct xdr_stream*,int *,int *) ;

__attribute__((used)) static int FUNC_6(struct rpc_rqst *VAR_1, __be32 *VAR_2, struct nfs4_setclientid_res *VAR_3)
{
 struct xdr_stream VAR_4;
 struct compound_hdr VAR_5 = {
  .nops = 0,
 };
 const u32 VAR_6[2] = { VAR_0, 0 };

 FUNC_5(&VAR_4, &VAR_1->rq_snd_buf, VAR_2);
 FUNC_0(&VAR_4, VAR_1, &VAR_5);
 FUNC_4(&VAR_4, VAR_3, &VAR_5);
 FUNC_3(&VAR_4, &VAR_5);
 FUNC_1(&VAR_4, VAR_6, &VAR_5);
 FUNC_2(&VAR_5);
 return 0;
}
