
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct uart_port {int dummy; } ;
struct TYPE_2__ {scalar_t__ membase; } ;
struct uart_amba_port {TYPE_1__ port; int im; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,scalar_t__) ;

__attribute__((used)) static void FUNC_1(struct uart_port *VAR_2)
{
 struct uart_amba_port *VAR_3 = (struct uart_amba_port *)VAR_2;

 VAR_3->im |= VAR_1;
 FUNC_0(VAR_3->im, VAR_3->port.membase + VAR_0);
}
