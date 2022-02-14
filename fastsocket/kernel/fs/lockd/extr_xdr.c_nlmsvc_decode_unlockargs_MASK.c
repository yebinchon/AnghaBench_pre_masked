
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_4__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct svc_rqst {int dummy; } ;
struct TYPE_5__ {int fl_type; } ;
struct TYPE_7__ {TYPE_1__ fl; } ;
struct TYPE_6__ {TYPE_4__ lock; int cookie; } ;
typedef TYPE_2__ nlm_args ;
typedef int __be32 ;


 int VAR_0 ;
 int * FUNC_0 (int *,int *) ;
 int * FUNC_1 (int *,TYPE_4__*) ;
 int FUNC_2 (struct svc_rqst*,int *) ;

int
FUNC_3(struct svc_rqst *VAR_1, __be32 *VAR_2, nlm_args *VAR_3)
{
 if (!(VAR_2 = FUNC_0(VAR_2, &VAR_3->cookie))
  || !(VAR_2 = FUNC_1(VAR_2, &VAR_3->lock)))
  return 0;
 VAR_3->lock.fl.fl_type = VAR_0;
 return FUNC_2(VAR_1, VAR_2);
}
