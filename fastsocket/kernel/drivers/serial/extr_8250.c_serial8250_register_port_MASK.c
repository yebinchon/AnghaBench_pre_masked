
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct uart_port {scalar_t__ uartclk; int flags; size_t type; scalar_t__ serial_out; scalar_t__ serial_in; scalar_t__ dev; int private_data; int mapbase; int iotype; int regshift; int fifosize; int irqflags; int irq; int membase; int iobase; } ;
struct TYPE_5__ {scalar_t__ uartclk; int flags; size_t type; int line; scalar_t__ serial_out; scalar_t__ serial_in; int fifosize; scalar_t__ dev; int private_data; int mapbase; int iotype; int regshift; int irqflags; int irq; int membase; int iobase; } ;
struct uart_8250_port {TYPE_1__ port; int tx_loadsz; int capabilities; } ;
struct TYPE_6__ {int tx_loadsz; int flags; int fifo_size; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 struct uart_8250_port* FUNC_2 (struct uart_port*) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (int *,TYPE_1__*) ;
 TYPE_2__* VAR_6 ;
 int FUNC_5 (int *,TYPE_1__*) ;

int FUNC_6(struct uart_port *VAR_7)
{
 struct uart_8250_port *VAR_8;
 int VAR_9 = -VAR_1;

 if (VAR_7->uartclk == 0)
  return -VAR_0;

 FUNC_0(&VAR_5);

 VAR_8 = FUNC_2(VAR_7);
 if (VAR_8) {
  FUNC_5(&VAR_4, &VAR_8->port);

  VAR_8->port.iobase = VAR_7->iobase;
  VAR_8->port.membase = VAR_7->membase;
  VAR_8->port.irq = VAR_7->irq;
  VAR_8->port.irqflags = VAR_7->irqflags;
  VAR_8->port.uartclk = VAR_7->uartclk;
  VAR_8->port.fifosize = VAR_7->fifosize;
  VAR_8->port.regshift = VAR_7->regshift;
  VAR_8->port.iotype = VAR_7->iotype;
  VAR_8->port.flags = VAR_7->flags | VAR_2;
  VAR_8->port.mapbase = VAR_7->mapbase;
  VAR_8->port.private_data = VAR_7->private_data;
  if (VAR_7->dev)
   VAR_8->port.dev = VAR_7->dev;

  if (VAR_7->flags & VAR_3) {
   VAR_8->port.type = VAR_7->type;
   VAR_8->port.fifosize = VAR_6[VAR_7->type].fifo_size;
   VAR_8->capabilities = VAR_6[VAR_7->type].flags;
   VAR_8->tx_loadsz = VAR_6[VAR_7->type].tx_loadsz;
  }

  FUNC_3(&VAR_8->port);

  if (VAR_7->serial_in)
   VAR_8->port.serial_in = VAR_7->serial_in;
  if (VAR_7->serial_out)
   VAR_8->port.serial_out = VAR_7->serial_out;

  VAR_9 = FUNC_4(&VAR_4, &VAR_8->port);
  if (VAR_9 == 0)
   VAR_9 = VAR_8->port.line;
 }
 FUNC_1(&VAR_5);

 return VAR_9;
}
