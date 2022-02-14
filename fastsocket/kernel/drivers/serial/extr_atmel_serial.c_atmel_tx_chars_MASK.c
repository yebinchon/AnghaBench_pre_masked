
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int tx; } ;
struct uart_port {TYPE_2__ icount; scalar_t__ x_char; TYPE_1__* state; } ;
struct circ_buf {size_t tail; scalar_t__* buf; } ;
struct TYPE_3__ {struct circ_buf xmit; } ;


 int VAR_0 ;
 int FUNC_0 (struct uart_port*) ;
 int FUNC_1 (struct uart_port*,scalar_t__) ;
 int FUNC_2 (struct uart_port*,int) ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_3 (struct circ_buf*) ;
 scalar_t__ FUNC_4 (struct circ_buf*) ;
 scalar_t__ FUNC_5 (struct uart_port*) ;
 int FUNC_6 (struct uart_port*) ;

__attribute__((used)) static void FUNC_7(struct uart_port *VAR_3)
{
 struct circ_buf *VAR_4 = &VAR_3->state->xmit;

 if (VAR_3->x_char && FUNC_0(VAR_3) & VAR_0) {
  FUNC_1(VAR_3, VAR_3->x_char);
  VAR_3->icount.tx++;
  VAR_3->x_char = 0;
 }
 if (FUNC_4(VAR_4) || FUNC_5(VAR_3))
  return;

 while (FUNC_0(VAR_3) & VAR_0) {
  FUNC_1(VAR_3, VAR_4->buf[VAR_4->tail]);
  VAR_4->tail = (VAR_4->tail + 1) & (VAR_1 - 1);
  VAR_3->icount.tx++;
  if (FUNC_4(VAR_4))
   break;
 }

 if (FUNC_3(VAR_4) < VAR_2)
  FUNC_6(VAR_3);

 if (!FUNC_4(VAR_4))
  FUNC_2(VAR_3, VAR_0);
}
