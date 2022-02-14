
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct uart_port {scalar_t__ type; scalar_t__ irq; scalar_t__ iotype; unsigned long mapbase; } ;
struct serial_struct {scalar_t__ irq; scalar_t__ io_type; scalar_t__ iomem_base; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;

__attribute__((used)) static int FUNC_0(struct uart_port *VAR_2,
    struct serial_struct *VAR_3)
{
 if (VAR_2->type != VAR_1)
  return -VAR_0;
 if (VAR_2->irq != VAR_3->irq)
  return -VAR_0;
 if (VAR_2->iotype != VAR_3->io_type)
  return -VAR_0;
 if (VAR_2->mapbase != (unsigned long)VAR_3->iomem_base)
  return -VAR_0;
 return 0;
}
