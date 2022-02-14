
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u64 ;
struct TYPE_4__ {int rv; int flags; void* owner; int end; int start; scalar_t__ number; int fsid; scalar_t__ pid; int optype; } ;
struct plock_op {scalar_t__ done; TYPE_2__ info; int list; } ;
struct file_lock {int fl_flags; scalar_t__ fl_owner; scalar_t__ fl_pid; TYPE_1__* fl_lmops; int fl_end; int fl_start; } ;
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
 int VAR_5 ;
 int VAR_6 ;
 struct dlm_ls* FUNC_0 (int *) ;
 int FUNC_1 (struct dlm_ls*) ;
 int FUNC_2 (struct plock_op*) ;
 struct plock_op* FUNC_3 (int,int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (struct dlm_ls*,char*,unsigned long long) ;
 int VAR_7 ;
 scalar_t__ FUNC_7 (struct file*,struct file_lock*) ;
 int VAR_8 ;
 int FUNC_8 (struct plock_op*) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int ,int) ;

int FUNC_12(dlm_lockspace_t *VAR_9, u64 VAR_10, struct file *VAR_11,
       struct file_lock *VAR_12)
{
 struct dlm_ls *VAR_13;
 struct plock_op *VAR_14;
 int VAR_15;

 VAR_13 = FUNC_0(VAR_9);
 if (!VAR_13)
  return -VAR_2;

 VAR_14 = FUNC_3(sizeof(*VAR_14), VAR_6);
 if (!VAR_14) {
  VAR_15 = -VAR_4;
  goto out;
 }

 if (FUNC_7(VAR_11, VAR_12) < 0)
  FUNC_6(VAR_13, "dlm_posix_unlock: vfs unlock error %llx",
     (unsigned long long)VAR_10);

 VAR_14->info.optype = VAR_1;
 VAR_14->info.pid = VAR_12->fl_pid;
 VAR_14->info.fsid = VAR_13->ls_global_id;
 VAR_14->info.number = VAR_10;
 VAR_14->info.start = VAR_12->fl_start;
 VAR_14->info.end = VAR_12->fl_end;
 if (VAR_12->fl_lmops && VAR_12->fl_lmops->fl_grant)
  VAR_14->info.owner = (__u64) VAR_12->fl_pid;
 else
  VAR_14->info.owner = (__u64)(long) VAR_12->fl_owner;

 if (VAR_12->fl_flags & VAR_5) {
  VAR_14->info.flags |= VAR_0;
  FUNC_8(VAR_14);
  VAR_15 = 0;
  goto out;
 }

 FUNC_8(VAR_14);
 FUNC_11(VAR_8, (VAR_14->done != 0));

 FUNC_9(&VAR_7);
 if (!FUNC_5(&VAR_14->list)) {
  FUNC_6(VAR_13, "dlm_posix_unlock: op on list %llx",
     (unsigned long long)VAR_10);
  FUNC_4(&VAR_14->list);
 }
 FUNC_10(&VAR_7);

 VAR_15 = VAR_14->info.rv;

 if (VAR_15 == -VAR_3)
  VAR_15 = 0;

 FUNC_2(VAR_14);
out:
 FUNC_1(VAR_13);
 return VAR_15;
}
