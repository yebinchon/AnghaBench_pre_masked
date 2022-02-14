
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct uart_port {int line; } ;
struct mpsc_port_info {int dummy; } ;


 int FUNC_0 (struct mpsc_port_info*) ;
 int FUNC_1 (char*,int ) ;

__attribute__((used)) static void FUNC_2(struct uart_port *VAR_0)
{
 struct mpsc_port_info *VAR_1 = (struct mpsc_port_info *)VAR_0;

 FUNC_1("mpsc_stop_tx[%d]\n", VAR_0->line);

 FUNC_0(VAR_1);
}
