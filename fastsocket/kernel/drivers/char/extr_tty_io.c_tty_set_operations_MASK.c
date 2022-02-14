
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tty_operations {int dummy; } ;
struct tty_driver {struct tty_operations const* ops; } ;



void FUNC_0(struct tty_driver *VAR_0,
   const struct tty_operations *VAR_1)
{
 VAR_0->ops = VAR_1;
}
