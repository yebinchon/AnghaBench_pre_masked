
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct pt_regs {int dummy; } ;
typedef int old_sigset_t ;
struct TYPE_4__ {int state; TYPE_1__* sighand; int blocked; int saved_sigmask; } ;
struct TYPE_3__ {int siglock; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 TYPE_2__* VAR_4 ;
 int FUNC_0 () ;
 int FUNC_1 () ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int *,int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

int FUNC_6(old_sigset_t VAR_5, long VAR_6, long VAR_7, long VAR_8, long VAR_9,
 long VAR_10, struct pt_regs *VAR_11)
{
 VAR_5 &= VAR_3;
 FUNC_4(&VAR_4->sighand->siglock);
 VAR_4->saved_sigmask = VAR_4->blocked;
 FUNC_3(&VAR_4->blocked, VAR_5);
 FUNC_0();
 FUNC_5(&VAR_4->sighand->siglock);
 VAR_4->state = VAR_1;
 FUNC_1();
 FUNC_2(VAR_2);
 return -VAR_0;
}
