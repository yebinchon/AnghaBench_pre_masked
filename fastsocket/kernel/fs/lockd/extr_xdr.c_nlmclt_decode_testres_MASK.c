
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef void* u32 ;
struct rpc_rqst {int dummy; } ;
struct file_lock {void* fl_end; void* fl_start; int fl_type; int fl_flags; scalar_t__ fl_pid; } ;
struct TYPE_2__ {int oh; void* svid; struct file_lock fl; } ;
struct nlm_res {scalar_t__ status; TYPE_1__ lock; int cookie; } ;
typedef scalar_t__ s32 ;
typedef scalar_t__ pid_t ;
typedef int __be32 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 void* VAR_4 ;
 int FUNC_0 (struct file_lock*) ;
 int FUNC_1 (TYPE_1__*,int ,int) ;
 int * FUNC_2 (int *,int *) ;
 int * FUNC_3 (int *,int *) ;
 scalar_t__ VAR_5 ;
 void* FUNC_4 (int ) ;
 void* FUNC_5 (scalar_t__) ;

__attribute__((used)) static int
FUNC_6(struct rpc_rqst *VAR_6, __be32 *VAR_7, struct nlm_res *VAR_8)
{
 if (!(VAR_7 = FUNC_2(VAR_7, &VAR_8->cookie)))
  return -VAR_0;
 VAR_8->status = *VAR_7++;
 if (VAR_8->status == VAR_5) {
  struct file_lock *VAR_9 = &VAR_8->lock.fl;
  u32 VAR_10;
  s32 VAR_11, VAR_12, VAR_13;

  FUNC_1(&VAR_8->lock, 0, sizeof(VAR_8->lock));
  FUNC_0(VAR_9);
  VAR_10 = FUNC_4(*VAR_7++);
  VAR_8->lock.svid = FUNC_4(*VAR_7++);
  VAR_9->fl_pid = (pid_t)VAR_8->lock.svid;
  if (!(VAR_7 = FUNC_3(VAR_7, &VAR_8->lock.oh)))
   return -VAR_0;

  VAR_9->fl_flags = VAR_1;
  VAR_9->fl_type = VAR_10? VAR_3 : VAR_2;
  VAR_11 = FUNC_4(*VAR_7++);
  VAR_12 = FUNC_4(*VAR_7++);
  VAR_13 = VAR_11 + VAR_12 - 1;

  VAR_9->fl_start = FUNC_5(VAR_11);
  if (VAR_12 == 0 || VAR_13 < 0)
   VAR_9->fl_end = VAR_4;
  else
   VAR_9->fl_end = FUNC_5(VAR_13);
 }
 return 0;
}
