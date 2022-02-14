
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct signal_struct {int * tty_audit_buf; int audit_tty_log_passwd; int audit_tty; } ;
struct TYPE_6__ {TYPE_2__* sighand; TYPE_1__* signal; } ;
struct TYPE_5__ {int siglock; } ;
struct TYPE_4__ {int audit_tty_log_passwd; int audit_tty; } ;


 TYPE_3__* VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;

void FUNC_2(struct signal_struct *VAR_1)
{
 FUNC_0(&VAR_0->sighand->siglock);
 VAR_1->audit_tty = VAR_0->signal->audit_tty;
 VAR_1->audit_tty_log_passwd = VAR_0->signal->audit_tty_log_passwd;
 FUNC_1(&VAR_0->sighand->siglock);
 VAR_1->tty_audit_buf = ((void*)0);
}
