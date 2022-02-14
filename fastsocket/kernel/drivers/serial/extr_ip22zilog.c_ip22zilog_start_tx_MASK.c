
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct zilog_channel {int data; int control; } ;
struct TYPE_4__ {int tx; } ;
struct uart_port {TYPE_2__ icount; TYPE_1__* state; scalar_t__ x_char; } ;
struct uart_ip22zilog_port {int port; int flags; } ;
struct circ_buf {size_t tail; scalar_t__* buf; } ;
struct TYPE_3__ {struct circ_buf xmit; } ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned char VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 struct zilog_channel* FUNC_0 (struct uart_port*) ;
 int FUNC_1 () ;
 int FUNC_2 (struct zilog_channel*) ;
 unsigned char FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (struct circ_buf*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (scalar_t__,int *) ;

__attribute__((used)) static void FUNC_7(struct uart_port *VAR_5)
{
 struct uart_ip22zilog_port *VAR_6 = (struct uart_ip22zilog_port *) VAR_5;
 struct zilog_channel *VAR_7 = FUNC_0(VAR_5);
 unsigned char VAR_8;

 VAR_6->flags |= VAR_0;
 VAR_6->flags &= ~VAR_1;

 VAR_8 = FUNC_3(&VAR_7->control);
 FUNC_1();


 if (!(VAR_8 & VAR_2))
  return;




 if (VAR_5->x_char) {
  FUNC_6(VAR_5->x_char, &VAR_7->data);
  FUNC_1();
  FUNC_2(VAR_7);

  VAR_5->icount.tx++;
  VAR_5->x_char = 0;
 } else {
  struct circ_buf *VAR_9 = &VAR_5->state->xmit;

  FUNC_6(VAR_9->buf[VAR_9->tail], &VAR_7->data);
  FUNC_1();
  FUNC_2(VAR_7);

  VAR_9->tail = (VAR_9->tail + 1) & (VAR_3 - 1);
  VAR_5->icount.tx++;

  if (FUNC_4(VAR_9) < VAR_4)
   FUNC_5(&VAR_6->port);
 }
}
