
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct tty_audit_buf {int mutex; } ;
struct TYPE_6__ {TYPE_2__* sighand; TYPE_1__* signal; } ;
struct TYPE_5__ {int siglock; } ;
struct TYPE_4__ {struct tty_audit_buf* tty_audit_buf; } ;


 TYPE_3__* VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct tty_audit_buf*) ;
 int FUNC_5 (struct tty_audit_buf*) ;

void FUNC_6(void)
{
 struct tty_audit_buf *VAR_1;

 FUNC_2(&VAR_0->sighand->siglock);
 VAR_1 = VAR_0->signal->tty_audit_buf;
 VAR_0->signal->tty_audit_buf = ((void*)0);
 FUNC_3(&VAR_0->sighand->siglock);
 if (!VAR_1)
  return;

 FUNC_0(&VAR_1->mutex);
 FUNC_4(VAR_1);
 FUNC_1(&VAR_1->mutex);

 FUNC_5(VAR_1);
}
