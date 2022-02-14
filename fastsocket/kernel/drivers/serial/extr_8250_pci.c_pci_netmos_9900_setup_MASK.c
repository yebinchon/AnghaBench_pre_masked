
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct uart_port {int dummy; } ;
struct serial_private {TYPE_1__* dev; } ;
struct pciserial_board {int reg_shift; } ;
struct TYPE_2__ {int subsystem_device; } ;


 int FUNC_0 (struct serial_private*,struct pciserial_board const*,struct uart_port*,int) ;
 int FUNC_1 (struct serial_private*,struct uart_port*,unsigned int,int ,int ) ;

__attribute__((used)) static int FUNC_2(struct serial_private *VAR_0,
    const struct pciserial_board *VAR_1,
    struct uart_port *VAR_2, int VAR_3)
{
 unsigned int VAR_4;

 if ((VAR_0->dev->subsystem_device & 0xff00) == 0x3000) {



  VAR_4 = 3 * VAR_3;

  return FUNC_1(VAR_0, VAR_2, VAR_4, 0, VAR_1->reg_shift);
 } else {
  return FUNC_0(VAR_0, VAR_1, VAR_2, VAR_3);
 }
}
