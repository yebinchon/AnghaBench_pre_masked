
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct uart_port_lh7a40x {int statusPrev; } ;
struct uart_port {int irq; } ;


 int FUNC_0 (struct uart_port*,int ,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (struct uart_port*,int ) ;
 int VAR_7 ;
 int FUNC_2 (int ,int ,int ,char*,struct uart_port*) ;

__attribute__((used)) static int FUNC_3 (struct uart_port* VAR_8)
{
 int VAR_9;

 VAR_9 = FUNC_2 (VAR_8->irq, VAR_7, 0,
         "serial_lh7a40x", VAR_8);
 if (VAR_9)
  return VAR_9;


 ((struct uart_port_lh7a40x*) VAR_8)->statusPrev
  = FUNC_1 (VAR_8, VAR_6);




 FUNC_0 (VAR_8, VAR_4, VAR_3 | VAR_2);
 FUNC_0 (VAR_8, VAR_5, VAR_1 | VAR_0);

 return 0;
}
