
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct uart_port {int dummy; } ;
struct TYPE_2__ {scalar_t__ type; } ;
struct sa1100_port {TYPE_1__ port; } ;


 scalar_t__ VAR_0 ;

__attribute__((used)) static const char *FUNC_0(struct uart_port *VAR_1)
{
 struct sa1100_port *VAR_2 = (struct sa1100_port *)VAR_1;

 return VAR_2->port.type == VAR_0 ? "SA1100" : ((void*)0);
}
