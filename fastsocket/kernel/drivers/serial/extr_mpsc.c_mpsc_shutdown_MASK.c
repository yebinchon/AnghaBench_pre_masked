
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct uart_port {int line; } ;
struct TYPE_2__ {int irq; } ;
struct mpsc_port_info {TYPE_1__ port; } ;


 int FUNC_0 (int ,struct mpsc_port_info*) ;
 int FUNC_1 (struct mpsc_port_info*) ;
 int FUNC_2 (char*,int ) ;

__attribute__((used)) static void FUNC_3(struct uart_port *VAR_0)
{
 struct mpsc_port_info *VAR_1 = (struct mpsc_port_info *)VAR_0;

 FUNC_2("mpsc_shutdown[%d]: Shutting down MPSC\n", VAR_0->line);

 FUNC_1(VAR_1);
 FUNC_0(VAR_1->port.irq, VAR_1);
}
