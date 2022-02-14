
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int tx; } ;
struct uart_port {TYPE_1__ icount; TYPE_2__* state; } ;
struct circ_buf {size_t tail; int * buf; } ;
struct TYPE_4__ {struct circ_buf xmit; } ;


 int VAR_0 ;
 int FUNC_0 (struct uart_port*,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_1 (struct uart_port*,int ,int ) ;
 int FUNC_2 (struct uart_port*,int ) ;
 scalar_t__ FUNC_3 (struct circ_buf*) ;
 scalar_t__ FUNC_4 (struct circ_buf*) ;
 scalar_t__ FUNC_5 (struct uart_port*) ;
 int FUNC_6 (struct uart_port*) ;

__attribute__((used)) static void FUNC_7(struct uart_port *VAR_6)
{
 struct circ_buf *VAR_7;

 if (!VAR_6->state)
  return;

 VAR_7 = &VAR_6->state->xmit;
 if (FUNC_4(VAR_7) || FUNC_5(VAR_6)) {
  FUNC_2(VAR_6, VAR_0);
  return;
 }
 while (!FUNC_4(VAR_7)) {
  if (!(FUNC_0(VAR_6, VAR_1) & VAR_2))
   break;

  FUNC_1(VAR_6, VAR_3, VAR_7->buf[VAR_7->tail]);
  VAR_7->tail = (VAR_7->tail + 1) & (VAR_4 - 1);
  VAR_6->icount.tx++;
 }
 if (FUNC_3(VAR_7) < VAR_5)
  FUNC_6(VAR_6);
}
