
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ c_cc; } ;
struct tty {int t_state; size_t t_line; TYPE_1__ t_outq; } ;
struct TYPE_4__ {int (* l_start ) (struct tty*) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct tty*) ;
 TYPE_2__* VAR_3 ;
 int FUNC_1 (struct tty*) ;

__attribute__((used)) static void
FUNC_2(struct tty *VAR_4)
{
 if (VAR_4->t_state & (VAR_1 | VAR_0 | VAR_2))
  goto out;
 if (VAR_4->t_outq.c_cc == 0)
  goto out;
 VAR_4->t_state |= VAR_0;
 FUNC_0(VAR_4);
 return;

out:
 (*VAR_3[VAR_4->t_line].l_start)(VAR_4);
 return;
}
