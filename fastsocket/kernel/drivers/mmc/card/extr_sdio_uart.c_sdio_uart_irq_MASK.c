
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sdio_uart_port {int * in_sdio_uart_irq; } ;
struct sdio_func {int dummy; } ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 int VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 int * VAR_5 ;
 struct sdio_uart_port* FUNC_0 (struct sdio_func*) ;
 unsigned int FUNC_1 (struct sdio_uart_port*,int ) ;
 int FUNC_2 (struct sdio_uart_port*) ;
 int FUNC_3 (struct sdio_uart_port*,unsigned int*) ;
 int FUNC_4 (struct sdio_uart_port*) ;
 scalar_t__ FUNC_5 (int) ;

__attribute__((used)) static void FUNC_6(struct sdio_func *VAR_6)
{
 struct sdio_uart_port *VAR_7 = FUNC_0(VAR_6);
 unsigned int VAR_8, VAR_9;
 if (FUNC_5(VAR_7->in_sdio_uart_irq == VAR_5))
  return;

 VAR_8 = FUNC_1(VAR_7, VAR_0);
 if (VAR_8 & VAR_1)
  return;

 VAR_7->in_sdio_uart_irq = VAR_5;
 VAR_9 = FUNC_1(VAR_7, VAR_2);
 if (VAR_9 & VAR_3)
  FUNC_3(VAR_7, &VAR_9);
 FUNC_2(VAR_7);
 if (VAR_9 & VAR_4)
  FUNC_4(VAR_7);
 VAR_7->in_sdio_uart_irq = ((void*)0);
}
