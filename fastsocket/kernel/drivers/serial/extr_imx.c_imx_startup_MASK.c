
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct uart_port {int dummy; } ;
struct imxuart_platform_data {int (* irda_enable ) (int) ;int transceiver_delay; scalar_t__ irda_inv_tx; scalar_t__ irda_inv_rx; } ;
struct TYPE_4__ {scalar_t__ irq; TYPE_1__* dev; int lock; scalar_t__ membase; } ;
struct imx_port {scalar_t__ txirq; scalar_t__ rxirq; scalar_t__ rtsirq; int trcv_delay; scalar_t__ irda_inv_tx; scalar_t__ irda_inv_rx; TYPE_2__ port; } ;
struct TYPE_3__ {struct imxuart_platform_data* platform_data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 unsigned long VAR_4 ;
 scalar_t__ VAR_5 ;
 unsigned long VAR_6 ;
 unsigned long VAR_7 ;
 unsigned long VAR_8 ;
 unsigned long VAR_9 ;
 scalar_t__ VAR_10 ;
 unsigned long VAR_11 ;
 unsigned long VAR_12 ;
 unsigned long VAR_13 ;
 scalar_t__ VAR_14 ;
 unsigned long VAR_15 ;
 scalar_t__ VAR_16 ;
 unsigned long VAR_17 ;
 unsigned long VAR_18 ;
 unsigned long VAR_19 ;
 scalar_t__ VAR_20 ;
 unsigned long VAR_21 ;
 scalar_t__ FUNC_0 (struct imx_port*) ;
 scalar_t__ VAR_22 ;
 unsigned long VAR_23 ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 int FUNC_3 (scalar_t__,struct imx_port*) ;
 int FUNC_4 (TYPE_2__*) ;
 int VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 int FUNC_5 (struct imx_port*,int ) ;
 int VAR_27 ;
 unsigned long FUNC_6 (scalar_t__) ;
 int FUNC_7 (scalar_t__,int ,int,int ,struct imx_port*) ;
 int FUNC_8 (int *,unsigned long) ;
 int FUNC_9 (int *,unsigned long) ;
 int FUNC_10 (int) ;
 int FUNC_11 (int) ;
 int FUNC_12 (unsigned long,scalar_t__) ;

__attribute__((used)) static int FUNC_13(struct uart_port *VAR_28)
{
 struct imx_port *VAR_29 = (struct imx_port *)VAR_28;
 int VAR_30;
 unsigned long VAR_31, VAR_32;

 FUNC_5(VAR_29, 0);




 VAR_32 = FUNC_6(VAR_29->port.membase + VAR_16);

 if (FUNC_0(VAR_29))
  VAR_32 |= VAR_19;

 FUNC_12(VAR_32 & ~VAR_17, VAR_29->port.membase + VAR_16);

 if (FUNC_0(VAR_29)) {

  int VAR_33 = 100;
  VAR_32 = FUNC_6(VAR_29->port.membase + VAR_10);
  VAR_32 &= ~VAR_12;
  FUNC_12(VAR_32, VAR_29->port.membase + VAR_10);
  while (!(FUNC_6(VAR_29->port.membase + VAR_10) & VAR_12) &&
      (--VAR_33 > 0)) {
   FUNC_11(1);
  }
 }





 if (VAR_29->txirq > 0) {
  VAR_30 = FUNC_7(VAR_29->rxirq, VAR_26, 0,
    VAR_0, VAR_29);
  if (VAR_30)
   goto error_out1;

  VAR_30 = FUNC_7(VAR_29->txirq, VAR_27, 0,
    VAR_0, VAR_29);
  if (VAR_30)
   goto error_out2;


  if (!FUNC_0(VAR_29)) {
   VAR_30 = FUNC_7(VAR_29->rtsirq, VAR_25,
         (VAR_29->rtsirq < VAR_3) ? 0 :
           VAR_1 |
           VAR_2,
     VAR_0, VAR_29);
   if (VAR_30)
    goto error_out3;
  }
 } else {
  VAR_30 = FUNC_7(VAR_29->port.irq, VAR_24, 0,
    VAR_0, VAR_29);
  if (VAR_30) {
   FUNC_3(VAR_29->port.irq, VAR_29);
   goto error_out1;
  }
 }




 FUNC_12(VAR_23, VAR_29->port.membase + VAR_22);

 VAR_32 = FUNC_6(VAR_29->port.membase + VAR_5);
 VAR_32 |= VAR_7 | VAR_8 | VAR_9;

 if (FUNC_0(VAR_29)) {
  VAR_32 |= VAR_6;
  VAR_32 &= ~(VAR_8);
 }

 FUNC_12(VAR_32, VAR_29->port.membase + VAR_5);

 VAR_32 = FUNC_6(VAR_29->port.membase + VAR_10);
 VAR_32 |= (VAR_11 | VAR_13);
 FUNC_12(VAR_32, VAR_29->port.membase + VAR_10);

 if (FUNC_0(VAR_29)) {

  int VAR_34 = 64;
  while ((--VAR_34 > 0) &&
   (FUNC_6(VAR_29->port.membase + VAR_20) & VAR_21)) {
   FUNC_1();
  }
 }

 if (!FUNC_2()) {
  VAR_32 = FUNC_6(VAR_29->port.membase + VAR_14);
  VAR_32 |= VAR_4;
  FUNC_12(VAR_32, VAR_29->port.membase + VAR_14);
 }

 if (FUNC_0(VAR_29)) {
  VAR_32 = FUNC_6(VAR_29->port.membase + VAR_16);
  if (VAR_29->irda_inv_rx)
   VAR_32 |= VAR_18;
  else
   VAR_32 &= ~(VAR_18);
  FUNC_12(VAR_32 | VAR_17, VAR_29->port.membase + VAR_16);

  VAR_32 = FUNC_6(VAR_29->port.membase + VAR_14);
  if (VAR_29->irda_inv_tx)
   VAR_32 |= VAR_15;
  else
   VAR_32 &= ~(VAR_15);
  FUNC_12(VAR_32, VAR_29->port.membase + VAR_14);
 }




 FUNC_8(&VAR_29->port.lock,VAR_31);
 FUNC_4(&VAR_29->port);
 FUNC_9(&VAR_29->port.lock,VAR_31);

 if (FUNC_0(VAR_29)) {
  struct imxuart_platform_data *VAR_35;
  VAR_35 = VAR_29->port.dev->platform_data;
  VAR_29->irda_inv_rx = VAR_35->irda_inv_rx;
  VAR_29->irda_inv_tx = VAR_35->irda_inv_tx;
  VAR_29->trcv_delay = VAR_35->transceiver_delay;
  if (VAR_35->irda_enable)
   VAR_35->irda_enable(1);
 }

 return 0;

error_out3:
 if (VAR_29->txirq)
  FUNC_3(VAR_29->txirq, VAR_29);
error_out2:
 if (VAR_29->rxirq)
  FUNC_3(VAR_29->rxirq, VAR_29);
error_out1:
 return VAR_30;
}
