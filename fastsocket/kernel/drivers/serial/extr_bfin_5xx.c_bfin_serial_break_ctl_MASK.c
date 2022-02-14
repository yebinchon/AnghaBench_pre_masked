
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct uart_port {int dummy; } ;
struct bfin_serial_port {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 () ;
 int FUNC_1 (struct bfin_serial_port*) ;
 int FUNC_2 (struct bfin_serial_port*,int ) ;

__attribute__((used)) static void FUNC_3(struct uart_port *VAR_1, int VAR_2)
{
 struct bfin_serial_port *VAR_3 = (struct bfin_serial_port *)VAR_1;
 u16 VAR_4 = FUNC_1(VAR_3);
 if (VAR_2)
  VAR_4 |= VAR_0;
 else
  VAR_4 &= ~VAR_0;
 FUNC_2(VAR_3, VAR_4);
 FUNC_0();
}
