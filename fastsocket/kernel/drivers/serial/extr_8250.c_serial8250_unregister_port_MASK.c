
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_4__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {size_t type; int * dev; int flags; } ;
struct uart_8250_port {TYPE_1__ port; int capabilities; } ;
struct TYPE_7__ {int dev; } ;
struct TYPE_6__ {int flags; } ;


 size_t VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 TYPE_4__* VAR_2 ;
 struct uart_8250_port* VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_2 (int *,TYPE_1__*) ;
 TYPE_2__* VAR_6 ;
 int FUNC_3 (int *,TYPE_1__*) ;

void FUNC_4(int VAR_7)
{
 struct uart_8250_port *VAR_8 = &VAR_3[VAR_7];

 FUNC_0(&VAR_5);
 FUNC_3(&VAR_4, &VAR_8->port);
 if (VAR_2) {
  VAR_8->port.flags &= ~VAR_1;
  VAR_8->port.type = VAR_0;
  VAR_8->port.dev = &VAR_2->dev;
  VAR_8->capabilities = VAR_6[VAR_8->port.type].flags;
  FUNC_2(&VAR_4, &VAR_8->port);
 } else {
  VAR_8->port.dev = ((void*)0);
 }
 FUNC_1(&VAR_5);
}
