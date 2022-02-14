
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {unsigned int rx; } ;
struct uart_port {int lock; TYPE_3__ icount; int dev; TYPE_2__* state; } ;
struct tty_struct {int dummy; } ;
struct atmel_uart_port {int pdc_rx_idx; struct atmel_dma_buffer* pdc_rx; } ;
struct atmel_dma_buffer {unsigned int dma_size; unsigned int dma_addr; unsigned int ofs; scalar_t__ buf; } ;
struct TYPE_4__ {struct tty_struct* tty; } ;
struct TYPE_5__ {TYPE_1__ port; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 unsigned int FUNC_0 (struct uart_port*) ;
 int FUNC_1 (struct uart_port*,int ) ;
 int FUNC_2 (struct uart_port*,int) ;
 int FUNC_3 (struct uart_port*,unsigned int) ;
 int FUNC_4 (struct uart_port*,unsigned int) ;
 int FUNC_5 (int ,unsigned int,unsigned int,int ) ;
 int FUNC_6 (int ,unsigned int,unsigned int,int ) ;
 scalar_t__ FUNC_7 (int) ;
 unsigned int FUNC_8 (unsigned int,unsigned int) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *) ;
 struct atmel_uart_port* FUNC_11 (struct uart_port*) ;
 int FUNC_12 (struct tty_struct*) ;
 int FUNC_13 (struct tty_struct*,scalar_t__,unsigned int) ;

__attribute__((used)) static void FUNC_14(struct uart_port *VAR_4)
{
 struct atmel_uart_port *VAR_5 = FUNC_11(VAR_4);
 struct tty_struct *VAR_6 = VAR_4->state->port.tty;
 struct atmel_dma_buffer *VAR_7;
 int VAR_8 = VAR_5->pdc_rx_idx;
 unsigned int VAR_9;
 unsigned int VAR_10;
 unsigned int VAR_11;

 do {

  FUNC_1(VAR_4, VAR_1);

  VAR_7 = &VAR_5->pdc_rx[VAR_8];
  VAR_9 = FUNC_0(VAR_4) - VAR_7->dma_addr;
  VAR_10 = VAR_7->ofs;
  VAR_9 = FUNC_8(VAR_9, VAR_7->dma_size);

  if (FUNC_7(VAR_9 != VAR_10)) {
   FUNC_5(VAR_4->dev, VAR_7->dma_addr,
     VAR_7->dma_size, VAR_3);







   VAR_11 = VAR_9 - VAR_10;

   FUNC_13(VAR_6, VAR_7->buf + VAR_7->ofs, VAR_11);

   FUNC_6(VAR_4->dev, VAR_7->dma_addr,
     VAR_7->dma_size, VAR_3);

   VAR_4->icount.rx += VAR_11;
   VAR_7->ofs = VAR_9;
  }





  if (VAR_9 >= VAR_7->dma_size) {
   VAR_7->ofs = 0;
   FUNC_4(VAR_4, VAR_7->dma_addr);
   FUNC_3(VAR_4, VAR_7->dma_size);

   VAR_8 = !VAR_8;
   VAR_5->pdc_rx_idx = VAR_8;
  }
 } while (VAR_9 >= VAR_7->dma_size);





 FUNC_10(&VAR_4->lock);
 FUNC_12(VAR_6);
 FUNC_9(&VAR_4->lock);

 FUNC_2(VAR_4, VAR_0 | VAR_2);
}
