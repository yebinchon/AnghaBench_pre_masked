
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int tx; } ;
struct uart_port {TYPE_2__ icount; scalar_t__ x_char; TYPE_1__* state; } ;
struct circ_buf {size_t tail; scalar_t__* buf; } ;
typedef int irqreturn_t ;
struct TYPE_3__ {struct circ_buf xmit; } ;


 int VAR_0 ;
 int FUNC_0 () ;
 int FUNC_1 (struct uart_port*,scalar_t__) ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_2 (struct uart_port*) ;
 scalar_t__ FUNC_3 (struct circ_buf*) ;
 scalar_t__ FUNC_4 (struct circ_buf*) ;
 scalar_t__ FUNC_5 (struct uart_port*) ;
 int FUNC_6 (struct uart_port*) ;

__attribute__((used)) static irqreturn_t FUNC_7(int VAR_3, void *VAR_4)
{
 struct uart_port *VAR_5 = VAR_4;
 struct circ_buf *VAR_6 = &VAR_5->state->xmit;
 unsigned int VAR_7;

 if (VAR_5->x_char) {
  FUNC_0();
  FUNC_1(VAR_5, VAR_5->x_char);
  VAR_5->icount.tx++;
  VAR_5->x_char = 0;
  return VAR_0;
 }

 if (FUNC_5(VAR_5) || FUNC_4(VAR_6)) {
  FUNC_2(VAR_5);
  return VAR_0;
 }

 VAR_7 = 16;
 while (!FUNC_4(VAR_6) && (VAR_7-- > 0)) {
  FUNC_0();
  FUNC_1(VAR_5, VAR_6->buf[VAR_6->tail]);

  VAR_6->tail = (VAR_6->tail + 1) & (VAR_1 - 1);
  VAR_5->icount.tx++;
 }

 if (FUNC_3(VAR_6) < VAR_2)
  FUNC_6(VAR_5);

 if (FUNC_4(VAR_6))
  FUNC_2(VAR_5);

 return VAR_0;
}
