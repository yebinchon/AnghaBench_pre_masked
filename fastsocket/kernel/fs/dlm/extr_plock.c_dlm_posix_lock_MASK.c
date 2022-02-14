
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u64 ;
struct TYPE_4__ {int ex; int rv; void* owner; int end; int start; scalar_t__ number; int fsid; int wait; scalar_t__ pid; int optype; } ;
struct plock_op {scalar_t__ done; TYPE_2__ info; int list; } ;
struct plock_xop {int * callback; struct file* file; struct file_lock* fl; int flc; struct plock_op xop; } ;
struct file_lock {scalar_t__ fl_type; scalar_t__ fl_owner; TYPE_1__* fl_lmops; scalar_t__ fl_pid; int fl_end; int fl_start; } ;
struct file {int dummy; } ;
struct dlm_ls {int ls_global_id; } ;
typedef int dlm_lockspace_t ;
typedef void* __u64 ;
struct TYPE_3__ {int * fl_grant; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int) ;
 struct dlm_ls* FUNC_1 (int *) ;
 int FUNC_2 (struct dlm_ls*) ;
 int FUNC_3 (struct dlm_ls*,scalar_t__,struct file*,struct file_lock*) ;
 int FUNC_4 (struct plock_xop*) ;
 struct plock_xop* FUNC_5 (int,int ) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *,struct file_lock*) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (struct dlm_ls*,char*,unsigned long long) ;
 int FUNC_11 (struct dlm_ls*,char*,unsigned long long) ;
 int VAR_7 ;
 scalar_t__ FUNC_12 (struct file*,struct file_lock*) ;
 int VAR_8 ;
 int FUNC_13 (struct plock_op*) ;
 int FUNC_14 (int *) ;
 int FUNC_15 (int *) ;
 int FUNC_16 (int ,int) ;

int FUNC_17(dlm_lockspace_t *VAR_9, u64 VAR_10, struct file *VAR_11,
     int VAR_12, struct file_lock *VAR_13)
{
 struct dlm_ls *VAR_14;
 struct plock_op *VAR_15;
 struct plock_xop *VAR_16;
 int VAR_17;

 VAR_14 = FUNC_1(VAR_9);
 if (!VAR_14)
  return -VAR_1;

 VAR_16 = FUNC_5(sizeof(*VAR_16), VAR_6);
 if (!VAR_16) {
  VAR_17 = -VAR_2;
  goto out;
 }

 VAR_15 = &VAR_16->xop;
 VAR_15->info.optype = VAR_0;
 VAR_15->info.pid = VAR_13->fl_pid;
 VAR_15->info.ex = (VAR_13->fl_type == VAR_5);
 VAR_15->info.wait = FUNC_0(VAR_12);
 VAR_15->info.fsid = VAR_14->ls_global_id;
 VAR_15->info.number = VAR_10;
 VAR_15->info.start = VAR_13->fl_start;
 VAR_15->info.end = VAR_13->fl_end;
 if (VAR_13->fl_lmops && VAR_13->fl_lmops->fl_grant) {


  VAR_15->info.owner = (__u64) VAR_13->fl_pid;
  VAR_16->callback = VAR_13->fl_lmops->fl_grant;
  FUNC_9(&VAR_16->flc);
  FUNC_8(&VAR_16->flc, VAR_13);
  VAR_16->fl = VAR_13;
  VAR_16->file = VAR_11;
 } else {
  VAR_15->info.owner = (__u64)(long) VAR_13->fl_owner;
  VAR_16->callback = ((void*)0);
 }

 FUNC_13(VAR_15);

 if (VAR_16->callback == ((void*)0)) {
  VAR_17 = FUNC_16(VAR_8, (VAR_15->done != 0));
  if (VAR_17 == -VAR_3) {
   FUNC_10(VAR_14, "dlm_posix_lock: wait killed %llx",
      (unsigned long long)VAR_10);
   FUNC_14(&VAR_7);
   FUNC_6(&VAR_15->list);
   FUNC_15(&VAR_7);
   FUNC_4(VAR_16);
   FUNC_3(VAR_14, VAR_10, VAR_11, VAR_13);
   goto out;
  }
 } else {
  VAR_17 = VAR_4;
  goto out;
 }

 FUNC_14(&VAR_7);
 if (!FUNC_7(&VAR_15->list)) {
  FUNC_11(VAR_14, "dlm_posix_lock: op on list %llx",
     (unsigned long long)VAR_10);
  FUNC_6(&VAR_15->list);
 }
 FUNC_15(&VAR_7);

 VAR_17 = VAR_15->info.rv;

 if (!VAR_17) {
  if (FUNC_12(VAR_11, VAR_13) < 0)
   FUNC_11(VAR_14, "dlm_posix_lock: vfs lock error %llx",
      (unsigned long long)VAR_10);
 }

 FUNC_4(VAR_16);
out:
 FUNC_2(VAR_14);
 return VAR_17;
}
