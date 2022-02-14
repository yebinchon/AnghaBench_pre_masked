
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct uart_port {TYPE_2__* state; scalar_t__ membase; } ;
typedef int irqreturn_t ;
struct TYPE_3__ {int tty; } ;
struct TYPE_4__ {TYPE_1__ port; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct uart_port*,int) ;
 int FUNC_3 (struct uart_port*,int) ;

__attribute__((used)) static irqreturn_t FUNC_4(int VAR_3, void *VAR_4)
{
 struct uart_port *VAR_5 = VAR_4;
 int VAR_6, VAR_7 = 0;

 do {
  int VAR_8 = FUNC_0(VAR_5->membase + VAR_2);
  VAR_6 = FUNC_2(VAR_5, VAR_8);
  VAR_6 |= FUNC_3(VAR_5, VAR_8);
  VAR_7++;
 } while (VAR_6);


 if (VAR_7 > 1) {
  FUNC_1(VAR_5->state->port.tty);
  return VAR_0;
 } else {
  return VAR_1;
 }
}
