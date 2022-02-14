
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct uart_port {int dummy; } ;
struct TYPE_4__ {int irq; } ;
struct TYPE_3__ {int buf; } ;
struct bfin_serial_port {scalar_t__ cts_pin; scalar_t__ rts_pin; int status_irq; TYPE_2__ port; TYPE_1__ rx_dma_buf; int rx_dma_timer; int rx_dma_channel; int tx_dma_channel; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;


 int VAR_5 ;
 scalar_t__ FUNC_0 (struct bfin_serial_port*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int *,int ,int ,int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int,struct bfin_serial_port*) ;
 int FUNC_6 (scalar_t__) ;
 int FUNC_7 (scalar_t__) ;

__attribute__((used)) static void FUNC_8(struct uart_port *VAR_6)
{
 struct bfin_serial_port *VAR_7 = (struct bfin_serial_port *)VAR_6;
 FUNC_5(VAR_7->port.irq, VAR_7);
 FUNC_5(VAR_7->port.irq+1, VAR_7);
}
