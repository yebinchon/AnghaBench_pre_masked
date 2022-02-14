
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct uart_port {scalar_t__ membase; int * dev; } ;
struct platform_device {size_t id; int dev; } ;
struct TYPE_3__ {struct uart_port port; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int *,char*) ;
 TYPE_1__* VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (struct platform_device*,TYPE_1__*) ;
 int FUNC_2 (int *,struct uart_port*) ;
 int FUNC_3 (int,scalar_t__) ;

__attribute__((used)) static int FUNC_4(struct platform_device *VAR_3)
{
 struct uart_port *VAR_4 = &VAR_1[VAR_3->id].port;

 FUNC_0(&VAR_3->dev, "initialising\n");

 VAR_4->dev = &VAR_3->dev;

 FUNC_3(1, VAR_4->membase + VAR_0);
 FUNC_2(&VAR_2, &VAR_1[VAR_3->id].port);
 FUNC_1(VAR_3, &VAR_1[VAR_3->id]);

 return 0;
}
