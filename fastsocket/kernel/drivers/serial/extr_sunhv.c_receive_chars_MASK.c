
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct uart_port {TYPE_2__* state; } ;
struct tty_struct {int dummy; } ;
struct TYPE_6__ {scalar_t__ (* receive_chars ) (struct uart_port*,struct tty_struct*) ;} ;
struct TYPE_4__ {struct tty_struct* tty; } ;
struct TYPE_5__ {TYPE_1__ port; } ;


 scalar_t__ FUNC_0 (struct uart_port*,struct tty_struct*) ;
 int FUNC_1 () ;
 TYPE_3__* VAR_0 ;

__attribute__((used)) static struct tty_struct *FUNC_2(struct uart_port *VAR_1)
{
 struct tty_struct *VAR_2 = ((void*)0);

 if (VAR_1->state != ((void*)0))
  VAR_2 = VAR_1->state->port.tty;

 if (VAR_0->receive_chars(VAR_1, VAR_2))
  FUNC_1();

 return VAR_2;
}
