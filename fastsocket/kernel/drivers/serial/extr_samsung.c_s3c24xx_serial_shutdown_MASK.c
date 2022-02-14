
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int tx_enabled ;
struct uart_port {int dummy; } ;
struct s3c24xx_uart_port {scalar_t__ rx_claimed; int rx_irq; scalar_t__ tx_claimed; int tx_irq; } ;
typedef int rx_enabled ;


 int FUNC_0 (int ,struct s3c24xx_uart_port*) ;
 struct s3c24xx_uart_port* FUNC_1 (struct uart_port*) ;

__attribute__((used)) static void FUNC_2(struct uart_port *VAR_0)
{
 struct s3c24xx_uart_port *VAR_1 = FUNC_1(VAR_0);

 if (VAR_1->tx_claimed) {
  FUNC_0(VAR_1->tx_irq, VAR_1);
  tx_enabled(VAR_2) = 0;
  VAR_1->tx_claimed = 0;
 }

 if (VAR_1->rx_claimed) {
  FUNC_0(VAR_1->rx_irq, VAR_1);
  VAR_1->rx_claimed = 0;
  rx_enabled(VAR_3) = 0;
 }
}
