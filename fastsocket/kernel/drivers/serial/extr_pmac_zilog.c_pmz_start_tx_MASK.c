
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int tx; } ;
struct uart_port {TYPE_2__ icount; TYPE_1__* state; scalar_t__ x_char; } ;
struct uart_pmac_port {int port; int * node; int flags; } ;
struct circ_buf {size_t tail; scalar_t__* buf; } ;
struct TYPE_3__ {struct circ_buf xmit; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 unsigned char VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ FUNC_0 (struct uart_pmac_port*) ;
 int FUNC_1 (char*) ;
 unsigned char FUNC_2 (struct uart_pmac_port*,int ) ;
 struct uart_pmac_port* FUNC_3 (struct uart_port*) ;
 scalar_t__ FUNC_4 (struct circ_buf*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (struct uart_pmac_port*,scalar_t__) ;
 int FUNC_7 (struct uart_pmac_port*) ;

__attribute__((used)) static void FUNC_8(struct uart_port *VAR_6)
{
 struct uart_pmac_port *VAR_7 = FUNC_3(VAR_6);
 unsigned char VAR_8;

 FUNC_1("pmz: start_tx()\n");

 VAR_7->flags |= VAR_0;
 VAR_7->flags &= ~VAR_1;

 if (FUNC_0(VAR_7) || VAR_7->node == ((void*)0))
  return;

 VAR_8 = FUNC_2(VAR_7, VAR_2);


 if (!(VAR_8 & VAR_3))
  return;




 if (VAR_6->x_char) {
  FUNC_6(VAR_7, VAR_6->x_char);
  FUNC_7(VAR_7);
  VAR_6->icount.tx++;
  VAR_6->x_char = 0;
 } else {
  struct circ_buf *VAR_9 = &VAR_6->state->xmit;

  FUNC_6(VAR_7, VAR_9->buf[VAR_9->tail]);
  FUNC_7(VAR_7);
  VAR_9->tail = (VAR_9->tail + 1) & (VAR_4 - 1);
  VAR_6->icount.tx++;

  if (FUNC_4(VAR_9) < VAR_5)
   FUNC_5(&VAR_7->port);
 }
 FUNC_1("pmz: start_tx() done.\n");
}
