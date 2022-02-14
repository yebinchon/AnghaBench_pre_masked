
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct uart_driver {struct tty_driver* tty_driver; int state; } ;
struct tty_driver {int dummy; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (struct tty_driver*) ;
 int FUNC_2 (struct tty_driver*) ;

void FUNC_3(struct uart_driver *VAR_0)
{
 struct tty_driver *VAR_1 = VAR_0->tty_driver;
 FUNC_2(VAR_1);
 FUNC_1(VAR_1);
 FUNC_0(VAR_0->state);
 VAR_0->tty_driver = ((void*)0);
}
