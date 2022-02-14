
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct uart_port {int dummy; } ;
struct TYPE_2__ {int mapbase; } ;
struct sa1100_port {TYPE_1__ port; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ) ;

__attribute__((used)) static void FUNC_1(struct uart_port *VAR_1)
{
 struct sa1100_port *VAR_2 = (struct sa1100_port *)VAR_1;

 FUNC_0(VAR_2->port.mapbase, VAR_0);
}
