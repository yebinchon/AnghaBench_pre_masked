
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ c_cc; } ;
struct tty {int t_state; scalar_t__ t_lowat; size_t t_line; TYPE_1__ t_outq; } ;
struct TYPE_4__ {int (* l_start ) (struct tty*) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct tty*) ;
 int VAR_4 ;
 TYPE_2__* VAR_5 ;
 int FUNC_1 (struct tty*) ;
 int FUNC_2 (int ,struct tty*,int ) ;

__attribute__((used)) static void
FUNC_3(struct tty *VAR_6)
{
 if (VAR_6->t_state & (VAR_1 | VAR_0 | VAR_2))
  goto out;
 if (VAR_6->t_outq.c_cc == 0)
  goto out;
 VAR_6->t_state |= VAR_0;
 if (VAR_6->t_outq.c_cc > VAR_6->t_lowat) {



  FUNC_0(VAR_6);
 } else {







  FUNC_0(VAR_6);

 }
 return;

out:
 (*VAR_5[VAR_6->t_line].l_start) (VAR_6);
 return;
}
