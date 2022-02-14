
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int uartclk; int type; } ;
struct uart_8250_port {int capabilities; TYPE_1__ port; } ;


 int FUNC_0 (char*,...) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 unsigned int VAR_12 ;
 unsigned int VAR_13 ;
 int VAR_14 ;
 unsigned int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 unsigned int VAR_18 ;
 int VAR_19 ;
 unsigned char VAR_20 ;
 int VAR_21 ;
 int FUNC_1 (struct uart_8250_port*) ;
 int FUNC_2 (struct uart_8250_port*) ;
 unsigned short FUNC_3 (struct uart_8250_port*) ;
 int FUNC_4 (struct uart_8250_port*,unsigned short) ;
 unsigned int FUNC_5 (struct uart_8250_port*,int) ;
 int FUNC_6 (struct uart_8250_port*,int,unsigned int) ;

__attribute__((used)) static void FUNC_7(struct uart_8250_port *VAR_22)
{
 unsigned char VAR_23, VAR_24;
 unsigned int VAR_25;

 VAR_22->port.type = VAR_0;
 VAR_22->capabilities |= VAR_7;





 FUNC_6(VAR_22, VAR_17, VAR_18);
 if (FUNC_5(VAR_22, VAR_10) == 0) {
  FUNC_6(VAR_22, VAR_10, 0xA8);
  if (FUNC_5(VAR_22, VAR_10) != 0) {
   FUNC_0("EFRv1 ");
   VAR_22->port.type = VAR_1;
   VAR_22->capabilities |= VAR_6 | VAR_8;
  } else {
   FUNC_0("Motorola 8xxx DUART ");
  }
  FUNC_6(VAR_22, VAR_10, 0);
  return;
 }





 FUNC_6(VAR_22, VAR_17, 0xBF);
 if (FUNC_5(VAR_22, VAR_10) == 0 && !FUNC_2(VAR_22)) {
  FUNC_0("EFRv2 ");
  FUNC_1(VAR_22);
  return;
 }
 FUNC_6(VAR_22, VAR_17, 0);
 VAR_23 = FUNC_5(VAR_22, VAR_19);
 FUNC_6(VAR_22, VAR_17, 0xE0);
 VAR_24 = FUNC_5(VAR_22, 0x02);

 if (!((VAR_24 ^ VAR_23) & VAR_20)) {
  FUNC_6(VAR_22, VAR_17, 0);
  FUNC_6(VAR_22, VAR_19, VAR_23 ^ VAR_20);
  FUNC_6(VAR_22, VAR_17, 0xE0);
  VAR_24 = FUNC_5(VAR_22, 0x02);
  FUNC_6(VAR_22, VAR_17, 0);
  FUNC_6(VAR_22, VAR_19, VAR_23);

  if ((VAR_24 ^ VAR_23) & VAR_20) {
   unsigned short VAR_26;

   FUNC_6(VAR_22, VAR_17, 0xE0);

   VAR_26 = FUNC_3(VAR_22);
   VAR_26 <<= 3;

   VAR_23 = FUNC_5(VAR_22, 0x04);
   VAR_23 &= ~0xB0;
   VAR_23 |= 0x10;
   FUNC_6(VAR_22, 0x04, VAR_23);

   FUNC_4(VAR_22, VAR_26);

   FUNC_6(VAR_22, VAR_17, 0);

   VAR_22->port.uartclk = 921600*16;
   VAR_22->port.type = VAR_3;
   VAR_22->capabilities |= VAR_21;
   return;
  }
 }







 FUNC_6(VAR_22, VAR_17, 0);
 FUNC_6(VAR_22, VAR_11, VAR_13 | VAR_12);
 VAR_23 = FUNC_5(VAR_22, VAR_16) >> 5;
 FUNC_6(VAR_22, VAR_11, VAR_13);
 FUNC_6(VAR_22, VAR_17, VAR_18);
 FUNC_6(VAR_22, VAR_11, VAR_13 | VAR_12);
 VAR_24 = FUNC_5(VAR_22, VAR_16) >> 5;
 FUNC_6(VAR_22, VAR_11, VAR_13);
 FUNC_6(VAR_22, VAR_17, 0);

 FUNC_0("iir1=%d iir2=%d ", VAR_23, VAR_24);

 if (VAR_23 == 6 && VAR_24 == 7) {
  VAR_22->port.type = VAR_2;
  VAR_22->capabilities |= VAR_5 | VAR_8;
  return;
 }
 VAR_25 = FUNC_5(VAR_22, VAR_14);
 FUNC_6(VAR_22, VAR_14, VAR_25 & ~VAR_15);
 if (!(FUNC_5(VAR_22, VAR_14) & VAR_15)) {




  FUNC_6(VAR_22, VAR_14, VAR_25 | VAR_15);
  if (FUNC_5(VAR_22, VAR_14) & VAR_15) {




   FUNC_0("Xscale ");
   VAR_22->port.type = VAR_4;
   VAR_22->capabilities |= VAR_9;
   return;
  }
 } else {




  FUNC_0("Couldn't force IER_UUE to 0 ");
 }
 FUNC_6(VAR_22, VAR_14, VAR_25);
}
