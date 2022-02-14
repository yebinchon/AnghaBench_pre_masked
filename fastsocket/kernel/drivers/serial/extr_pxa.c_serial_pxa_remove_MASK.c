
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct uart_pxa_port {int clk; int port; } ;
struct platform_device {int dummy; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (struct uart_pxa_port*) ;
 struct uart_pxa_port* FUNC_2 (struct platform_device*) ;
 int FUNC_3 (struct platform_device*,int *) ;
 int VAR_0 ;
 int FUNC_4 (int *,int *) ;

__attribute__((used)) static int FUNC_5(struct platform_device *VAR_1)
{
 struct uart_pxa_port *VAR_2 = FUNC_2(VAR_1);

 FUNC_3(VAR_1, ((void*)0));

 FUNC_4(&VAR_0, &VAR_2->port);
 FUNC_0(VAR_2->clk);
 FUNC_1(VAR_2);

 return 0;
}
