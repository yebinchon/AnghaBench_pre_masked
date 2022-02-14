
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct uart_port {unsigned int mctrl; int lock; TYPE_1__* ops; } ;
struct TYPE_2__ {int (* set_mctrl ) (struct uart_port*,unsigned int) ;} ;


 int FUNC_0 (int *,unsigned long) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (struct uart_port*,unsigned int) ;

__attribute__((used)) static inline void
FUNC_3(struct uart_port *VAR_0, unsigned int VAR_1, unsigned int VAR_2)
{
 unsigned long VAR_3;
 unsigned int VAR_4;

 FUNC_0(&VAR_0->lock, VAR_3);
 VAR_4 = VAR_0->mctrl;
 VAR_0->mctrl = (VAR_4 & ~VAR_2) | VAR_1;
 if (VAR_4 != VAR_0->mctrl)
  VAR_0->ops->set_mctrl(VAR_0, VAR_0->mctrl);
 FUNC_1(&VAR_0->lock, VAR_3);
}
