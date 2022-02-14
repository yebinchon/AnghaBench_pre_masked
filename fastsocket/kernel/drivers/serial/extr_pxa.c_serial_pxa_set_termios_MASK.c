
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {unsigned int uartclk; int read_status_mask; int ignore_status_mask; int lock; int mctrl; } ;
struct uart_pxa_port {unsigned char ier; unsigned char lcr; TYPE_1__ port; int mcr; } ;
struct uart_port {int uartclk; } ;
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
 scalar_t__ FUNC_0 (TYPE_1__*,int) ;
 int VAR_13 ;
 unsigned char VAR_14 ;
 unsigned char VAR_15 ;
 unsigned char VAR_16 ;
 unsigned char VAR_17 ;
 int VAR_18 ;
 unsigned char VAR_19 ;
 unsigned char VAR_20 ;
 int VAR_21 ;
 unsigned char VAR_22 ;
 unsigned char VAR_23 ;
 unsigned char VAR_24 ;
 unsigned char VAR_25 ;
 unsigned char VAR_26 ;
 unsigned char VAR_27 ;
 unsigned char VAR_28 ;
 unsigned char VAR_29 ;
 int VAR_30 ;
 int VAR_31 ;
 int VAR_32 ;
 int VAR_33 ;
 int VAR_34 ;
 int VAR_35 ;
 int VAR_36 ;
 int FUNC_1 (struct uart_pxa_port*,int ,unsigned char) ;
 int FUNC_2 (TYPE_1__*,int ) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int *,unsigned long) ;
 unsigned int FUNC_5 (struct uart_port*,struct ktermios*,struct ktermios*,int ,int) ;
 unsigned int FUNC_6 (struct uart_port*,unsigned int) ;
 int FUNC_7 (struct uart_port*,int,unsigned int) ;

__attribute__((used)) static void
FUNC_8(struct uart_port *VAR_37, struct ktermios *VAR_38,
         struct ktermios *VAR_39)
{
 struct uart_pxa_port *VAR_40 = (struct uart_pxa_port *)VAR_37;
 unsigned char VAR_41, VAR_42 = 0;
 unsigned long VAR_43;
 unsigned int VAR_44, VAR_45;

 switch (VAR_38->c_cflag & VAR_3) {
 case 131:
  VAR_41 = VAR_26;
  break;
 case 130:
  VAR_41 = VAR_27;
  break;
 case 129:
  VAR_41 = VAR_28;
  break;
 default:
 case 128:
  VAR_41 = VAR_29;
  break;
 }

 if (VAR_38->c_cflag & VAR_4)
  VAR_41 |= VAR_25;
 if (VAR_38->c_cflag & VAR_8)
  VAR_41 |= VAR_24;
 if (!(VAR_38->c_cflag & VAR_10))
  VAR_41 |= VAR_23;




 VAR_44 = FUNC_5(VAR_37, VAR_38, VAR_39, 0, VAR_37->uartclk/16);
 VAR_45 = FUNC_6(VAR_37, VAR_44);

 if ((VAR_40->port.uartclk / VAR_45) < (2400 * 16))
  VAR_42 = VAR_14 | VAR_15;
 else if ((VAR_40->port.uartclk / VAR_45) < (230400 * 16))
  VAR_42 = VAR_14 | VAR_17;
 else
  VAR_42 = VAR_14 | VAR_16;





 FUNC_3(&VAR_40->port.lock, VAR_43);





 VAR_40->ier |= VAR_20;




 FUNC_7(VAR_37, VAR_38->c_cflag, VAR_44);

 VAR_40->port.read_status_mask = VAR_33 | VAR_35 | VAR_31;
 if (VAR_38->c_iflag & VAR_7)
  VAR_40->port.read_status_mask |= VAR_32 | VAR_34;
 if (VAR_38->c_iflag & (VAR_0 | VAR_9))
  VAR_40->port.read_status_mask |= VAR_30;




 VAR_40->port.ignore_status_mask = 0;
 if (VAR_38->c_iflag & VAR_6)
  VAR_40->port.ignore_status_mask |= VAR_34 | VAR_32;
 if (VAR_38->c_iflag & VAR_5) {
  VAR_40->port.ignore_status_mask |= VAR_30;




  if (VAR_38->c_iflag & VAR_6)
   VAR_40->port.ignore_status_mask |= VAR_33;
 }




 if ((VAR_38->c_cflag & VAR_1) == 0)
  VAR_40->port.ignore_status_mask |= VAR_31;




 VAR_40->ier &= ~VAR_19;
 if (FUNC_0(&VAR_40->port, VAR_38->c_cflag))
  VAR_40->ier |= VAR_19;

 FUNC_1(VAR_40, VAR_18, VAR_40->ier);

 if (VAR_38->c_cflag & VAR_2)
  VAR_40->mcr |= VAR_36;
 else
  VAR_40->mcr &= ~VAR_36;

 FUNC_1(VAR_40, VAR_21, VAR_41 | VAR_22);
 FUNC_1(VAR_40, VAR_11, VAR_45 & 0xff);
 FUNC_1(VAR_40, VAR_12, VAR_45 >> 8);
 FUNC_1(VAR_40, VAR_21, VAR_41);
 VAR_40->lcr = VAR_41;
 FUNC_2(&VAR_40->port, VAR_40->port.mctrl);
 FUNC_1(VAR_40, VAR_13, VAR_42);
 FUNC_4(&VAR_40->port.lock, VAR_43);
}
