
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ iobase; } ;
struct uart_sio_port {TYPE_1__ port; } ;


 unsigned int FUNC_0 (scalar_t__) ;

__attribute__((used)) static unsigned int FUNC_1(struct uart_sio_port *VAR_0, int VAR_1)
{
 return FUNC_0(VAR_0->port.iobase + VAR_1);
}
