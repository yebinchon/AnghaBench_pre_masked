
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {int tx; } ;
struct uart_port {TYPE_3__ icount; scalar_t__ x_char; TYPE_1__* state; } ;
struct s3c24xx_uart_port {TYPE_2__* info; struct uart_port port; } ;
struct circ_buf {size_t tail; scalar_t__* buf; } ;
typedef int irqreturn_t ;
struct TYPE_5__ {int tx_fifofull; } ;
struct TYPE_4__ {struct circ_buf xmit; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (struct uart_port*,int ) ;
 int FUNC_1 (struct uart_port*) ;
 scalar_t__ FUNC_2 (struct circ_buf*) ;
 scalar_t__ FUNC_3 (struct circ_buf*) ;
 scalar_t__ FUNC_4 (struct uart_port*) ;
 int FUNC_5 (struct uart_port*) ;
 int FUNC_6 (struct uart_port*,int ,scalar_t__) ;

__attribute__((used)) static irqreturn_t FUNC_7(int VAR_5, void *VAR_6)
{
 struct s3c24xx_uart_port *VAR_7 = VAR_6;
 struct uart_port *VAR_8 = &VAR_7->port;
 struct circ_buf *VAR_9 = &VAR_8->state->xmit;
 int VAR_10 = 256;

 if (VAR_8->x_char) {
  FUNC_6(VAR_8, VAR_2, VAR_8->x_char);
  VAR_8->icount.tx++;
  VAR_8->x_char = 0;
  goto out;
 }





 if (FUNC_3(VAR_9) || FUNC_4(VAR_8)) {
  FUNC_1(VAR_8);
  goto out;
 }



 while (!FUNC_3(VAR_9) && VAR_10-- > 0) {
  if (FUNC_0(VAR_8, VAR_1) & VAR_7->info->tx_fifofull)
   break;

  FUNC_6(VAR_8, VAR_2, VAR_9->buf[VAR_9->tail]);
  VAR_9->tail = (VAR_9->tail + 1) & (VAR_3 - 1);
  VAR_8->icount.tx++;
 }

 if (FUNC_2(VAR_9) < VAR_4)
  FUNC_5(VAR_8);

 if (FUNC_3(VAR_9))
  FUNC_1(VAR_8);

 out:
 return VAR_0;
}
