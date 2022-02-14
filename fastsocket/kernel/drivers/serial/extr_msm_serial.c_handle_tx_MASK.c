
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int tx; } ;
struct uart_port {TYPE_2__ icount; scalar_t__ x_char; TYPE_1__* state; } ;
struct msm_port {scalar_t__ imr; } ;
struct circ_buf {size_t tail; scalar_t__* buf; } ;
struct TYPE_3__ {struct circ_buf xmit; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 struct msm_port* FUNC_0 (struct uart_port*) ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_1 (struct uart_port*,int ) ;
 int FUNC_2 (struct uart_port*,scalar_t__,int ) ;
 scalar_t__ FUNC_3 (struct circ_buf*) ;
 scalar_t__ FUNC_4 (struct circ_buf*) ;
 int FUNC_5 (struct uart_port*) ;

__attribute__((used)) static void FUNC_6(struct uart_port *VAR_7)
{
 struct circ_buf *VAR_8 = &VAR_7->state->xmit;
 struct msm_port *VAR_9 = FUNC_0(VAR_7);
 int VAR_10;

 if (VAR_7->x_char) {
  FUNC_2(VAR_7, VAR_7->x_char, VAR_4);
  VAR_7->icount.tx++;
  VAR_7->x_char = 0;
 }

 while (FUNC_1(VAR_7, VAR_2) & VAR_3) {
  if (FUNC_4(VAR_8)) {

   VAR_9->imr &= ~VAR_1;
   FUNC_2(VAR_7, VAR_9->imr, VAR_0);
   break;
  }

  FUNC_2(VAR_7, VAR_8->buf[VAR_8->tail], VAR_4);

  VAR_8->tail = (VAR_8->tail + 1) & (VAR_5 - 1);
  VAR_7->icount.tx++;
  VAR_10 = 1;
 }

 if (FUNC_3(VAR_8) < VAR_6)
  FUNC_5(VAR_7);
}
