
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct uart_port {int dummy; } ;
struct TYPE_2__ {int read_status_mask; } ;
struct uart_8250_port {int ier; TYPE_1__ port; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct uart_8250_port*,int ,int ) ;

__attribute__((used)) static void FUNC_1(struct uart_port *VAR_3)
{
 struct uart_8250_port *VAR_4 = (struct uart_8250_port *)VAR_3;

 VAR_4->ier &= ~VAR_1;
 VAR_4->port.read_status_mask &= ~VAR_2;
 FUNC_0(VAR_4, VAR_0, VAR_4->ier);
}
