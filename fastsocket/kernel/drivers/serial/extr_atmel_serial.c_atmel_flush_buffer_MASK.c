
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct uart_port {int dummy; } ;
struct TYPE_2__ {scalar_t__ ofs; } ;
struct atmel_uart_port {TYPE_1__ pdc_tx; } ;


 int FUNC_0 (struct uart_port*,int ) ;
 scalar_t__ FUNC_1 (struct uart_port*) ;
 struct atmel_uart_port* FUNC_2 (struct uart_port*) ;

__attribute__((used)) static void FUNC_3(struct uart_port *VAR_0)
{
 struct atmel_uart_port *VAR_1 = FUNC_2(VAR_0);

 if (FUNC_1(VAR_0)) {
  FUNC_0(VAR_0, 0);
  VAR_1->pdc_tx.ofs = 0;
 }
}
