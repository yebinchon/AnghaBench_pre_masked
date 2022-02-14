
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct uart_port {int dummy; } ;
struct TYPE_2__ {scalar_t__ membase; } ;
struct imx_port {TYPE_1__ port; } ;


 scalar_t__ VAR_0 ;
 unsigned long VAR_1 ;
 unsigned long VAR_2 ;
 unsigned long VAR_3 ;
 scalar_t__ VAR_4 ;
 unsigned long VAR_5 ;
 unsigned long VAR_6 ;
 scalar_t__ FUNC_0 (struct imx_port*) ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 int FUNC_1 (struct imx_port*) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (unsigned long,scalar_t__) ;

__attribute__((used)) static void FUNC_4(struct uart_port *VAR_9)
{
 struct imx_port *VAR_10 = (struct imx_port *)VAR_9;
 unsigned long VAR_11;

 if (FUNC_0(VAR_10)) {

  VAR_11 = FUNC_2(VAR_10->port.membase + VAR_4);
  VAR_11 &= ~(VAR_5);
  FUNC_3(VAR_11, VAR_10->port.membase + VAR_4);

  VAR_11 = FUNC_2(VAR_10->port.membase + VAR_0);
  VAR_11 &= ~(VAR_1);
  FUNC_3(VAR_11, VAR_10->port.membase + VAR_0);
 }

 VAR_11 = FUNC_2(VAR_10->port.membase + VAR_0);
 FUNC_3(VAR_11 | VAR_3, VAR_10->port.membase + VAR_0);

 if (FUNC_0(VAR_10)) {
  VAR_11 = FUNC_2(VAR_10->port.membase + VAR_0);
  VAR_11 |= VAR_2;
  FUNC_3(VAR_11, VAR_10->port.membase + VAR_0);

  VAR_11 = FUNC_2(VAR_10->port.membase + VAR_4);
  VAR_11 |= VAR_6;
  FUNC_3(VAR_11, VAR_10->port.membase + VAR_4);
 }

 if (FUNC_2(VAR_10->port.membase + VAR_7) & VAR_8)
  FUNC_1(VAR_10);
}
