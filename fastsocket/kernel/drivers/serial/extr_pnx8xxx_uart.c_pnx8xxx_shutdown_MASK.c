
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct uart_port {int dummy; } ;
struct TYPE_2__ {int irq; } ;
struct pnx8xxx_port {TYPE_1__ port; int timer; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int ,struct pnx8xxx_port*) ;
 int FUNC_2 (struct pnx8xxx_port*,int ) ;
 int FUNC_3 (struct pnx8xxx_port*,int ,int) ;

__attribute__((used)) static void FUNC_4(struct uart_port *VAR_8)
{
 struct pnx8xxx_port *VAR_9 = (struct pnx8xxx_port *)VAR_8;
 int VAR_10;




 FUNC_0(&VAR_9->timer);




 FUNC_3(VAR_9, VAR_1, 0);




 VAR_10 = FUNC_2(VAR_9, VAR_2);
 VAR_10 &= ~VAR_6;
 VAR_10 |= VAR_7 | VAR_5;
 FUNC_3(VAR_9, VAR_2, VAR_10);




 FUNC_3(VAR_9, VAR_0, VAR_3 |
        VAR_4);




 FUNC_1(VAR_9->port.irq, VAR_9);
}
