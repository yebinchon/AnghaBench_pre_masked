
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int membase; } ;
struct uart_amba_port {int clk; TYPE_1__ port; } ;
struct amba_device {int dummy; } ;


 int FUNC_0 (struct uart_amba_port**) ;
 struct uart_amba_port* FUNC_1 (struct amba_device*) ;
 struct uart_amba_port** VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (struct amba_device*,int *) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (struct uart_amba_port*) ;
 int FUNC_6 (int *,TYPE_1__*) ;

__attribute__((used)) static int FUNC_7(struct amba_device *VAR_2)
{
 struct uart_amba_port *VAR_3 = FUNC_1(VAR_2);
 int VAR_4;

 FUNC_2(VAR_2, ((void*)0));

 FUNC_6(&VAR_1, &VAR_3->port);

 for (VAR_4 = 0; VAR_4 < FUNC_0(VAR_0); VAR_4++)
  if (VAR_0[VAR_4] == VAR_3)
   VAR_0[VAR_4] = ((void*)0);

 FUNC_4(VAR_3->port.membase);
 FUNC_3(VAR_3->clk);
 FUNC_5(VAR_3);
 return 0;
}
