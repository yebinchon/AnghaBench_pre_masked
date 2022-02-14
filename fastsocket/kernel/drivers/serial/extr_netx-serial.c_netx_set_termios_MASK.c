
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct uart_port {int uartclk; int ignore_status_mask; int read_status_mask; int lock; scalar_t__ membase; } ;
struct ktermios {int c_cflag; int c_iflag; } ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned char VAR_2 ;
 unsigned char VAR_3 ;
 unsigned char VAR_4 ;
 unsigned char VAR_5 ;
 unsigned char VAR_6 ;




 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 unsigned char VAR_13 ;
 unsigned char VAR_14 ;
 unsigned char VAR_15 ;
 unsigned char VAR_16 ;
 unsigned char VAR_17 ;
 unsigned char VAR_18 ;
 unsigned char VAR_19 ;
 unsigned char VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 unsigned char VAR_24 ;
 unsigned char VAR_25 ;
 unsigned char VAR_26 ;
 int VAR_27 ;
 int VAR_28 ;
 int VAR_29 ;
 scalar_t__ VAR_30 ;
 scalar_t__ VAR_31 ;
 scalar_t__ VAR_32 ;
 scalar_t__ FUNC_0 (struct uart_port*,int) ;
 scalar_t__ VAR_33 ;
 scalar_t__ VAR_34 ;
 scalar_t__ VAR_35 ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 unsigned int FUNC_4 (struct uart_port*,struct ktermios*,struct ktermios*,int ,int) ;
 int FUNC_5 (struct uart_port*,int,unsigned int) ;
 int FUNC_6 (unsigned char,scalar_t__) ;

__attribute__((used)) static void
FUNC_7(struct uart_port *VAR_36, struct ktermios *VAR_37,
     struct ktermios *VAR_38)
{
 unsigned int VAR_39, VAR_40;
 unsigned char VAR_41;
 unsigned char VAR_42 = VAR_18;
 unsigned char VAR_43 = 0;

 switch (VAR_37->c_cflag & VAR_7) {
 case 131:
  VAR_42 |= VAR_13;
  break;
 case 130:
  VAR_42 |= VAR_14;
  break;
 case 129:
  VAR_42 |= VAR_15;
  break;
 case 128:
  VAR_42 |= VAR_16;
  break;
 }

 if (VAR_37->c_cflag & VAR_8)
  VAR_42 |= VAR_20;

 if (VAR_37->c_cflag & VAR_21) {
  VAR_42 |= VAR_19;
  if (!(VAR_37->c_cflag & VAR_23))
   VAR_42 |= VAR_17;
 }

 if (VAR_37->c_cflag & VAR_1)
  VAR_43 = VAR_24 | VAR_25 | VAR_26;

 VAR_39 = FUNC_4(VAR_36, VAR_37, VAR_38, 0, VAR_36->uartclk/16);
 VAR_40 = VAR_39 * 4096;
 VAR_40 /= 1000;
 VAR_40 *= 256;
 VAR_40 /= 100000;

 FUNC_2(&VAR_36->lock);

 FUNC_5(VAR_36, VAR_37->c_cflag, VAR_39);

 VAR_41 = FUNC_1(VAR_36->membase + VAR_32);


 FUNC_6(VAR_41 & ~(VAR_2 | VAR_3 | VAR_5 | VAR_4),
  VAR_36->membase + VAR_32);


 while (FUNC_1(VAR_36->membase + VAR_33) & VAR_9);


 FUNC_6(VAR_41 & ~VAR_6, VAR_36->membase + VAR_32);


 VAR_41 &= ~VAR_2;
 if (FUNC_0(VAR_36, VAR_37->c_cflag))
  VAR_41 |= VAR_2;

 FUNC_6((VAR_40>>8) & 0xff, VAR_36->membase + VAR_31);
 FUNC_6(VAR_40 & 0xff, VAR_36->membase + VAR_30);
 FUNC_6(VAR_42, VAR_36->membase + VAR_34);

 FUNC_6(VAR_43, VAR_36->membase + VAR_35);




 VAR_36->ignore_status_mask = 0;
 if (VAR_37->c_iflag & VAR_11)
  VAR_36->ignore_status_mask |= VAR_29;
 if (VAR_37->c_iflag & VAR_10) {
  VAR_36->ignore_status_mask |= VAR_27;




  if (VAR_37->c_iflag & VAR_11)
   VAR_36->ignore_status_mask |= VAR_29;
 }

 VAR_36->read_status_mask = 0;
 if (VAR_37->c_iflag & (VAR_0 | VAR_22))
  VAR_36->read_status_mask |= VAR_27;
 if (VAR_37->c_iflag & VAR_12)
  VAR_36->read_status_mask |= VAR_29 | VAR_28;

 FUNC_6(VAR_41, VAR_36->membase + VAR_32);

 FUNC_3(&VAR_36->lock);
}
