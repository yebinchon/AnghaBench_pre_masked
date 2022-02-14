
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct uart_port {int dummy; } ;
struct TYPE_2__ {scalar_t__ membase; } ;
struct uart_amba_port {int im; TYPE_1__ port; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int,scalar_t__) ;

__attribute__((used)) static void FUNC_1(struct uart_port *VAR_7)
{
 struct uart_amba_port *VAR_8 = (struct uart_amba_port *)VAR_7;

 VAR_8->im &= ~(VAR_6|VAR_5|VAR_1|
       VAR_4|VAR_0|VAR_3);
 FUNC_0(VAR_8->im, VAR_8->port.membase + VAR_2);
}
