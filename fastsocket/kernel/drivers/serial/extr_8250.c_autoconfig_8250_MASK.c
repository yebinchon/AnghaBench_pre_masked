
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int type; } ;
struct uart_8250_port {TYPE_1__ port; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 unsigned char FUNC_0 (struct uart_8250_port*,int ) ;
 int FUNC_1 (struct uart_8250_port*,int ,unsigned char) ;

__attribute__((used)) static void FUNC_2(struct uart_8250_port *VAR_3)
{
 unsigned char VAR_4, VAR_5, VAR_6;

 VAR_3->port.type = VAR_1;

 VAR_4 = FUNC_0(VAR_3, VAR_2);
 FUNC_1(VAR_3, VAR_2, 0xa5);
 VAR_5 = FUNC_0(VAR_3, VAR_2);
 FUNC_1(VAR_3, VAR_2, 0x5a);
 VAR_6 = FUNC_0(VAR_3, VAR_2);
 FUNC_1(VAR_3, VAR_2, VAR_4);

 if (VAR_5 == 0xa5 && VAR_6 == 0x5a)
  VAR_3->port.type = VAR_0;
}
