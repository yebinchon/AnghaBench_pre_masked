
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {TYPE_1__* tty; } ;
struct m68k_serial {size_t line; scalar_t__ xmit_cnt; int xmit_tail; int tqueue; scalar_t__* xmit_buf; TYPE_2__ port; scalar_t__ x_char; } ;
struct TYPE_9__ {scalar_t__ txdata; } ;
struct TYPE_10__ {TYPE_3__ b; } ;
struct TYPE_11__ {int ustcnt; TYPE_4__ utx; } ;
typedef TYPE_5__ m68328_uart ;
struct TYPE_7__ {scalar_t__ stopped; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int *) ;
 TYPE_5__* VAR_3 ;

__attribute__((used)) static void FUNC_1(struct m68k_serial *VAR_4)
{
 m68328_uart *VAR_5 = &VAR_3[VAR_4->line];

 if (VAR_4->x_char) {

  VAR_5->utx.b.txdata = VAR_4->x_char;
  VAR_4->x_char = 0;
  goto clear_and_return;
 }

 if((VAR_4->xmit_cnt <= 0) || VAR_4->port.tty->stopped) {

  VAR_5->ustcnt &= ~VAR_1;
  goto clear_and_return;
 }


 VAR_5->utx.b.txdata = VAR_4->xmit_buf[VAR_4->xmit_tail++];
 VAR_4->xmit_tail = VAR_4->xmit_tail & (VAR_0-1);
 VAR_4->xmit_cnt--;

 if (VAR_4->xmit_cnt < VAR_2)
  FUNC_0(&VAR_4->tqueue);

 if(VAR_4->xmit_cnt <= 0) {

  VAR_5->ustcnt &= ~VAR_1;
  goto clear_and_return;
 }

clear_and_return:

 return;
}
