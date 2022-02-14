
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct uart_port {int dummy; } ;
struct circ_buf {int tail; } ;
struct TYPE_4__ {int tx; } ;
struct TYPE_6__ {TYPE_1__ icount; TYPE_2__* state; } ;
struct bfin_serial_port {int tx_count; int tx_done; TYPE_3__ port; int tx_dma_channel; } ;
struct TYPE_5__ {struct circ_buf xmit; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct bfin_serial_port*,int ) ;
 int FUNC_1 (struct bfin_serial_port*) ;
 int FUNC_2 (struct bfin_serial_port*,int ) ;
 int VAR_3 ;
 int FUNC_3 () ;
 int FUNC_4 (int ) ;

__attribute__((used)) static void FUNC_5(struct uart_port *VAR_4)
{
 struct bfin_serial_port *VAR_5 = (struct bfin_serial_port *)VAR_4;




 while (!(FUNC_1(VAR_5) & VAR_1))
  FUNC_3();
 FUNC_0(VAR_5, VAR_0);

}
