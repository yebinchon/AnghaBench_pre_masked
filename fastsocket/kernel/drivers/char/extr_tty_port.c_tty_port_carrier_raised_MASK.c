
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct tty_port {TYPE_1__* ops; } ;
struct TYPE_2__ {int (* carrier_raised ) (struct tty_port*) ;} ;


 int FUNC_0 (struct tty_port*) ;

int FUNC_1(struct tty_port *VAR_0)
{
 if (VAR_0->ops->carrier_raised == ((void*)0))
  return 1;
 return VAR_0->ops->carrier_raised(VAR_0);
}
