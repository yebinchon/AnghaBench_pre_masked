
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct uart_port {int irq; int dev; } ;
struct atmel_dma_buffer {int dma_size; int dma_addr; int buf; } ;
struct atmel_uart_port {struct atmel_dma_buffer pdc_tx; struct atmel_dma_buffer* pdc_rx; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct uart_port*,int ) ;
 int FUNC_1 (struct uart_port*,int) ;
 int FUNC_2 (struct uart_port*) ;
 int FUNC_3 (struct uart_port*) ;
 int FUNC_4 (struct uart_port*) ;
 scalar_t__ FUNC_5 (struct uart_port*) ;
 scalar_t__ FUNC_6 (struct uart_port*) ;
 int FUNC_7 (int ,int ,int ,int ) ;
 int FUNC_8 (int ,struct uart_port*) ;
 int FUNC_9 (int ) ;
 struct atmel_uart_port* FUNC_10 (struct uart_port*) ;

__attribute__((used)) static void FUNC_11(struct uart_port *VAR_3)
{
 struct atmel_uart_port *VAR_4 = FUNC_10(VAR_3);



 FUNC_3(VAR_3);
 FUNC_4(VAR_3);




 if (FUNC_5(VAR_3)) {
  int VAR_5;

  for (VAR_5 = 0; VAR_5 < 2; VAR_5++) {
   struct atmel_dma_buffer *VAR_6 = &VAR_4->pdc_rx[VAR_5];

   FUNC_7(VAR_3->dev,
      VAR_6->dma_addr,
      VAR_6->dma_size,
      VAR_1);
   FUNC_9(VAR_6->buf);
  }
 }
 if (FUNC_6(VAR_3)) {
  struct atmel_dma_buffer *VAR_7 = &VAR_4->pdc_tx;

  FUNC_7(VAR_3->dev,
     VAR_7->dma_addr,
     VAR_7->dma_size,
     VAR_2);
 }




 FUNC_0(VAR_3, VAR_0);
 FUNC_1(VAR_3, -1);




 FUNC_8(VAR_3->irq, VAR_3);





 if (&FUNC_2)
  FUNC_2(VAR_3);
}
