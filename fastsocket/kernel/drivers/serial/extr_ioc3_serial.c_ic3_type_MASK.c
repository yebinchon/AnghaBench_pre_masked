
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct uart_port {int line; } ;


 scalar_t__ FUNC_0 (int ) ;

__attribute__((used)) static const char *FUNC_1(struct uart_port *VAR_0)
{
 if (FUNC_0(VAR_0->line))
  return "SGI IOC3 Serial [rs232]";
 else
  return "SGI IOC3 Serial [rs422]";
}
