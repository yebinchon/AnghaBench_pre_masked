
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xdr_stream {int dummy; } ;
struct rpc_rqst {int rq_rcv_buf; } ;
struct mountres {scalar_t__ errno; } ;
typedef int __be32 ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct xdr_stream*,struct mountres*) ;
 int FUNC_1 (struct xdr_stream*,struct mountres*) ;
 int FUNC_2 (struct xdr_stream*,struct mountres*) ;
 scalar_t__ FUNC_3 (int) ;
 int FUNC_4 (struct xdr_stream*,int *,int *) ;

__attribute__((used)) static int FUNC_5(struct rpc_rqst *VAR_1, __be32 *VAR_2,
        struct mountres *VAR_3)
{
 struct xdr_stream VAR_4;
 int VAR_5;

 FUNC_4(&VAR_4, &VAR_1->rq_rcv_buf, VAR_2);

 VAR_5 = FUNC_2(&VAR_4, VAR_3);
 if (FUNC_3(VAR_5 != 0 || VAR_3->errno != 0))
  return VAR_5;
 VAR_5 = FUNC_1(&VAR_4, VAR_3);
 if (FUNC_3(VAR_5 != 0)) {
  VAR_3->errno = -VAR_0;
  return 0;
 }
 return FUNC_0(&VAR_4, VAR_3);
}
