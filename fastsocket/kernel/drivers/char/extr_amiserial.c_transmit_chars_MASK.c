
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_9__ {int head; int tail; int* buf; } ;
struct async_struct {int x_char; int IER; TYPE_4__ xmit; TYPE_3__* state; TYPE_1__* tty; } ;
struct TYPE_10__ {int serdat; void* intena; void* intreq; } ;
struct TYPE_7__ {int tx; } ;
struct TYPE_8__ {TYPE_2__ icount; } ;
struct TYPE_6__ {scalar_t__ hw_stopped; scalar_t__ stopped; } ;


 scalar_t__ FUNC_0 (int,int,int) ;
 void* VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 TYPE_5__ VAR_5 ;
 int FUNC_1 () ;
 int FUNC_2 (char*) ;
 int FUNC_3 (struct async_struct*,int ) ;

__attribute__((used)) static void FUNC_4(struct async_struct *VAR_6)
{
 VAR_5.intreq = VAR_0;
 FUNC_1();
 if (VAR_6->x_char) {
         VAR_5.serdat = VAR_6->x_char | 0x100;
  FUNC_1();
  VAR_6->state->icount.tx++;
  VAR_6->x_char = 0;
  return;
 }
 if (VAR_6->xmit.head == VAR_6->xmit.tail
     || VAR_6->tty->stopped
     || VAR_6->tty->hw_stopped) {
  VAR_6->IER &= ~VAR_3;
         VAR_5.intena = VAR_0;
  FUNC_1();
  return;
 }

 VAR_5.serdat = VAR_6->xmit.buf[VAR_6->xmit.tail++] | 0x100;
 FUNC_1();
 VAR_6->xmit.tail = VAR_6->xmit.tail & (VAR_2-1);
 VAR_6->state->icount.tx++;

 if (FUNC_0(VAR_6->xmit.head,
       VAR_6->xmit.tail,
       VAR_2) < VAR_4)
  FUNC_3(VAR_6, VAR_1);




 if (VAR_6->xmit.head == VAR_6->xmit.tail) {
         VAR_5.intena = VAR_0;
  FUNC_1();
  VAR_6->IER &= ~VAR_3;
 }
}
