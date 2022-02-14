
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct uart_port {int dummy; } ;
typedef int irqreturn_t ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 unsigned int VAR_5 ;
 int VAR_6 ;
 unsigned int FUNC_0 (struct uart_port*,int ) ;
 int FUNC_1 (struct uart_port*) ;
 int FUNC_2 (struct uart_port*) ;
 int FUNC_3 (struct uart_port*) ;

__attribute__((used)) static irqreturn_t FUNC_4 (int VAR_7, void* VAR_8)
{
 struct uart_port* VAR_9 = VAR_8;
 unsigned int VAR_10 = VAR_1;
 unsigned int VAR_11 = FUNC_0 (VAR_9, VAR_6);


 do {
  if (VAR_11 & (VAR_3 | VAR_4))
   FUNC_2(VAR_9);
  if (VAR_11 & VAR_2)
   FUNC_1 (VAR_9);
  if (VAR_11 & VAR_5)
   FUNC_3 (VAR_9);

  if (--VAR_10 == 0)
   break;

  VAR_11 = FUNC_0 (VAR_9, VAR_6);
 } while (VAR_11 & (VAR_3 | VAR_5 | VAR_4));

 return VAR_0;
}
