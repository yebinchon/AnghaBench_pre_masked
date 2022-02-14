
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct tty_port {TYPE_1__* ops; int flags; } ;
struct TYPE_2__ {int (* shutdown ) (struct tty_port*) ;} ;


 int VAR_0 ;
 int FUNC_0 (struct tty_port*) ;
 scalar_t__ FUNC_1 (int ,int *) ;

__attribute__((used)) static void FUNC_2(struct tty_port *VAR_1)
{
 if (VAR_1->ops->shutdown &&
  FUNC_1(VAR_0, &VAR_1->flags))
   VAR_1->ops->shutdown(VAR_1);

}
