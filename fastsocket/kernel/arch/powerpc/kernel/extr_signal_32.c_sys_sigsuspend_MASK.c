
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int old_sigset_t ;
struct TYPE_4__ {int state; TYPE_1__* sighand; int blocked; int saved_sigmask; } ;
struct TYPE_3__ {int siglock; } ;


 long VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_2__* VAR_3 ;
 int FUNC_0 () ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 int FUNC_3 (int *,int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

long FUNC_6(old_sigset_t VAR_4)
{
 VAR_4 &= VAR_2;
 FUNC_4(&VAR_3->sighand->siglock);
 VAR_3->saved_sigmask = VAR_3->blocked;
 FUNC_3(&VAR_3->blocked, VAR_4);
 FUNC_0();
 FUNC_5(&VAR_3->sighand->siglock);

  VAR_3->state = VAR_1;
  FUNC_1();
 FUNC_2();
  return -VAR_0;
}
