
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int tx; } ;
struct uart_port {TYPE_2__ icount; scalar_t__ x_char; TYPE_1__* state; } ;
struct circ_buf {size_t tail; scalar_t__* buf; } ;
struct TYPE_6__ {int (* write_char ) (struct uart_port*,scalar_t__) ;scalar_t__ (* raw_tx_rdy ) (struct uart_port*) ;} ;
struct TYPE_4__ {struct circ_buf xmit; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (struct uart_port*) ;
 TYPE_3__* VAR_2 ;
 int FUNC_1 (struct uart_port*,scalar_t__) ;
 scalar_t__ FUNC_2 (struct uart_port*) ;
 int FUNC_3 (struct uart_port*,scalar_t__) ;
 scalar_t__ FUNC_4 (struct circ_buf*) ;
 scalar_t__ FUNC_5 (struct circ_buf*) ;
 scalar_t__ FUNC_6 (struct uart_port*) ;
 int FUNC_7 (struct uart_port*) ;

__attribute__((used)) static inline int
FUNC_8(struct uart_port *VAR_3)
{
 struct circ_buf *VAR_4 = &VAR_3->state->xmit;


 if (VAR_3->x_char) {
  VAR_2->write_char(VAR_3, VAR_3->x_char);
  VAR_3->icount.tx++;
  VAR_3->x_char = 0;
  return 1;
 }


 if (FUNC_5(VAR_4) || FUNC_6(VAR_3)) {
  FUNC_0(VAR_3);
  return 0;
 }


 while (VAR_2->raw_tx_rdy(VAR_3)) {
  VAR_2->write_char(VAR_3, VAR_4->buf[VAR_4->tail]);
  VAR_4->tail = (VAR_4->tail + 1) & (VAR_0 - 1);
  VAR_3->icount.tx++;
  if (FUNC_5(VAR_4))
   break;
 }


 if (FUNC_4(VAR_4) < VAR_1)
  FUNC_7(VAR_3);


 if (FUNC_5(VAR_4)) {
  FUNC_0(VAR_3);
  return 0;
 }

 return 1;
}
