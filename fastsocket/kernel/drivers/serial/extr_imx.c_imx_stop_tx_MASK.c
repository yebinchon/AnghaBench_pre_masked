
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct uart_port {int dummy; } ;
struct TYPE_2__ {scalar_t__ membase; } ;
struct imx_port {int trcv_delay; TYPE_1__ port; } ;


 scalar_t__ VAR_0 ;
 unsigned long VAR_1 ;
 unsigned long VAR_2 ;
 unsigned long VAR_3 ;
 scalar_t__ VAR_4 ;
 unsigned long VAR_5 ;
 unsigned long VAR_6 ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 scalar_t__ FUNC_0 (struct imx_port*) ;
 scalar_t__ VAR_9 ;
 int VAR_10 ;
 int FUNC_1 () ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (int) ;
 int FUNC_4 (unsigned long,scalar_t__) ;

__attribute__((used)) static void FUNC_5(struct uart_port *VAR_11)
{
 struct imx_port *VAR_12 = (struct imx_port *)VAR_11;
 unsigned long VAR_13;

 if (FUNC_0(VAR_12)) {

  int VAR_14 = 256;
  while ((--VAR_14 > 0) &&
        !(FUNC_2(VAR_12->port.membase + VAR_9) & VAR_10)) {
   FUNC_3(5);
   FUNC_1();
  }




  FUNC_3(VAR_12->trcv_delay);





  if (FUNC_2(VAR_12->port.membase + VAR_9) & VAR_10) {
   VAR_13 = FUNC_2(VAR_12->port.membase + VAR_0);
   VAR_13 &= ~(VAR_3 | VAR_2);
   FUNC_4(VAR_13, VAR_12->port.membase + VAR_0);

   VAR_13 = FUNC_2(VAR_12->port.membase + VAR_4);
   VAR_13 &= ~(VAR_6);
   FUNC_4(VAR_13, VAR_12->port.membase + VAR_4);

   while (FUNC_2(VAR_12->port.membase + VAR_7) &
          VAR_8)
    FUNC_1();

   VAR_13 = FUNC_2(VAR_12->port.membase + VAR_0);
   VAR_13 |= VAR_1;
   FUNC_4(VAR_13, VAR_12->port.membase + VAR_0);

   VAR_13 = FUNC_2(VAR_12->port.membase + VAR_4);
   VAR_13 |= VAR_5;
   FUNC_4(VAR_13, VAR_12->port.membase + VAR_4);
  }
  return;
 }

 VAR_13 = FUNC_2(VAR_12->port.membase + VAR_0);
 FUNC_4(VAR_13 & ~VAR_3, VAR_12->port.membase + VAR_0);
}
