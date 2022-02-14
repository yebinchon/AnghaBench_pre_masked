
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct uart_port {int dummy; } ;
struct TYPE_5__ {TYPE_1__* sc_ops; } ;
struct TYPE_4__ {int (* sal_wakeup_transmit ) (TYPE_2__*,int ) ;} ;


 int VAR_0 ;
 TYPE_2__ VAR_1 ;
 int FUNC_0 (TYPE_2__*,int ) ;

__attribute__((used)) static void FUNC_1(struct uart_port *VAR_2)
{
 if (VAR_1.sc_ops->sal_wakeup_transmit)
  VAR_1.sc_ops->sal_wakeup_transmit(&VAR_1,
            VAR_0);

}
