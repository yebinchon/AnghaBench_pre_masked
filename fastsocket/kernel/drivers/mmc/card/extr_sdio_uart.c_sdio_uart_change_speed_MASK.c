
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sdio_uart_port {unsigned int uartclk; int read_status_mask; int ignore_status_mask; unsigned char ier; unsigned char lcr; int mctrl; } ;
struct ktermios {int c_cflag; int c_iflag; } ;


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
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 unsigned char VAR_17 ;
 unsigned char VAR_18 ;
 unsigned char VAR_19 ;
 int VAR_20 ;
 unsigned char VAR_21 ;
 int VAR_22 ;
 unsigned char VAR_23 ;
 unsigned char VAR_24 ;
 unsigned char VAR_25 ;
 unsigned char VAR_26 ;
 unsigned char VAR_27 ;
 unsigned char VAR_28 ;
 unsigned char VAR_29 ;
 unsigned char VAR_30 ;
 int VAR_31 ;
 int VAR_32 ;
 int VAR_33 ;
 int VAR_34 ;
 int VAR_35 ;
 int VAR_36 ;
 int FUNC_0 (struct sdio_uart_port*,int ,unsigned char) ;
 int FUNC_1 (struct sdio_uart_port*,int ) ;
 unsigned int FUNC_2 (struct ktermios*) ;

__attribute__((used)) static void FUNC_3(struct sdio_uart_port *VAR_37,
       struct ktermios *VAR_38,
       struct ktermios *VAR_39)
{
 unsigned char VAR_40, VAR_41 = 0;
 unsigned int VAR_42, VAR_43;

 switch (VAR_38->c_cflag & VAR_6) {
 case 131:
  VAR_40 = VAR_27;
  break;
 case 130:
  VAR_40 = VAR_28;
  break;
 case 129:
  VAR_40 = VAR_29;
  break;
 default:
 case 128:
  VAR_40 = VAR_30;
  break;
 }

 if (VAR_38->c_cflag & VAR_7)
  VAR_40 |= VAR_26;
 if (VAR_38->c_cflag & VAR_11)
  VAR_40 |= VAR_25;
 if (!(VAR_38->c_cflag & VAR_13))
  VAR_40 |= VAR_24;

 for (;;) {
  VAR_42 = FUNC_2(VAR_38);
  if (VAR_42 == 0)
   VAR_42 = 9600;
  if (VAR_42 <= VAR_37->uartclk)
   break;




  VAR_38->c_cflag &= ~VAR_2;
  if (VAR_39) {
   VAR_38->c_cflag |= VAR_39->c_cflag & VAR_2;
   VAR_39 = ((void*)0);
  } else
   VAR_38->c_cflag |= VAR_0;
 }
 VAR_43 = (2 * VAR_37->uartclk + VAR_42) / (2 * VAR_42);

 if (VAR_42 < 2400)
  VAR_41 = VAR_17 | VAR_19;
 else
  VAR_41 = VAR_17 | VAR_18;

 VAR_37->read_status_mask = VAR_34 | VAR_36 | VAR_32;
 if (VAR_38->c_iflag & VAR_10)
  VAR_37->read_status_mask |= VAR_33 | VAR_35;
 if (VAR_38->c_iflag & (VAR_1 | VAR_12))
  VAR_37->read_status_mask |= VAR_31;




 VAR_37->ignore_status_mask = 0;
 if (VAR_38->c_iflag & VAR_9)
  VAR_37->ignore_status_mask |= VAR_35 | VAR_33;
 if (VAR_38->c_iflag & VAR_8) {
  VAR_37->ignore_status_mask |= VAR_31;




  if (VAR_38->c_iflag & VAR_9)
   VAR_37->ignore_status_mask |= VAR_34;
 }




 if ((VAR_38->c_cflag & VAR_4) == 0)
  VAR_37->ignore_status_mask |= VAR_32;




 VAR_37->ier &= ~VAR_21;
 if ((VAR_38->c_cflag & VAR_5) || !(VAR_38->c_cflag & VAR_3))
  VAR_37->ier |= VAR_21;

 VAR_37->lcr = VAR_40;

 FUNC_0(VAR_37, VAR_20, VAR_37->ier);
 FUNC_0(VAR_37, VAR_22, VAR_40 | VAR_23);
 FUNC_0(VAR_37, VAR_14, VAR_43 & 0xff);
 FUNC_0(VAR_37, VAR_15, VAR_43 >> 8);
 FUNC_0(VAR_37, VAR_22, VAR_40);
 FUNC_0(VAR_37, VAR_16, VAR_41);

 FUNC_1(VAR_37, VAR_37->mctrl);
}
