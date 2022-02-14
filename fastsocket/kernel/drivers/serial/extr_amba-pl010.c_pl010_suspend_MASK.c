
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct uart_amba_port {int port; } ;
struct amba_device {int dummy; } ;
typedef int pm_message_t ;


 struct uart_amba_port* FUNC_0 (struct amba_device*) ;
 int VAR_0 ;
 int FUNC_1 (int *,int *) ;

__attribute__((used)) static int FUNC_2(struct amba_device *VAR_1, pm_message_t VAR_2)
{
 struct uart_amba_port *VAR_3 = FUNC_0(VAR_1);

 if (VAR_3)
  FUNC_1(&VAR_0, &VAR_3->port);

 return 0;
}
