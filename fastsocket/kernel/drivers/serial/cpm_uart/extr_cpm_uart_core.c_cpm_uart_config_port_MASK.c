
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct uart_port {int type; int line; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct uart_port*) ;
 int FUNC_1 (char*,int ) ;

__attribute__((used)) static void FUNC_2(struct uart_port *VAR_2, int VAR_3)
{
 FUNC_1("CPM uart[%d]:config_port\n", VAR_2->line);

 if (VAR_3 & VAR_1) {
  VAR_2->type = VAR_0;
  FUNC_0(VAR_2);
 }
}
