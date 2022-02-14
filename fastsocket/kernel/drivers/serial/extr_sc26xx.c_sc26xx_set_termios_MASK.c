
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct uart_port {int read_status_mask; int ignore_status_mask; int uartclk; int lock; } ;
struct ktermios {unsigned int c_iflag; unsigned int c_cflag; } ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 int VAR_2 ;
 unsigned int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;




 unsigned int VAR_11 ;
 int VAR_12 ;
 unsigned int VAR_13 ;
 unsigned int VAR_14 ;
 unsigned int VAR_15 ;
 int VAR_16 ;
 unsigned int VAR_17 ;
 unsigned int VAR_18 ;
 unsigned int VAR_19 ;
 int FUNC_0 (struct uart_port*,int ) ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int FUNC_1 (struct uart_port*,int ,int) ;
 int FUNC_2 (struct uart_port*,int ,int) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int *,unsigned long) ;
 unsigned int FUNC_5 (struct uart_port*,struct ktermios*,struct ktermios*,int ,int) ;
 unsigned int FUNC_6 (struct uart_port*,unsigned int) ;
 int FUNC_7 (struct uart_port*,unsigned int,int) ;
 int FUNC_8 (int) ;

__attribute__((used)) static void FUNC_9(struct uart_port *VAR_25, struct ktermios *VAR_26,
         struct ktermios *VAR_27)
{
 unsigned int VAR_28 = FUNC_5(VAR_25, VAR_26, VAR_27, 0, 4000000);
 unsigned int VAR_29 = FUNC_6(VAR_25, VAR_28);
 unsigned int VAR_30, VAR_31;
 unsigned long VAR_32;
 u8 VAR_33, VAR_34, VAR_35;

 FUNC_3(&VAR_25->lock, VAR_32);

 while ((FUNC_0(VAR_25, VAR_20) & ((1 << 3) | (1 << 2))) != 0xc)
  FUNC_8(2);

 FUNC_2(VAR_25, VAR_2, VAR_5 | VAR_4);

 VAR_30 = VAR_26->c_iflag;
 VAR_31 = VAR_26->c_cflag;

 VAR_25->read_status_mask = VAR_23;
 if (VAR_30 & VAR_15)
  VAR_25->read_status_mask |= VAR_24 | VAR_22;
 if (VAR_30 & (VAR_1 | VAR_18))
  VAR_25->read_status_mask |= VAR_21;

 VAR_25->ignore_status_mask = 0;
 if (VAR_30 & VAR_14)
  VAR_25->ignore_status_mask |= VAR_21;
 if ((VAR_31 & VAR_3) == 0)
  VAR_25->ignore_status_mask |= VAR_21 | VAR_22 |
         VAR_24 | VAR_23;

 switch (VAR_31 & VAR_11) {
 case 131:
  VAR_33 = 0x00;
  break;
 case 130:
  VAR_33 = 0x01;
  break;
 case 129:
  VAR_33 = 0x02;
  break;
 default:
 case 128:
  VAR_33 = 0x03;
  break;
 }
 VAR_34 = 0x07;
 if (VAR_31 & VAR_13)
  VAR_34 = 0x0f;
 if (VAR_31 & VAR_17) {
  if (VAR_31 & VAR_19)
   VAR_33 |= (1 << 2);
 } else
  VAR_33 |= (2 << 3);

 switch (VAR_28) {
 case 50:
  VAR_35 = 0x00;
  break;
 case 110:
  VAR_35 = 0x11;
  break;
 case 134:
  VAR_35 = 0x22;
  break;
 case 200:
  VAR_35 = 0x33;
  break;
 case 300:
  VAR_35 = 0x44;
  break;
 case 600:
  VAR_35 = 0x55;
  break;
 case 1200:
  VAR_35 = 0x66;
  break;
 case 2400:
  VAR_35 = 0x88;
  break;
 case 4800:
  VAR_35 = 0x99;
  break;
 default:
 case 9600:
  VAR_35 = 0xbb;
  break;
 case 19200:
  VAR_35 = 0xcc;
  break;
 }

 FUNC_2(VAR_25, VAR_2, VAR_8);
 FUNC_2(VAR_25, VAR_16, VAR_33);
 FUNC_2(VAR_25, VAR_16, VAR_34);

 FUNC_1(VAR_25, VAR_0, 0x80);
 FUNC_2(VAR_25, VAR_12, VAR_35);


 FUNC_2(VAR_25, VAR_2, VAR_9);
 FUNC_2(VAR_25, VAR_2, VAR_10);

 FUNC_2(VAR_25, VAR_2, VAR_7 | VAR_6);
 while ((FUNC_0(VAR_25, VAR_20) & ((1 << 3) | (1 << 2))) != 0xc)
  FUNC_8(2);


 FUNC_7(VAR_25, VAR_31,
       (VAR_25->uartclk / (16 * VAR_29)));

 FUNC_4(&VAR_25->lock, VAR_32);
}
