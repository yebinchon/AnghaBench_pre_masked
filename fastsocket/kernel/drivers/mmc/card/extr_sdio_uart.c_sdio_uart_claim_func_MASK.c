
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sdio_uart_port {scalar_t__ in_sdio_uart_irq; int func_lock; int func; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (int) ;

__attribute__((used)) static int FUNC_5(struct sdio_uart_port *VAR_2)
{
 FUNC_1(&VAR_2->func_lock);
 if (FUNC_4(!VAR_2->func)) {
  FUNC_2(&VAR_2->func_lock);
  return -VAR_0;
 }
 if (FUNC_0(VAR_2->in_sdio_uart_irq != VAR_1))
  FUNC_3(VAR_2->func);
 FUNC_2(&VAR_2->func_lock);
 return 0;
}
