
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct serial_state {int dummy; } ;
struct TYPE_5__ {int * buf; } ;
struct async_struct {int flags; int MCR; TYPE_3__* tty; scalar_t__ IER; TYPE_1__ xmit; int delta_msr_wait; int line; struct serial_state* state; } ;
struct TYPE_8__ {int intena; int adkcon; } ;
struct TYPE_7__ {int flags; TYPE_2__* termios; } ;
struct TYPE_6__ {int c_cflag; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int * VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 TYPE_4__ VAR_10 ;
 int FUNC_0 (int ,struct async_struct*) ;
 int FUNC_1 (unsigned long) ;
 int FUNC_2 (unsigned long) ;
 int FUNC_3 (unsigned long) ;
 int FUNC_4 () ;
 int FUNC_5 (char*,int ) ;
 int FUNC_6 (int) ;
 int FUNC_7 (int ,int *) ;
 int FUNC_8 (int *) ;

__attribute__((used)) static void FUNC_9(struct async_struct * VAR_11)
{
 unsigned long VAR_12;
 struct serial_state *VAR_13;

 if (!(VAR_11->flags & VAR_1))
  return;

 VAR_13 = VAR_11->state;





 FUNC_3(VAR_12);





 FUNC_8(&VAR_11->delta_msr_wait);

 VAR_6 = ((void*)0);




 FUNC_0(VAR_5, VAR_11);

 if (VAR_11->xmit.buf) {
  FUNC_1((unsigned long) VAR_11->xmit.buf);
  VAR_11->xmit.buf = ((void*)0);
 }

 VAR_11->IER = 0;
 VAR_10.intena = VAR_3 | VAR_4;
 FUNC_4();


 VAR_10.adkcon = VAR_0;
 FUNC_4();

 if (!VAR_11->tty || (VAR_11->tty->termios->c_cflag & VAR_2))
  VAR_11->MCR &= ~(VAR_7|VAR_8);
 FUNC_6(VAR_11->MCR);

 if (VAR_11->tty)
  FUNC_7(VAR_9, &VAR_11->tty->flags);

 VAR_11->flags &= ~VAR_1;
 FUNC_2(VAR_12);
}
