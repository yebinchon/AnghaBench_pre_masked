
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {TYPE_1__* tty; } ;
struct m68k_serial {size_t line; int flags; TYPE_2__ port; scalar_t__ xmit_buf; } ;
struct TYPE_7__ {scalar_t__ ustcnt; } ;
typedef TYPE_3__ m68328_uart ;
struct TYPE_5__ {int flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (unsigned long) ;
 int FUNC_1 (unsigned long) ;
 int FUNC_2 (unsigned long) ;
 int FUNC_3 (int ,int *) ;
 TYPE_3__* VAR_2 ;

__attribute__((used)) static void FUNC_4(struct m68k_serial * VAR_3)
{
 m68328_uart *VAR_4 = &VAR_2[VAR_3->line];
 unsigned long VAR_5;

 VAR_4->ustcnt = 0;
 if (!(VAR_3->flags & VAR_0))
  return;

 FUNC_2(VAR_5);

 if (VAR_3->xmit_buf) {
  FUNC_0((unsigned long) VAR_3->xmit_buf);
  VAR_3->xmit_buf = 0;
 }

 if (VAR_3->port.tty)
  FUNC_3(VAR_1, &VAR_3->port.tty->flags);

 VAR_3->flags &= ~VAR_0;
 FUNC_1(VAR_5);
}
