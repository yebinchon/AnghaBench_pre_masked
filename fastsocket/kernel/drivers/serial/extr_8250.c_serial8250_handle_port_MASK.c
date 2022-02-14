
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int lock; } ;
struct uart_8250_port {TYPE_1__ port; } ;


 int FUNC_0 (char*,unsigned int) ;
 int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 int FUNC_1 (struct uart_8250_port*) ;
 int FUNC_2 (struct uart_8250_port*,unsigned int*) ;
 unsigned int FUNC_3 (struct uart_8250_port*,int ) ;
 int FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (int *,unsigned long) ;
 int FUNC_6 (struct uart_8250_port*) ;

__attribute__((used)) static void FUNC_7(struct uart_8250_port *VAR_4)
{
 unsigned int VAR_5;
 unsigned long VAR_6;

 FUNC_4(&VAR_4->port.lock, VAR_6);

 VAR_5 = FUNC_3(VAR_4, VAR_0);

 FUNC_0("status = %x...", VAR_5);

 if (VAR_5 & (VAR_2 | VAR_1))
  FUNC_2(VAR_4, &VAR_5);
 FUNC_1(VAR_4);
 if (VAR_5 & VAR_3)
  FUNC_6(VAR_4);

 FUNC_5(&VAR_4->port.lock, VAR_6);
}
