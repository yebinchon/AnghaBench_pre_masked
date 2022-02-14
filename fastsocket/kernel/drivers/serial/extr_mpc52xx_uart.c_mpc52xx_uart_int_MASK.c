
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
struct uart_port {int lock; } ;
typedef int irqreturn_t ;
struct TYPE_4__ {int mpc52xx_psc_ipcr; } ;
struct TYPE_3__ {scalar_t__ (* tx_rdy ) (struct uart_port*) ;int (* tx_clr_irq ) (struct uart_port*) ;scalar_t__ (* rx_rdy ) (struct uart_port*) ;int (* rx_clr_irq ) (struct uart_port*) ;} ;


 int VAR_0 ;
 unsigned long VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 TYPE_2__* FUNC_0 (struct uart_port*) ;
 int FUNC_1 (int *) ;
 unsigned int FUNC_2 (struct uart_port*) ;
 unsigned int FUNC_3 (struct uart_port*) ;
 TYPE_1__* VAR_6 ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (struct uart_port*) ;
 scalar_t__ FUNC_7 (struct uart_port*) ;
 int FUNC_8 (struct uart_port*) ;
 scalar_t__ FUNC_9 (struct uart_port*) ;
 int FUNC_10 (struct uart_port*,int) ;
 int FUNC_11 (struct uart_port*,int) ;

__attribute__((used)) static irqreturn_t
FUNC_12(int VAR_7, void *VAR_8)
{
 struct uart_port *VAR_9 = VAR_8;
 unsigned long VAR_10 = VAR_1;
 unsigned int VAR_11;
 u8 VAR_12;

 FUNC_4(&VAR_9->lock);


 do {

  VAR_11 = 0;

  VAR_6->rx_clr_irq(VAR_9);
  if (VAR_6->rx_rdy(VAR_9))
   VAR_11 |= FUNC_2(VAR_9);

  VAR_6->tx_clr_irq(VAR_9);
  if (VAR_6->tx_rdy(VAR_9))
   VAR_11 |= FUNC_3(VAR_9);

  VAR_12 = FUNC_1(&FUNC_0(VAR_9)->mpc52xx_psc_ipcr);
  if (VAR_12 & VAR_5)
   FUNC_11(VAR_9, !(VAR_12 & VAR_3));

  if (VAR_12 & VAR_4)
   FUNC_10(VAR_9, !(VAR_12 & VAR_2));


  if (!(--VAR_10))
   VAR_11 = 0;

 } while (VAR_11);

 FUNC_5(&VAR_9->lock);

 return VAR_0;
}
