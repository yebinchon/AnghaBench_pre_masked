
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct uart_port {int dummy; } ;
struct serial_struct {scalar_t__ irq; int baud_base; } ;
struct sci_port {scalar_t__* irqs; } ;


 int VAR_0 ;
 size_t VAR_1 ;
 scalar_t__ VAR_2 ;
 struct sci_port* FUNC_0 (struct uart_port*) ;

__attribute__((used)) static int FUNC_1(struct uart_port *VAR_3, struct serial_struct *VAR_4)
{
 struct sci_port *VAR_5 = FUNC_0(VAR_3);

 if (VAR_4->irq != VAR_5->irqs[VAR_1] || VAR_4->irq > VAR_2)
  return -VAR_0;
 if (VAR_4->baud_base < 2400)

  return -VAR_0;

 return 0;
}
