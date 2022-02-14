
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int lock; int mctrl; int irq; int uartclk; } ;
struct uart_pxa_port {int ier; TYPE_1__ port; int name; int clk; int mcr; } ;
struct uart_port {int line; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int ,int ,int ,struct uart_pxa_port*) ;
 int FUNC_2 (struct uart_pxa_port*,int ) ;
 int FUNC_3 (struct uart_pxa_port*,int ,int) ;
 int VAR_17 ;
 int FUNC_4 (TYPE_1__*,int ) ;
 int FUNC_5 (int *,unsigned long) ;
 int FUNC_6 (int *,unsigned long) ;

__attribute__((used)) static int FUNC_7(struct uart_port *VAR_18)
{
 struct uart_pxa_port *VAR_19 = (struct uart_pxa_port *)VAR_18;
 unsigned long VAR_20;
 int VAR_21;

 if (VAR_18->line == 3)
  VAR_19->mcr |= VAR_14;
 else
  VAR_19->mcr = 0;

 VAR_19->port.uartclk = FUNC_0(VAR_19->clk);




 VAR_21 = FUNC_1(VAR_19->port.irq, VAR_17, 0, VAR_19->name, VAR_19);
 if (VAR_21)
  return VAR_21;





 FUNC_3(VAR_19, VAR_1, VAR_4);
 FUNC_3(VAR_19, VAR_1, VAR_4 |
   VAR_2 | VAR_3);
 FUNC_3(VAR_19, VAR_1, 0);




 (void) FUNC_2(VAR_19, VAR_13);
 (void) FUNC_2(VAR_19, VAR_16);
 (void) FUNC_2(VAR_19, VAR_10);
 (void) FUNC_2(VAR_19, VAR_15);




 FUNC_3(VAR_19, VAR_11, VAR_12);

 FUNC_5(&VAR_19->port.lock, VAR_20);
 VAR_19->port.mctrl |= VAR_0;
 FUNC_4(&VAR_19->port, VAR_19->port.mctrl);
 FUNC_6(&VAR_19->port.lock, VAR_20);






 VAR_19->ier = VAR_7 | VAR_6 | VAR_8 | VAR_9;
 FUNC_3(VAR_19, VAR_5, VAR_19->ier);




 (void) FUNC_2(VAR_19, VAR_13);
 (void) FUNC_2(VAR_19, VAR_16);
 (void) FUNC_2(VAR_19, VAR_10);
 (void) FUNC_2(VAR_19, VAR_15);

 return 0;
}
