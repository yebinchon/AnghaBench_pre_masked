
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xdr_stream {int dummy; } ;
struct rpc_rqst {int rq_rcv_buf; } ;
struct nfs_writeres {int count; int server; int fattr; int seq_res; } ;
struct compound_hdr {int dummy; } ;
typedef int __be32 ;


 int FUNC_0 (struct xdr_stream*,struct compound_hdr*) ;
 int FUNC_1 (struct xdr_stream*,int ,int ) ;
 int FUNC_2 (struct xdr_stream*) ;
 int FUNC_3 (struct xdr_stream*,int *,struct rpc_rqst*) ;
 int FUNC_4 (struct xdr_stream*,struct nfs_writeres*) ;
 int FUNC_5 (struct xdr_stream*,int *,int *) ;

__attribute__((used)) static int FUNC_6(struct rpc_rqst *VAR_0, __be32 *VAR_1, struct nfs_writeres *VAR_2)
{
 struct xdr_stream VAR_3;
 struct compound_hdr VAR_4;
 int VAR_5;

 FUNC_5(&VAR_3, &VAR_0->rq_rcv_buf, VAR_1);
 VAR_5 = FUNC_0(&VAR_3, &VAR_4);
 if (VAR_5)
  goto out;
 VAR_5 = FUNC_3(&VAR_3, &VAR_2->seq_res, VAR_0);
 if (VAR_5)
  goto out;
 VAR_5 = FUNC_2(&VAR_3);
 if (VAR_5)
  goto out;
 VAR_5 = FUNC_4(&VAR_3, VAR_2);
 if (VAR_5)
  goto out;
 if (VAR_2->fattr)
  FUNC_1(&VAR_3, VAR_2->fattr, VAR_2->server);
 if (!VAR_5)
  VAR_5 = VAR_2->count;
out:
 return VAR_5;
}
