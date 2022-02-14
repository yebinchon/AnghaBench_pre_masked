
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int tx; } ;
struct uart_port {int dev; TYPE_2__ icount; TYPE_1__* state; } ;
struct circ_buf {int tail; int head; } ;
struct atmel_dma_buffer {int ofs; scalar_t__ dma_addr; int dma_size; } ;
struct atmel_uart_port {struct atmel_dma_buffer pdc_tx; } ;
struct TYPE_3__ {struct circ_buf xmit; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,int,int) ;
 int VAR_4 ;
 scalar_t__ FUNC_1 (struct uart_port*) ;
 int FUNC_2 (struct uart_port*,int) ;
 int FUNC_3 (struct uart_port*,int ) ;
 int FUNC_4 (struct uart_port*,int) ;
 int FUNC_5 (struct uart_port*,scalar_t__) ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_6 (int ,scalar_t__,int ,int ) ;
 struct atmel_uart_port* FUNC_7 (struct uart_port*) ;
 scalar_t__ FUNC_8 (struct circ_buf*) ;
 int FUNC_9 (struct circ_buf*) ;
 int FUNC_10 (struct uart_port*) ;
 int FUNC_11 (struct uart_port*) ;

__attribute__((used)) static void FUNC_12(struct uart_port *VAR_7)
{
 struct atmel_uart_port *VAR_8 = FUNC_7(VAR_7);
 struct circ_buf *VAR_9 = &VAR_7->state->xmit;
 struct atmel_dma_buffer *VAR_10 = &VAR_8->pdc_tx;
 int VAR_11;


 if (FUNC_1(VAR_7))
  return;

 VAR_9->tail += VAR_10->ofs;
 VAR_9->tail &= VAR_5 - 1;

 VAR_7->icount.tx += VAR_10->ofs;
 VAR_10->ofs = 0;




 FUNC_3(VAR_7, VAR_0);

 if (!FUNC_9(VAR_9) && !FUNC_10(VAR_7)) {
  FUNC_6(VAR_7->dev,
        VAR_10->dma_addr,
        VAR_10->dma_size,
        VAR_4);

  VAR_11 = FUNC_0(VAR_9->head, VAR_9->tail, VAR_5);
  VAR_10->ofs = VAR_11;

  FUNC_5(VAR_7, VAR_10->dma_addr + VAR_9->tail);
  FUNC_4(VAR_7, VAR_11);

  FUNC_3(VAR_7, VAR_1);
  FUNC_2(VAR_7, VAR_2 | VAR_3);
 }

 if (FUNC_8(VAR_9) < VAR_6)
  FUNC_11(VAR_7);
}
