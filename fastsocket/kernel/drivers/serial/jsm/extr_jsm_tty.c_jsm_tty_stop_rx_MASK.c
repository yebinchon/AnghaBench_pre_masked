
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct uart_port {int dummy; } ;
struct jsm_channel {TYPE_2__* ch_bd; } ;
struct TYPE_4__ {TYPE_1__* bd_ops; } ;
struct TYPE_3__ {int (* disable_receiver ) (struct jsm_channel*) ;} ;


 int FUNC_0 (struct jsm_channel*) ;

__attribute__((used)) static void FUNC_1(struct uart_port *VAR_0)
{
 struct jsm_channel *VAR_1 = (struct jsm_channel *)VAR_0;

 VAR_1->ch_bd->bd_ops->disable_receiver(VAR_1);
}
