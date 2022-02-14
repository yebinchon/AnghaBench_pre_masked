
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xdr_stream {int dummy; } ;
struct rpc_rqst {int rq_snd_buf; } ;
struct nfs4_setclientid {int dummy; } ;
struct compound_hdr {int nops; } ;
typedef int __be32 ;


 int FUNC_0 (struct xdr_stream*,struct rpc_rqst*,struct compound_hdr*) ;
 int FUNC_1 (struct compound_hdr*) ;
 int FUNC_2 (struct xdr_stream*,struct nfs4_setclientid*,struct compound_hdr*) ;
 int FUNC_3 (struct xdr_stream*,int *,int *) ;

__attribute__((used)) static int FUNC_4(struct rpc_rqst *VAR_0, __be32 *VAR_1, struct nfs4_setclientid *VAR_2)
{
 struct xdr_stream VAR_3;
 struct compound_hdr VAR_4 = {
  .nops = 0,
 };

 FUNC_3(&VAR_3, &VAR_0->rq_snd_buf, VAR_1);
 FUNC_0(&VAR_3, VAR_0, &VAR_4);
 FUNC_2(&VAR_3, VAR_2, &VAR_4);
 FUNC_1(&VAR_4);
 return 0;
}
