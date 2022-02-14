
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct uart_port {int line; } ;
struct uart_cpm_port {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct uart_cpm_port*,int ) ;
 int FUNC_1 (char*,int ,int) ;

__attribute__((used)) static void FUNC_2(struct uart_port *VAR_2, int VAR_3)
{
 struct uart_cpm_port *VAR_4 = (struct uart_cpm_port *)VAR_2;

 FUNC_1("CPM uart[%d]:break ctrl, break_state: %d\n", VAR_2->line,
  VAR_3);

 if (VAR_3)
  FUNC_0(VAR_4, VAR_1);
 else
  FUNC_0(VAR_4, VAR_0);
}
