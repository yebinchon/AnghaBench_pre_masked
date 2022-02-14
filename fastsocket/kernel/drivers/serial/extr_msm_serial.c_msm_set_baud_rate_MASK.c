
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct uart_port {int fifosize; } ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 unsigned int VAR_5 ;
 unsigned int VAR_6 ;
 unsigned int VAR_7 ;
 unsigned int VAR_8 ;
 unsigned int VAR_9 ;
 unsigned int VAR_10 ;
 unsigned int VAR_11 ;
 unsigned int VAR_12 ;
 int VAR_13 ;
 unsigned int VAR_14 ;
 unsigned int VAR_15 ;
 unsigned int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int FUNC_0 (struct uart_port*,int,int ) ;

__attribute__((used)) static int FUNC_1(struct uart_port *VAR_19, unsigned int VAR_20)
{
 unsigned int VAR_21, VAR_22, VAR_23;

 switch (VAR_20) {
 case 300:
  VAR_21 = VAR_7;
  VAR_22 = 1;
  break;
 case 600:
  VAR_21 = VAR_11;
  VAR_22 = 1;
  break;
 case 1200:
  VAR_21 = VAR_2;
  VAR_22 = 1;
  break;
 case 2400:
  VAR_21 = VAR_5;
  VAR_22 = 1;
  break;
 case 4800:
  VAR_21 = VAR_9;
  VAR_22 = 1;
  break;
 case 9600:
  VAR_21 = VAR_12;
  VAR_22 = 2;
  break;
 case 14400:
  VAR_21 = VAR_3;
  VAR_22 = 3;
  break;
 case 19200:
  VAR_21 = VAR_4;
  VAR_22 = 4;
  break;
 case 28800:
  VAR_21 = VAR_6;
  VAR_22 = 6;
  break;
 case 38400:
  VAR_21 = VAR_8;
  VAR_22 = 8;
  break;
 case 57600:
  VAR_21 = VAR_10;
  VAR_22 = 16;
  break;
 case 115200:
 default:
  VAR_21 = VAR_1;
  VAR_20 = 115200;
  VAR_22 = 31;
  break;
 }

 FUNC_0(VAR_19, VAR_21, VAR_0);


 VAR_23 = VAR_15 & VAR_22;
 VAR_23 |= VAR_14;
 VAR_23 |= VAR_16 & (VAR_22 << 2);
 FUNC_0(VAR_19, VAR_23, VAR_13);


 VAR_23 = (VAR_19->fifosize * 3) / 4;
 FUNC_0(VAR_19, VAR_23, VAR_17);


 FUNC_0(VAR_19, 10, VAR_18);

 return VAR_20;
}
