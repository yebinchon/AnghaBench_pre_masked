
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct uart_port {int flags; int uartclk; scalar_t__ type; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 unsigned int FUNC_0 (struct uart_port*,unsigned int) ;

__attribute__((used)) static unsigned int FUNC_1(struct uart_port *VAR_2, unsigned int VAR_3)
{
 unsigned int VAR_4;





 if ((VAR_2->flags & VAR_1) &&
     VAR_3 == (VAR_2->uartclk/4))
  VAR_4 = 0x8001;
 else if ((VAR_2->flags & VAR_1) &&
   VAR_3 == (VAR_2->uartclk/8))
  VAR_4 = 0x8002;




 else if ((VAR_2->type == VAR_0) &&
   VAR_3 > (VAR_2->uartclk/16))
  VAR_4 = 1;

 else
  VAR_4 = FUNC_0(VAR_2, VAR_3);

 return VAR_4;
}
