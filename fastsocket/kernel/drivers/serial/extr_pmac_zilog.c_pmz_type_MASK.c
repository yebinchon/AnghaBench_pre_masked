
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct uart_port {int dummy; } ;
struct uart_pmac_port {int dummy; } ;


 scalar_t__ FUNC_0 (struct uart_pmac_port*) ;
 scalar_t__ FUNC_1 (struct uart_pmac_port*) ;
 struct uart_pmac_port* FUNC_2 (struct uart_port*) ;

__attribute__((used)) static const char *FUNC_3(struct uart_port *VAR_0)
{
 struct uart_pmac_port *VAR_1 = FUNC_2(VAR_0);

 if (FUNC_1(VAR_1))
  return "Z85c30 ESCC - Infrared port";
 else if (FUNC_0(VAR_1))
  return "Z85c30 ESCC - Internal modem";
 return "Z85c30 ESCC - Serial port";
}
