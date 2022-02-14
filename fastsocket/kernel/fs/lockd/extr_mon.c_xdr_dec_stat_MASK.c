
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct xdr_stream {int dummy; } ;
struct rpc_rqst {int rq_rcv_buf; } ;
struct nsm_res {int state; } ;
typedef int __be32 ;


 int VAR_0 ;
 int FUNC_0 (char*,int ) ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (struct xdr_stream*,int *,int *) ;
 int * FUNC_4 (struct xdr_stream*,int) ;

__attribute__((used)) static int FUNC_5(struct rpc_rqst *VAR_1, __be32 *VAR_2,
   struct nsm_res *VAR_3)
{
 struct xdr_stream VAR_4;

 FUNC_3(&VAR_4, &VAR_1->rq_rcv_buf, VAR_2);
 VAR_2 = FUNC_4(&VAR_4, sizeof(u32));
 if (FUNC_2(VAR_2 == ((void*)0)))
  return -VAR_0;
 VAR_3->state = FUNC_1(*VAR_2);

 FUNC_0("lockd: xdr_dec_stat state %d\n", VAR_3->state);
 return 0;
}
