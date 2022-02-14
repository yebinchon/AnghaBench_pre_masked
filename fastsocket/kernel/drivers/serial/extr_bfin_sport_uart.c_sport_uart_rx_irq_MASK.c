
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct tty_struct {int dummy; } ;
struct TYPE_7__ {int rx; } ;
struct TYPE_8__ {TYPE_3__ icount; TYPE_2__* state; } ;
struct sport_uart_port {TYPE_4__ port; } ;
typedef int irqreturn_t ;
struct TYPE_5__ {struct tty_struct* tty; } ;
struct TYPE_6__ {TYPE_1__ port; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct sport_uart_port*) ;
 int VAR_2 ;
 unsigned int FUNC_1 (struct sport_uart_port*) ;
 int FUNC_2 (struct tty_struct*) ;
 int FUNC_3 (struct tty_struct*,unsigned int,int ) ;
 scalar_t__ FUNC_4 (TYPE_4__*,unsigned int) ;

__attribute__((used)) static irqreturn_t FUNC_5(int VAR_3, void *VAR_4)
{
 struct sport_uart_port *VAR_5 = VAR_4;
 struct tty_struct *VAR_6 = VAR_5->port.state->port.tty;
 unsigned int VAR_7;

 do {
  VAR_7 = FUNC_1(VAR_5);
  VAR_5->port.icount.rx++;

  if (FUNC_4(&VAR_5->port, VAR_7))
   ;
  else
   FUNC_3(VAR_6, VAR_7, VAR_2);
 } while (FUNC_0(VAR_5) & VAR_1);
 FUNC_2(VAR_6);

 return VAR_0;
}
