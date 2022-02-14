
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_3__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct svc_rqst {int dummy; } ;
struct TYPE_5__ {scalar_t__ fl_pid; } ;
struct nlm_lock {int oh; int fh; int len; int caller; scalar_t__ svid; TYPE_3__ fl; } ;
typedef scalar_t__ pid_t ;
struct TYPE_4__ {void* fsm_access; void* fsm_mode; int cookie; struct nlm_lock lock; } ;
typedef TYPE_1__ nlm_args ;
typedef int __be32 ;


 int VAR_0 ;
 int FUNC_0 (TYPE_3__*) ;
 int FUNC_1 (struct nlm_lock*,int ,int) ;
 int * FUNC_2 (int *,int *) ;
 int * FUNC_3 (int *,int *) ;
 int * FUNC_4 (int *,int *) ;
 void* FUNC_5 (int ) ;
 int FUNC_6 (struct svc_rqst*,int *) ;
 int * FUNC_7 (int *,int *,int *,int ) ;

int
FUNC_8(struct svc_rqst *VAR_1, __be32 *VAR_2, nlm_args *VAR_3)
{
 struct nlm_lock *VAR_4 = &VAR_3->lock;

 FUNC_1(VAR_4, 0, sizeof(*VAR_4));
 FUNC_0(&VAR_4->fl);
 VAR_4->svid = ~(u32) 0;
 VAR_4->fl.fl_pid = (pid_t)VAR_4->svid;

 if (!(VAR_2 = FUNC_2(VAR_2, &VAR_3->cookie))
  || !(VAR_2 = FUNC_7(VAR_2, &VAR_4->caller,
         &VAR_4->len, VAR_0))
  || !(VAR_2 = FUNC_3(VAR_2, &VAR_4->fh))
  || !(VAR_2 = FUNC_4(VAR_2, &VAR_4->oh)))
  return 0;
 VAR_3->fsm_mode = FUNC_5(*VAR_2++);
 VAR_3->fsm_access = FUNC_5(*VAR_2++);
 return FUNC_6(VAR_1, VAR_2);
}
