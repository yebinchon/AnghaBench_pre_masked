
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct uart_port {int dummy; } ;
struct TYPE_2__ {int lock; int irq; } ;
struct pnx8xxx_port {TYPE_1__ port; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (TYPE_1__*) ;
 int VAR_4 ;
 int FUNC_1 (int ,int ,int ,char*,struct pnx8xxx_port*) ;
 int FUNC_2 (struct pnx8xxx_port*,int ) ;
 int FUNC_3 (struct pnx8xxx_port*,int ,int) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static int FUNC_6(struct uart_port *VAR_5)
{
 struct pnx8xxx_port *VAR_6 = (struct pnx8xxx_port *)VAR_5;
 int VAR_7;




 VAR_7 = FUNC_1(VAR_6->port.irq, VAR_4, 0,
        "pnx8xxx-uart", VAR_6);
 if (VAR_7)
  return VAR_7;





 FUNC_3(VAR_6, VAR_0, VAR_2 |
        VAR_3);

 FUNC_3(VAR_6, VAR_1, FUNC_2(VAR_6, VAR_1) |
       VAR_2 |
       VAR_3);




 FUNC_4(&VAR_6->port.lock);
 FUNC_0(&VAR_6->port);
 FUNC_5(&VAR_6->port.lock);

 return 0;
}
