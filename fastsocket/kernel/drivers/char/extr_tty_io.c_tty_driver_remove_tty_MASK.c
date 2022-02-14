
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct tty_struct {size_t index; } ;
struct tty_driver {int ** ttys; TYPE_1__* ops; } ;
struct TYPE_2__ {int (* remove ) (struct tty_driver*,struct tty_struct*) ;} ;


 int FUNC_0 (struct tty_driver*,struct tty_struct*) ;

__attribute__((used)) static void FUNC_1(struct tty_driver *VAR_0,
      struct tty_struct *VAR_1)
{
 if (VAR_0->ops->remove)
  VAR_0->ops->remove(VAR_0, VAR_1);
 else
  VAR_0->ttys[VAR_1->index] = ((void*)0);
}
