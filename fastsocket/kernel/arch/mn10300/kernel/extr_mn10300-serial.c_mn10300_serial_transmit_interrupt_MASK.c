
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_7__ {TYPE_2__* state; } ;
struct mn10300_serial_port {TYPE_3__ uart; int name; } ;
struct TYPE_5__ {int tty; } ;
struct TYPE_6__ {int xmit; TYPE_1__ port; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (char*,int ) ;
 int FUNC_1 (struct mn10300_serial_port*) ;
 scalar_t__ FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (TYPE_3__*) ;
 int FUNC_5 (TYPE_3__*) ;

__attribute__((used)) static void FUNC_6(struct mn10300_serial_port *VAR_1)
{
 FUNC_0("%s", VAR_1->name);

 if (!VAR_1->uart.state || !VAR_1->uart.state->port.tty) {
  FUNC_1(VAR_1);
  return;
 }

 if (FUNC_4(&VAR_1->uart) ||
     FUNC_3(&VAR_1->uart.state->xmit))
  FUNC_1(VAR_1);

 if (FUNC_2(&VAR_1->uart.state->xmit) < VAR_0)
  FUNC_5(&VAR_1->uart);
}
