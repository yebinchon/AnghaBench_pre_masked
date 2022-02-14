
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xdr_stream {int dummy; } ;
struct rpc_rqst {int rq_snd_buf; } ;
struct nsm_args {int dummy; } ;
typedef int __be32 ;


 int FUNC_0 (struct xdr_stream*,struct nsm_args const*) ;
 int FUNC_1 (struct xdr_stream*,int *,int *) ;

__attribute__((used)) static int FUNC_2(struct rpc_rqst *VAR_0, __be32 *VAR_1,
    const struct nsm_args *VAR_2)
{
 struct xdr_stream VAR_3;

 FUNC_1(&VAR_3, &VAR_0->rq_snd_buf, VAR_1);
 return FUNC_0(&VAR_3, VAR_2);
}
