
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct uart_port {scalar_t__ mapbase; } ;


 scalar_t__ VAR_0 ;

__attribute__((used)) static const char *FUNC_0(struct uart_port *VAR_1)
{
 if (VAR_1->mapbase == VAR_0)
  return "SGI IOC4 Serial [rs232]";
 else
  return "SGI IOC4 Serial [rs422]";
}
