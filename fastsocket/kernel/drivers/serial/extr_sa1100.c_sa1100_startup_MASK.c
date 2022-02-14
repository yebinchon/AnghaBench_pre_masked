
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct uart_port {int dummy; } ;
struct TYPE_2__ {int lock; int irq; } ;
struct sa1100_port {TYPE_1__ port; } ;


 int FUNC_0 (struct sa1100_port*,int) ;
 int FUNC_1 (struct sa1100_port*,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (int ,int ,int ,char*,struct sa1100_port*) ;
 int FUNC_3 (TYPE_1__*) ;
 int VAR_3 ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static int FUNC_6(struct uart_port *VAR_4)
{
 struct sa1100_port *VAR_5 = (struct sa1100_port *)VAR_4;
 int VAR_6;




 VAR_6 = FUNC_2(VAR_5->port.irq, VAR_3, 0,
        "sa11x0-uart", VAR_5);
 if (VAR_6)
  return VAR_6;




 FUNC_1(VAR_5, -1);
 FUNC_0(VAR_5, VAR_1 | VAR_2 | VAR_0);




 FUNC_4(&VAR_5->port.lock);
 FUNC_3(&VAR_5->port);
 FUNC_5(&VAR_5->port.lock);

 return 0;
}
