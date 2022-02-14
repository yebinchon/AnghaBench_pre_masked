
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct uart_port {int dummy; } ;
struct imxuart_platform_data {int (* irda_enable ) (int ) ;} ;
struct TYPE_4__ {scalar_t__ irq; scalar_t__ membase; TYPE_1__* dev; } ;
struct imx_port {scalar_t__ txirq; scalar_t__ rtsirq; scalar_t__ rxirq; TYPE_2__ port; int timer; } ;
struct TYPE_3__ {struct imxuart_platform_data* platform_data; } ;


 scalar_t__ VAR_0 ;
 unsigned long VAR_1 ;
 unsigned long VAR_2 ;
 unsigned long VAR_3 ;
 unsigned long VAR_4 ;
 unsigned long VAR_5 ;
 scalar_t__ VAR_6 ;
 unsigned long VAR_7 ;
 scalar_t__ FUNC_0 (struct imx_port*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (scalar_t__,struct imx_port*) ;
 unsigned long FUNC_3 (scalar_t__) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (unsigned long,scalar_t__) ;

__attribute__((used)) static void FUNC_6(struct uart_port *VAR_8)
{
 struct imx_port *VAR_9 = (struct imx_port *)VAR_8;
 unsigned long VAR_10;

 VAR_10 = FUNC_3(VAR_9->port.membase + VAR_6);
 VAR_10 &= ~(VAR_7);
 FUNC_5(VAR_10, VAR_9->port.membase + VAR_6);

 if (FUNC_0(VAR_9)) {
  struct imxuart_platform_data *VAR_11;
  VAR_11 = VAR_9->port.dev->platform_data;
  if (VAR_11->irda_enable)
   VAR_11->irda_enable(0);
 }




 FUNC_1(&VAR_9->timer);




 if (VAR_9->txirq > 0) {
  if (!FUNC_0(VAR_9))
   FUNC_2(VAR_9->rtsirq, VAR_9);
  FUNC_2(VAR_9->txirq, VAR_9);
  FUNC_2(VAR_9->rxirq, VAR_9);
 } else
  FUNC_2(VAR_9->port.irq, VAR_9);





 VAR_10 = FUNC_3(VAR_9->port.membase + VAR_0);
 VAR_10 &= ~(VAR_4 | VAR_2 | VAR_3 | VAR_5);
 if (FUNC_0(VAR_9))
  VAR_10 &= ~(VAR_1);

 FUNC_5(VAR_10, VAR_9->port.membase + VAR_0);
}
