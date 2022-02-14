
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {unsigned int timeout; int lock; } ;
struct uart_sio_port {int timer; TYPE_1__ port; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (struct uart_sio_port*,unsigned int) ;
 int FUNC_1 (int *,scalar_t__) ;
 unsigned int FUNC_2 (struct uart_sio_port*,int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static void FUNC_5(unsigned long VAR_2)
{
 struct uart_sio_port *VAR_3 = (struct uart_sio_port *)VAR_2;
 unsigned int VAR_4;
 unsigned int VAR_5;

 VAR_5 = FUNC_2(VAR_3, VAR_0);
 if (VAR_5 & 0x5) {
  FUNC_3(&VAR_3->port.lock);
  FUNC_0(VAR_3, VAR_5);
  FUNC_4(&VAR_3->port.lock);
 }

 VAR_4 = VAR_3->port.timeout;
 VAR_4 = VAR_4 > 6 ? (VAR_4 / 2 - 2) : 1;
 FUNC_1(&VAR_3->timer, VAR_1 + VAR_4);
}
