
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int line; } ;
struct uart_qe_port {TYPE_1__ port; } ;
struct of_device {int dev; } ;


 struct uart_qe_port* FUNC_0 (int *) ;
 int FUNC_1 (int *,char*,int ) ;
 int FUNC_2 (int *,int *) ;
 int FUNC_3 (struct uart_qe_port*) ;
 int FUNC_4 (int *,TYPE_1__*) ;
 int VAR_0 ;

__attribute__((used)) static int FUNC_5(struct of_device *VAR_1)
{
 struct uart_qe_port *VAR_2 = FUNC_0(&VAR_1->dev);

 FUNC_1(&VAR_1->dev, "removing /dev/ttyQE%u\n", VAR_2->port.line);

 FUNC_4(&VAR_0, &VAR_2->port);

 FUNC_2(&VAR_1->dev, ((void*)0));
 FUNC_3(VAR_2);

 return 0;
}
