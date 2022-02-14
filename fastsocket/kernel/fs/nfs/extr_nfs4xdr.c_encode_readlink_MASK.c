
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xdr_stream {int dummy; } ;
struct rpc_rqst {int dummy; } ;
struct nfs4_readlink {int dummy; } ;
struct compound_hdr {int replen; int nops; } ;
typedef int __be32 ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 scalar_t__ VAR_1 ;
 int * FUNC_1 (struct xdr_stream*,int) ;

__attribute__((used)) static void FUNC_2(struct xdr_stream *VAR_2, const struct nfs4_readlink *VAR_3, struct rpc_rqst *VAR_4, struct compound_hdr *VAR_5)
{
 __be32 *VAR_6;

 VAR_6 = FUNC_1(VAR_2, 4);
 *VAR_6 = FUNC_0(VAR_0);
 VAR_5->nops++;
 VAR_5->replen += VAR_1;
}
