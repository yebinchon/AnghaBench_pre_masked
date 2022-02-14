
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct uart_port {int line; } ;
struct TYPE_2__ {int minor; } ;


 TYPE_1__ VAR_0 ;

__attribute__((used)) static int FUNC_0(struct uart_port *VAR_1)
{
 return (VAR_0.minor - 64) + VAR_1->line;
}
