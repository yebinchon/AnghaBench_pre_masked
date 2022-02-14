
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct uart_port {int iotype; int serial_out; void* serial_in; } ;
struct uart_8250_port {int cur_iotype; } ;
 void* VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 void* VAR_3 ;
 int VAR_4 ;
 void* VAR_5 ;
 int VAR_6 ;
 void* VAR_7 ;
 int VAR_8 ;
 void* VAR_9 ;
 int VAR_10 ;
 void* VAR_11 ;
 int VAR_12 ;

__attribute__((used)) static void FUNC_0(struct uart_port *VAR_13)
{
 struct uart_8250_port *VAR_14 = (struct uart_8250_port *)VAR_13;
 switch (VAR_13->iotype) {
 case 132:
  VAR_13->serial_in = VAR_3;
  VAR_13->serial_out = VAR_4;
  break;

 case 131:
  VAR_13->serial_in = VAR_9;
  VAR_13->serial_out = VAR_10;
  break;

 case 129:
 case 130:
  VAR_13->serial_in = VAR_7;
  VAR_13->serial_out = VAR_8;
  break;







 case 128:
  VAR_13->serial_in = VAR_11;
  VAR_13->serial_out = VAR_12;
  break;

 case 133:
  VAR_13->serial_in = VAR_9;
  VAR_13->serial_out = VAR_2;
  break;

 default:
  VAR_13->serial_in = VAR_5;
  VAR_13->serial_out = VAR_6;
  break;
 }

 VAR_14->cur_iotype = VAR_13->iotype;
}
