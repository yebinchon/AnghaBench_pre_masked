
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct rpc_rqst {int rq_svec; int rq_slen; } ;
struct TYPE_4__ {scalar_t__ fl_type; } ;
struct nlm_lock {TYPE_1__ fl; } ;
struct TYPE_5__ {int state; scalar_t__ reclaim; scalar_t__ block; int cookie; struct nlm_lock lock; } ;
typedef TYPE_2__ nlm_args ;
typedef int __be32 ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int ) ;
 int * FUNC_1 (int *,int *) ;
 int * FUNC_2 (int *,struct nlm_lock*) ;
 int FUNC_3 (int ,int *) ;
 void* VAR_2 ;
 void* VAR_3 ;

__attribute__((used)) static int
FUNC_4(struct rpc_rqst *VAR_4, __be32 *VAR_5, nlm_args *VAR_6)
{
 struct nlm_lock *VAR_7 = &VAR_6->lock;

 if (!(VAR_5 = FUNC_1(VAR_5, &VAR_6->cookie)))
  return -VAR_0;
 *VAR_5++ = VAR_6->block? VAR_2 : VAR_3;
 *VAR_5++ = (VAR_7->fl.fl_type == VAR_1)? VAR_2 : VAR_3;
 if (!(VAR_5 = FUNC_2(VAR_5, VAR_7)))
  return -VAR_0;
 *VAR_5++ = VAR_6->reclaim? VAR_2 : VAR_3;
 *VAR_5++ = FUNC_0(VAR_6->state);
 VAR_4->rq_slen = FUNC_3(VAR_4->rq_svec, VAR_5);
 return 0;
}
