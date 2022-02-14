
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct tty_port {TYPE_1__* ops; } ;
struct TYPE_2__ {int (* dtr_rts ) (struct tty_port*,int) ;} ;


 int FUNC_0 (struct tty_port*,int) ;

void FUNC_1(struct tty_port *VAR_0)
{
 if (VAR_0->ops->dtr_rts)
  VAR_0->ops->dtr_rts(VAR_0, 1);
}
