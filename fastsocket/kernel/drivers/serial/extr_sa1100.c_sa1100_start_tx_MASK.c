
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct uart_port {int dummy; } ;
struct TYPE_2__ {int read_status_mask; } ;
struct sa1100_port {TYPE_1__ port; } ;


 int FUNC_0 (struct sa1100_port*) ;
 int FUNC_1 (struct sa1100_port*,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (int ) ;

__attribute__((used)) static void FUNC_3(struct uart_port *VAR_2)
{
 struct sa1100_port *VAR_3 = (struct sa1100_port *)VAR_2;
 u32 VAR_4;

 VAR_4 = FUNC_0(VAR_3);
 VAR_3->port.read_status_mask |= FUNC_2(VAR_1);
 FUNC_1(VAR_3, VAR_4 | VAR_0);
}
