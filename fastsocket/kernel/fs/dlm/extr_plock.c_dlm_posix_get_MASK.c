
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u64 ;
struct TYPE_4__ {int ex; int rv; int end; int start; scalar_t__ pid; void* owner; scalar_t__ number; int fsid; int optype; } ;
struct plock_op {scalar_t__ done; TYPE_2__ info; int list; } ;
struct file_lock {scalar_t__ fl_type; int fl_end; int fl_start; scalar_t__ fl_pid; int fl_flags; scalar_t__ fl_owner; TYPE_1__* fl_lmops; } ;
struct file {int dummy; } ;
struct dlm_ls {int ls_global_id; } ;
typedef int dlm_lockspace_t ;
typedef void* __u64 ;
struct TYPE_3__ {scalar_t__ fl_grant; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 struct dlm_ls* FUNC_0 (int *) ;
 int FUNC_1 (struct dlm_ls*) ;
 int FUNC_2 (struct plock_op*) ;
 struct plock_op* FUNC_3 (int,int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (struct file_lock*) ;
 int FUNC_7 (struct dlm_ls*,char*,unsigned long long) ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_8 (struct plock_op*) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int ,int) ;

int FUNC_12(dlm_lockspace_t *VAR_11, u64 VAR_12, struct file *VAR_13,
    struct file_lock *VAR_14)
{
 struct dlm_ls *VAR_15;
 struct plock_op *VAR_16;
 int VAR_17;

 VAR_15 = FUNC_0(VAR_11);
 if (!VAR_15)
  return -VAR_1;

 VAR_16 = FUNC_3(sizeof(*VAR_16), VAR_8);
 if (!VAR_16) {
  VAR_17 = -VAR_3;
  goto out;
 }

 VAR_16->info.optype = VAR_0;
 VAR_16->info.pid = VAR_14->fl_pid;
 VAR_16->info.ex = (VAR_14->fl_type == VAR_7);
 VAR_16->info.fsid = VAR_15->ls_global_id;
 VAR_16->info.number = VAR_12;
 VAR_16->info.start = VAR_14->fl_start;
 VAR_16->info.end = VAR_14->fl_end;
 if (VAR_14->fl_lmops && VAR_14->fl_lmops->fl_grant)
  VAR_16->info.owner = (__u64) VAR_14->fl_pid;
 else
  VAR_16->info.owner = (__u64)(long) VAR_14->fl_owner;

 FUNC_8(VAR_16);
 FUNC_11(VAR_10, (VAR_16->done != 0));

 FUNC_9(&VAR_9);
 if (!FUNC_5(&VAR_16->list)) {
  FUNC_7(VAR_15, "dlm_posix_get: op on list %llx",
     (unsigned long long)VAR_12);
  FUNC_4(&VAR_16->list);
 }
 FUNC_10(&VAR_9);




 VAR_17 = VAR_16->info.rv;

 VAR_14->fl_type = VAR_6;
 if (VAR_17 == -VAR_2)
  VAR_17 = 0;
 else if (VAR_17 > 0) {
  FUNC_6(VAR_14);
  VAR_14->fl_type = (VAR_16->info.ex) ? VAR_7 : VAR_5;
  VAR_14->fl_flags = VAR_4;
  VAR_14->fl_pid = VAR_16->info.pid;
  VAR_14->fl_start = VAR_16->info.start;
  VAR_14->fl_end = VAR_16->info.end;
  VAR_17 = 0;
 }

 FUNC_2(VAR_16);
out:
 FUNC_1(VAR_15);
 return VAR_17;
}
