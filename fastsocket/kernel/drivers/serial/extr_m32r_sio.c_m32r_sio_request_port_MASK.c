
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int flags; int membase; int mapbase; } ;
struct uart_sio_port {TYPE_1__ port; } ;
struct uart_port {int dummy; } ;
struct resource {int end; int start; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int) ;
 int FUNC_1 (struct uart_sio_port*,struct resource**) ;
 int FUNC_2 (struct resource*) ;

__attribute__((used)) static int FUNC_3(struct uart_port *VAR_2)
{
 struct uart_sio_port *VAR_3 = (struct uart_sio_port *)VAR_2;
 struct resource *VAR_4 = ((void*)0);
 int VAR_5 = 0;

 VAR_5 = FUNC_1(VAR_3, &VAR_4);




 if (VAR_5 == 0 && VAR_3->port.flags & VAR_1) {
  int VAR_6 = VAR_4->end - VAR_4->start + 1;

  VAR_3->port.membase = FUNC_0(VAR_3->port.mapbase, VAR_6);
  if (!VAR_3->port.membase)
   VAR_5 = -VAR_0;
 }

 if (VAR_5 < 0) {
  if (VAR_4)
   FUNC_2(VAR_4);
 }

 return VAR_5;
}
