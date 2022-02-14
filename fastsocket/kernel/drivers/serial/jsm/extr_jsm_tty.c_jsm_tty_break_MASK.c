
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct uart_port {int lock; } ;
struct jsm_channel {TYPE_2__* ch_bd; } ;
struct TYPE_4__ {TYPE_1__* bd_ops; } ;
struct TYPE_3__ {int (* clear_break ) (struct jsm_channel*,int ) ;int (* send_break ) (struct jsm_channel*) ;} ;


 int FUNC_0 (int *,unsigned long) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (struct jsm_channel*) ;
 int FUNC_3 (struct jsm_channel*,int ) ;

__attribute__((used)) static void FUNC_4(struct uart_port *VAR_0, int VAR_1)
{
 unsigned long VAR_2;
 struct jsm_channel *VAR_3 = (struct jsm_channel *)VAR_0;

 FUNC_0(&VAR_0->lock, VAR_2);
 if (VAR_1 == -1)
  VAR_3->ch_bd->bd_ops->send_break(VAR_3);
 else
  VAR_3->ch_bd->bd_ops->clear_break(VAR_3, 0);

 FUNC_1(&VAR_0->lock, VAR_2);
}
