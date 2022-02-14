
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct uart_port {int dummy; } ;
struct TYPE_4__ {int membase; } ;
struct uart_amba_port {TYPE_2__ port; int dev; TYPE_1__* data; } ;
struct TYPE_3__ {int (* set_mctrl ) (int ,int ,unsigned int) ;} ;


 int FUNC_0 (int ,int ,unsigned int) ;

__attribute__((used)) static void FUNC_1(struct uart_port *VAR_0, unsigned int VAR_1)
{
 struct uart_amba_port *VAR_2 = (struct uart_amba_port *)VAR_0;

 if (VAR_2->data)
  VAR_2->data->set_mctrl(VAR_2->dev, VAR_2->port.membase, VAR_1);
}
