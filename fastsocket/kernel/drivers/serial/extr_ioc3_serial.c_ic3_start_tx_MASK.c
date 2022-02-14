
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct uart_port {int dummy; } ;
struct ioc3_port {TYPE_1__* ip_hooks; } ;
struct TYPE_2__ {int intr_tx_mt; } ;


 int VAR_0 ;
 int FUNC_0 (struct ioc3_port*,int ) ;
 struct ioc3_port* FUNC_1 (struct uart_port*) ;
 int FUNC_2 (struct ioc3_port*,int ,int) ;

__attribute__((used)) static void FUNC_3(struct uart_port *VAR_1)
{
 struct ioc3_port *VAR_2 = FUNC_1(VAR_1);

 if (VAR_2) {
  FUNC_2(VAR_2, VAR_0, 1);
  FUNC_0(VAR_2, VAR_2->ip_hooks->intr_tx_mt);
 }
}
