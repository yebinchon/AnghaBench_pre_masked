
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct uart_port {int dummy; } ;
struct mpsc_port_info {scalar_t__ ready; } ;


 int FUNC_0 (struct mpsc_port_info*) ;
 int FUNC_1 (struct mpsc_port_info*) ;

__attribute__((used)) static void FUNC_2(struct uart_port *VAR_0)
{
 struct mpsc_port_info *VAR_1 = (struct mpsc_port_info *)VAR_0;

 if (VAR_1->ready) {
  FUNC_1(VAR_1);
  FUNC_0(VAR_1);
  VAR_1->ready = 0;
 }
}
