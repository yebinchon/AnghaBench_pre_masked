
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct uart_port {scalar_t__ type; int dev; TYPE_2__* state; } ;
struct tty_struct {int dummy; } ;
struct TYPE_3__ {struct tty_struct* tty; } ;
struct TYPE_4__ {TYPE_1__ port; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (struct uart_port*,int ) ;
 int FUNC_2 (struct uart_port*,int ,int ) ;
 int FUNC_3 (struct tty_struct*) ;
 int FUNC_4 (struct tty_struct*,int ,int ) ;

__attribute__((used)) static inline int FUNC_5(struct uart_port *VAR_4)
{
 struct tty_struct *VAR_5 = VAR_4->state->port.tty;
 int VAR_6 = 0;

 if (VAR_4->type != VAR_0)
  return 0;

 if ((FUNC_1(VAR_4, VAR_2) & VAR_1) != 0) {
  FUNC_2(VAR_4, VAR_2, 0);

  FUNC_4(VAR_5, 0, VAR_3);
  FUNC_3(VAR_5);

  FUNC_0(VAR_4->dev, "overrun error\n");
  VAR_6++;
 }

 return VAR_6;
}
