
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
 int FUNC_1 (struct uart_port*,int ,int ) ;
 int FUNC_2 (struct uart_port*,int ) ;
 int FUNC_3 (struct circ_buf*) ;

__attribute__((used)) static void FUNC_4(struct uart_port *VAR_5)
{
 struct circ_buf *VAR_6 = &VAR_5->state->xmit;

 while (!FUNC_3(VAR_6)) {
  if (!(FUNC_0(VAR_5, VAR_1) & VAR_2)) {
   FUNC_2(VAR_5, VAR_0);
   break;
  }
  FUNC_1(VAR_5, VAR_3, VAR_6->buf[VAR_6->tail]);
  VAR_6->tail = (VAR_6->tail + 1) & (VAR_4 - 1);
  VAR_5->icount.tx++;
 }
}
