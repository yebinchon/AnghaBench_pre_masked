
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct uart_port {int dummy; } ;
struct serial_struct {scalar_t__ type; scalar_t__ irq; scalar_t__ io_type; int baud_base; void* iomem_base; scalar_t__ port; scalar_t__ hub6; } ;
struct TYPE_2__ {scalar_t__ irq; int uartclk; scalar_t__ iobase; scalar_t__ mapbase; } ;
struct sa1100_port {TYPE_1__ port; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;

__attribute__((used)) static int
FUNC_0(struct uart_port *VAR_4, struct serial_struct *VAR_5)
{
 struct sa1100_port *VAR_6 = (struct sa1100_port *)VAR_4;
 int VAR_7 = 0;

 if (VAR_5->type != VAR_2 && VAR_5->type != VAR_1)
  VAR_7 = -VAR_0;
 if (VAR_6->port.irq != VAR_5->irq)
  VAR_7 = -VAR_0;
 if (VAR_5->io_type != VAR_3)
  VAR_7 = -VAR_0;
 if (VAR_6->port.uartclk / 16 != VAR_5->baud_base)
  VAR_7 = -VAR_0;
 if ((void *)VAR_6->port.mapbase != VAR_5->iomem_base)
  VAR_7 = -VAR_0;
 if (VAR_6->port.iobase != VAR_5->port)
  VAR_7 = -VAR_0;
 if (VAR_5->hub6 != 0)
  VAR_7 = -VAR_0;
 return VAR_7;
}
