
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {unsigned long data; } ;
struct TYPE_3__ {unsigned int timeout; int irq; } ;
struct uart_sio_port {int ier; TYPE_2__ timer; TYPE_1__ port; } ;
struct uart_port {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ) ;
 scalar_t__ VAR_4 ;
 int FUNC_1 (TYPE_2__*,scalar_t__) ;
 int FUNC_2 (struct uart_sio_port*) ;
 int FUNC_3 () ;
 int FUNC_4 (struct uart_sio_port*,int ,int) ;
 int FUNC_5 () ;

__attribute__((used)) static int FUNC_6(struct uart_port *VAR_5)
{
 struct uart_sio_port *VAR_6 = (struct uart_sio_port *)VAR_5;
 int VAR_7;

 FUNC_3();






 if (!FUNC_0(VAR_6->port.irq)) {
  unsigned int VAR_8 = VAR_6->port.timeout;

  VAR_8 = VAR_8 > 6 ? (VAR_8 / 2 - 2) : 1;

  VAR_6->timer.data = (unsigned long)VAR_6;
  FUNC_1(&VAR_6->timer, VAR_4 + VAR_8);
 } else {
  VAR_7 = FUNC_2(VAR_6);
  if (VAR_7)
   return VAR_7;
 }
 VAR_6->ier = VAR_1 | VAR_3 | VAR_2;
 FUNC_4(VAR_6, VAR_0, VAR_6->ier);




 FUNC_5();

 return 0;
}
