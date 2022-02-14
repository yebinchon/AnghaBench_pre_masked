
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int tx; } ;
struct circ_buf {size_t tail; scalar_t__* buf; } ;
struct sdio_uart_port {TYPE_2__* tty; TYPE_1__ icount; scalar_t__ x_char; struct circ_buf xmit; } ;
struct TYPE_4__ {scalar_t__ hw_stopped; scalar_t__ stopped; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_0 (struct circ_buf*) ;
 scalar_t__ FUNC_1 (struct circ_buf*) ;
 int FUNC_2 (struct sdio_uart_port*,int ,scalar_t__) ;
 int FUNC_3 (struct sdio_uart_port*) ;
 int FUNC_4 (TYPE_2__*) ;

__attribute__((used)) static void FUNC_5(struct sdio_uart_port *VAR_3)
{
 struct circ_buf *VAR_4 = &VAR_3->xmit;
 int VAR_5;

 if (VAR_3->x_char) {
  FUNC_2(VAR_3, VAR_0, VAR_3->x_char);
  VAR_3->icount.tx++;
  VAR_3->x_char = 0;
  return;
 }
 if (FUNC_1(VAR_4) || VAR_3->tty->stopped || VAR_3->tty->hw_stopped) {
  FUNC_3(VAR_3);
  return;
 }

 VAR_5 = 16;
 do {
  FUNC_2(VAR_3, VAR_0, VAR_4->buf[VAR_4->tail]);
  VAR_4->tail = (VAR_4->tail + 1) & (VAR_1 - 1);
  VAR_3->icount.tx++;
  if (FUNC_1(VAR_4))
   break;
 } while (--VAR_5 > 0);

 if (FUNC_0(VAR_4) < VAR_2)
  FUNC_4(VAR_3->tty);

 if (FUNC_1(VAR_4))
  FUNC_3(VAR_3);
}
