
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uid_t ;
typedef int u32 ;
struct tty_audit_buf {int mutex; int count; } ;
struct task_struct {TYPE_1__* sighand; TYPE_2__* signal; } ;
struct TYPE_4__ {struct tty_audit_buf* tty_audit_buf; } ;
struct TYPE_3__ {int siglock; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (struct task_struct*,int ,int ,struct tty_audit_buf*) ;
 int FUNC_6 (struct tty_audit_buf*) ;

void FUNC_7(struct task_struct *VAR_0, uid_t VAR_1, u32 VAR_2)
{
 struct tty_audit_buf *VAR_3;

 FUNC_3(&VAR_0->sighand->siglock);
 VAR_3 = VAR_0->signal->tty_audit_buf;
 if (VAR_3)
  FUNC_0(&VAR_3->count);
 FUNC_4(&VAR_0->sighand->siglock);
 if (!VAR_3)
  return;

 FUNC_1(&VAR_3->mutex);
 FUNC_5(VAR_0, VAR_1, VAR_2, VAR_3);
 FUNC_2(&VAR_3->mutex);

 FUNC_6(VAR_3);
}
