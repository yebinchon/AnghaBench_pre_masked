
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int lock; } ;
struct uart_sunsab_port {unsigned char cached_dafo; TYPE_1__ port; int irqflags; } ;
struct uart_port {int dummy; } ;


 unsigned char VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int *) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (struct uart_sunsab_port*) ;
 scalar_t__ FUNC_4 (int ,int *) ;

__attribute__((used)) static void FUNC_5(struct uart_port *VAR_3, int VAR_4)
{
 struct uart_sunsab_port *VAR_5 = (struct uart_sunsab_port *) VAR_3;
 unsigned long VAR_6;
 unsigned char VAR_7;

 FUNC_1(&VAR_5->port.lock, VAR_6);

 VAR_7 = VAR_5->cached_dafo;
 if (VAR_4)
  VAR_7 |= VAR_0;
 else
  VAR_7 &= ~VAR_0;
 VAR_5->cached_dafo = VAR_7;

 FUNC_0(VAR_1, &VAR_5->irqflags);
 if (FUNC_4(VAR_2, &VAR_5->irqflags))
  FUNC_3(VAR_5);

 FUNC_2(&VAR_5->port.lock, VAR_6);
}
