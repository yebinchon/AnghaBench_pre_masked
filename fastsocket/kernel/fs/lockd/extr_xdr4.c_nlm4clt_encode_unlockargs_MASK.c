
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct rpc_rqst {int rq_svec; int rq_slen; } ;
struct nlm_lock {int dummy; } ;
struct TYPE_3__ {int cookie; struct nlm_lock lock; } ;
typedef TYPE_1__ nlm_args ;
typedef int __be32 ;


 int VAR_0 ;
 int * FUNC_0 (int *,int *) ;
 int * FUNC_1 (int *,struct nlm_lock*) ;
 int FUNC_2 (int ,int *) ;

__attribute__((used)) static int
FUNC_3(struct rpc_rqst *VAR_1, __be32 *VAR_2, nlm_args *VAR_3)
{
 struct nlm_lock *VAR_4 = &VAR_3->lock;

 if (!(VAR_2 = FUNC_0(VAR_2, &VAR_3->cookie)))
  return -VAR_0;
 if (!(VAR_2 = FUNC_1(VAR_2, VAR_4)))
  return -VAR_0;
 VAR_1->rq_slen = FUNC_2(VAR_1->rq_svec, VAR_2);
 return 0;
}
