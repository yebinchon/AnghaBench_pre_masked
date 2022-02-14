
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct uart_port {int lock; } ;
typedef int irda_speed_t ;
typedef int irda_module_t ;



 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;

 int VAR_5 ;

 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (struct uart_port*,int ) ;
 struct uart_port* VAR_8 ;
 int FUNC_1 (struct uart_port*,int ,int) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;

void FUNC_4(irda_module_t VAR_9, irda_speed_t VAR_10)
{
 struct uart_port *VAR_11;
 unsigned long VAR_12;
 uint8_t VAR_13;

 VAR_11 = &VAR_8[0];

 FUNC_2(&VAR_11->lock, VAR_12);

 VAR_13 = FUNC_0(VAR_11, VAR_5);
 VAR_13 &= ~(VAR_1 | VAR_7 | VAR_6);
 switch (VAR_9) {
 case 129:
  VAR_13 |= VAR_3;
  break;
 case 128:
  VAR_13 |= VAR_4 | VAR_6;
  if (VAR_10 == VAR_0)
   VAR_13 |= VAR_7;
  break;
 case 130:
  VAR_13 |= VAR_2;
  break;
 default:
  break;
 }
 FUNC_1(VAR_11, VAR_5, VAR_13);

 FUNC_3(&VAR_11->lock, VAR_12);
}
