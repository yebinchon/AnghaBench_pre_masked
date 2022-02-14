
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pid {int dummy; } ;
struct TYPE_2__ {int pid_type; int lock; int euid; int uid; scalar_t__ pid; } ;
struct file {TYPE_1__ f_owner; } ;
struct cred {int euid; int uid; } ;
typedef enum pid_type { ____Placeholder_pid_type } pid_type ;


 struct cred* FUNC_0 () ;
 scalar_t__ FUNC_1 (struct pid*) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static void FUNC_5(struct file *VAR_0, struct pid *VAR_1, enum pid_type VAR_2,
                     int VAR_3)
{
 FUNC_3(&VAR_0->f_owner.lock);
 if (VAR_3 || !VAR_0->f_owner.pid) {
  FUNC_2(VAR_0->f_owner.pid);
  VAR_0->f_owner.pid = FUNC_1(VAR_1);
  VAR_0->f_owner.pid_type = VAR_2;

  if (VAR_1) {
   const struct cred *VAR_4 = FUNC_0();
   VAR_0->f_owner.uid = VAR_4->uid;
   VAR_0->f_owner.euid = VAR_4->euid;
  }
 }
 FUNC_4(&VAR_0->f_owner.lock);
}
