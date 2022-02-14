
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int lock; scalar_t__ membase; } ;
struct uart_amba_port {TYPE_1__ port; } ;
typedef int irqreturn_t ;


 unsigned int VAR_0 ;
 int FUNC_0 (int) ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 unsigned int VAR_6 ;
 unsigned int VAR_7 ;
 unsigned int VAR_8 ;
 unsigned int VAR_9 ;
 int FUNC_1 (struct uart_amba_port*) ;
 int FUNC_2 (struct uart_amba_port*) ;
 int FUNC_3 (struct uart_amba_port*) ;
 unsigned int FUNC_4 (scalar_t__) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (unsigned int,scalar_t__) ;

__attribute__((used)) static irqreturn_t FUNC_8(int VAR_10, void *VAR_11)
{
 struct uart_amba_port *VAR_12 = VAR_11;
 unsigned int VAR_13, VAR_14 = VAR_0;
 int VAR_15 = 0;

 FUNC_5(&VAR_12->port.lock);

 VAR_13 = FUNC_4(VAR_12->port.membase + VAR_5);
 if (VAR_13) {
  do {
   FUNC_7(VAR_13 & ~(VAR_9|VAR_7|
       VAR_8),
          VAR_12->port.membase + VAR_4);

   if (VAR_13 & (VAR_7|VAR_8))
    FUNC_2(VAR_12);
   if (VAR_13 & (VAR_3|VAR_2|
          VAR_1|VAR_6))
    FUNC_1(VAR_12);
   if (VAR_13 & VAR_9)
    FUNC_3(VAR_12);

   if (VAR_14-- == 0)
    break;

   VAR_13 = FUNC_4(VAR_12->port.membase + VAR_5);
  } while (VAR_13 != 0);
  VAR_15 = 1;
 }

 FUNC_6(&VAR_12->port.lock);

 return FUNC_0(VAR_15);
}
