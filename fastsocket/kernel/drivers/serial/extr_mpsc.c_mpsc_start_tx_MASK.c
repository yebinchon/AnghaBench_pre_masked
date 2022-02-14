
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct uart_port {int line; } ;
struct mpsc_port_info {int tx_lock; } ;


 int FUNC_0 (struct mpsc_port_info*) ;
 int FUNC_1 (struct mpsc_port_info*) ;
 int FUNC_2 (struct mpsc_port_info*) ;
 int FUNC_3 (char*,int ) ;
 int FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (int *,unsigned long) ;

__attribute__((used)) static void FUNC_6(struct uart_port *VAR_0)
{
 struct mpsc_port_info *VAR_1 = (struct mpsc_port_info *)VAR_0;
 unsigned long VAR_2;

 FUNC_4(&VAR_1->tx_lock, VAR_2);

 FUNC_2(VAR_1);
 FUNC_0(VAR_1);
 FUNC_1(VAR_1);

 FUNC_5(&VAR_1->tx_lock, VAR_2);

 FUNC_3("mpsc_start_tx[%d]\n", VAR_0->line);
}
