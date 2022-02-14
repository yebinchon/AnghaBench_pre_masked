
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int tx; } ;
struct uart_port {int line; TYPE_2__ icount; scalar_t__ x_char; TYPE_1__* state; } ;
struct sbd_port {struct uart_port port; } ;
struct circ_buf {size_t tail; scalar_t__* buf; } ;
struct TYPE_3__ {struct circ_buf xmit; } ;


 unsigned int VAR_0 ;
 int FUNC_0 (int) ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 unsigned int FUNC_1 (struct sbd_port*,int ) ;
 scalar_t__ FUNC_2 (struct circ_buf*) ;
 scalar_t__ FUNC_3 (struct circ_buf*) ;
 scalar_t__ FUNC_4 (struct uart_port*) ;
 int FUNC_5 (struct uart_port*) ;
 int FUNC_6 (struct sbd_port*,int ,scalar_t__) ;
 int FUNC_7 (struct sbd_port*,int ,unsigned int) ;

__attribute__((used)) static void FUNC_8(struct sbd_port *VAR_4)
{
 struct uart_port *VAR_5 = &VAR_4->port;
 struct circ_buf *VAR_6 = &VAR_4->port.state->xmit;
 unsigned int VAR_7;
 int VAR_8;


 if (VAR_4->port.x_char) {
  FUNC_6(VAR_4, VAR_1, VAR_4->port.x_char);
  VAR_4->port.icount.tx++;
  VAR_4->port.x_char = 0;
  return;
 }


 VAR_8 = (FUNC_3(VAR_6) || FUNC_4(&VAR_4->port));


 if (!VAR_8) {
  FUNC_6(VAR_4, VAR_1, VAR_6->buf[VAR_6->tail]);
  VAR_6->tail = (VAR_6->tail + 1) & (VAR_2 - 1);
  VAR_4->port.icount.tx++;

  if (FUNC_2(VAR_6) < VAR_3)
   FUNC_5(&VAR_4->port);
 }


 if (VAR_8 || FUNC_3(VAR_6)) {

  VAR_7 = FUNC_1(VAR_4, FUNC_0((VAR_5->line) % 2));
  VAR_7 &= ~VAR_0;
  FUNC_7(VAR_4, FUNC_0((VAR_5->line) % 2), VAR_7);
 }
}
