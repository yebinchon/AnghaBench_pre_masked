
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct uart_port {int line; } ;


 char const* VAR_0 ;
 int FUNC_0 (char*,int ,char const*) ;

__attribute__((used)) static const char *FUNC_1(struct uart_port *VAR_1)
{
 FUNC_0("mpsc_type[%d]: port type: %s\n", VAR_1->line,VAR_0);
 return VAR_0;
}
