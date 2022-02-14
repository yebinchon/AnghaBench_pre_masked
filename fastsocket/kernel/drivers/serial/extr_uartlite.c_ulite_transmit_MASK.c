
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int tx; } ;
struct uart_port {TYPE_2__ icount; scalar_t__ membase; scalar_t__ x_char; TYPE_1__* state; } ;
struct circ_buf {size_t tail; scalar_t__* buf; } ;
struct TYPE_3__ {struct circ_buf xmit; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ FUNC_0 (struct circ_buf*) ;
 scalar_t__ FUNC_1 (struct circ_buf*) ;
 scalar_t__ FUNC_2 (struct uart_port*) ;
 int FUNC_3 (struct uart_port*) ;
 int FUNC_4 (scalar_t__,scalar_t__) ;

__attribute__((used)) static int FUNC_5(struct uart_port *VAR_4, int VAR_5)
{
 struct circ_buf *VAR_6 = &VAR_4->state->xmit;

 if (VAR_5 & VAR_1)
  return 0;

 if (VAR_4->x_char) {
  FUNC_4(VAR_4->x_char, VAR_4->membase + VAR_2);
  VAR_4->x_char = 0;
  VAR_4->icount.tx++;
  return 1;
 }

 if (FUNC_1(VAR_6) || FUNC_2(VAR_4))
  return 0;

 FUNC_4(VAR_6->buf[VAR_6->tail], VAR_4->membase + VAR_2);
 VAR_6->tail = (VAR_6->tail + 1) & (VAR_0-1);
 VAR_4->icount.tx++;


 if (FUNC_0(VAR_6) < VAR_3)
  FUNC_3(VAR_4);

 return 1;
}
