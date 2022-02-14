
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct uart_port {int dummy; } ;
struct bfin_serial_port {int dummy; } ;


 unsigned short VAR_0 ;
 unsigned int VAR_1 ;
 unsigned short FUNC_0 (struct bfin_serial_port*) ;

__attribute__((used)) static unsigned int FUNC_1(struct uart_port *VAR_2)
{
 struct bfin_serial_port *VAR_3 = (struct bfin_serial_port *)VAR_2;
 unsigned short VAR_4;

 VAR_4 = FUNC_0(VAR_3);
 if (VAR_4 & VAR_0)
  return VAR_1;
 else
  return 0;
}
