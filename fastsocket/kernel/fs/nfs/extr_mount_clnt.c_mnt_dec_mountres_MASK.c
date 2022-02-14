
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xdr_stream {int dummy; } ;
struct rpc_rqst {int rq_rcv_buf; } ;
struct mountres {scalar_t__ errno; } ;
typedef int __be32 ;


 int FUNC_0 (struct xdr_stream*,struct mountres*) ;
 int FUNC_1 (struct xdr_stream*,struct mountres*) ;
 scalar_t__ FUNC_2 (int) ;
 int FUNC_3 (struct xdr_stream*,int *,int *) ;

__attribute__((used)) static int FUNC_4(struct rpc_rqst *VAR_0, __be32 *VAR_1,
       struct mountres *VAR_2)
{
 struct xdr_stream VAR_3;
 int VAR_4;

 FUNC_3(&VAR_3, &VAR_0->rq_rcv_buf, VAR_1);

 VAR_4 = FUNC_1(&VAR_3, VAR_2);
 if (FUNC_2(VAR_4 != 0 || VAR_2->errno != 0))
  return VAR_4;
 return FUNC_0(&VAR_3, VAR_2);
}
