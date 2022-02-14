
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct tty_struct {int index; TYPE_3__* driver; } ;
struct tty_audit_buf {int major; int minor; int mutex; int count; } ;
struct TYPE_8__ {TYPE_2__* sighand; TYPE_1__* signal; } ;
struct TYPE_7__ {int major; int minor_start; } ;
struct TYPE_6__ {int siglock; } ;
struct TYPE_5__ {struct tty_audit_buf* tty_audit_buf; int audit_tty; } ;


 int FUNC_0 (int *) ;
 TYPE_4__* VAR_0 ;
 scalar_t__ FUNC_1 (int) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (struct tty_audit_buf*) ;
 int FUNC_7 (struct tty_audit_buf*) ;

void FUNC_8(struct tty_struct *VAR_1)
{
 struct tty_audit_buf *VAR_2;

 FUNC_4(&VAR_0->sighand->siglock);
 if (FUNC_1(!VAR_0->signal->audit_tty)) {
  FUNC_5(&VAR_0->sighand->siglock);
  return;
 }
 VAR_2 = VAR_0->signal->tty_audit_buf;
 if (VAR_2)
  FUNC_0(&VAR_2->count);
 FUNC_5(&VAR_0->sighand->siglock);

 if (VAR_2) {
  int VAR_3, VAR_4;

  VAR_3 = VAR_1->driver->major;
  VAR_4 = VAR_1->driver->minor_start + VAR_1->index;
  FUNC_2(&VAR_2->mutex);
  if (VAR_2->major == VAR_3 && VAR_2->minor == VAR_4)
   FUNC_6(VAR_2);
  FUNC_3(&VAR_2->mutex);
  FUNC_7(VAR_2);
 }
}
