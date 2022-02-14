
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct uart_port {int dummy; } ;
struct TYPE_2__ {scalar_t__ (* tx_empty ) (struct uart_port*) ;} ;


 unsigned int VAR_0 ;
 TYPE_1__* VAR_1 ;
 scalar_t__ FUNC_0 (struct uart_port*) ;

__attribute__((used)) static unsigned int
FUNC_1(struct uart_port *VAR_2)
{
 return VAR_1->tx_empty(VAR_2) ? VAR_0 : 0;
}
