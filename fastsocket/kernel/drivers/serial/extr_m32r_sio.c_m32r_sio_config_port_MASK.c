
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {size_t type; int lock; int fifosize; } ;
struct uart_sio_port {TYPE_1__ port; } ;
struct uart_port {int dummy; } ;
struct TYPE_4__ {int dfl_xmit_fifo_size; } ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 int FUNC_0 (int *,int) ;
 int FUNC_1 (int *,int) ;
 TYPE_2__* VAR_2 ;

__attribute__((used)) static void FUNC_2(struct uart_port *VAR_3, int VAR_4)
{
 struct uart_sio_port *VAR_5 = (struct uart_sio_port *)VAR_3;

 FUNC_0(&VAR_5->port.lock, VAR_4);

 VAR_5->port.type = (VAR_1 - VAR_0 + 1);
 VAR_5->port.fifosize = VAR_2[VAR_5->port.type].dfl_xmit_fifo_size;

 FUNC_1(&VAR_5->port.lock, VAR_4);
}
