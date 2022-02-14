
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct uart_port {int uartclk; } ;
struct TYPE_5__ {size_t type; int fifosize; int read_status_mask; int ignore_status_mask; int lock; int mctrl; } ;
struct uart_8250_port {int bugs; int capabilities; int ier; unsigned char lcr; TYPE_2__ port; int mcr; } ;
struct ktermios {int c_cflag; int c_iflag; } ;
struct TYPE_4__ {unsigned char fcr; } ;


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
 size_t VAR_12 ;
 size_t VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 unsigned char VAR_21 ;
 scalar_t__ FUNC_0 (TYPE_2__*,int) ;
 int VAR_22 ;
 unsigned char VAR_23 ;
 unsigned char VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 int VAR_27 ;
 int VAR_28 ;
 int VAR_29 ;
 unsigned char VAR_30 ;
 unsigned char VAR_31 ;
 unsigned char VAR_32 ;
 unsigned char VAR_33 ;
 unsigned char VAR_34 ;
 unsigned char VAR_35 ;
 unsigned char VAR_36 ;
 unsigned char VAR_37 ;
 unsigned char VAR_38 ;
 int VAR_39 ;
 int VAR_40 ;
 int VAR_41 ;
 int VAR_42 ;
 int VAR_43 ;
 int VAR_44 ;
 int VAR_45 ;
 int VAR_46 ;
 int VAR_47 ;
 int VAR_48 ;
 scalar_t__ FUNC_1 () ;
 scalar_t__ FUNC_2 (struct uart_8250_port*) ;
 unsigned int FUNC_3 (struct uart_port*,unsigned int) ;
 int FUNC_4 (TYPE_2__*,int ) ;
 int FUNC_5 (struct uart_8250_port*,unsigned int) ;
 int FUNC_6 (struct uart_8250_port*,int ,int) ;
 int FUNC_7 (struct uart_8250_port*,int ,int) ;
 int FUNC_8 (struct uart_8250_port*,int ,unsigned char) ;
 int FUNC_9 (int *,unsigned long) ;
 int FUNC_10 (int *,unsigned long) ;
 scalar_t__ FUNC_11 (struct ktermios*) ;
 int FUNC_12 (struct ktermios*,unsigned int,unsigned int) ;
 TYPE_1__* VAR_49 ;
 unsigned int FUNC_13 (struct uart_port*,struct ktermios*,struct ktermios*,int,unsigned int) ;
 int FUNC_14 (struct uart_port*,int,unsigned int) ;

__attribute__((used)) static void
FUNC_15(struct uart_port *VAR_50, struct ktermios *VAR_51,
         struct ktermios *VAR_52)
{
 struct uart_8250_port *VAR_53 = (struct uart_8250_port *)VAR_50;
 unsigned char VAR_54, VAR_55 = 0;
 unsigned long VAR_56;
 unsigned int VAR_57, VAR_58, VAR_59;

 switch (VAR_51->c_cflag & VAR_4) {
 case 131:
  VAR_54 = VAR_35;
  break;
 case 130:
  VAR_54 = VAR_36;
  break;
 case 129:
  VAR_54 = VAR_37;
  break;
 default:
 case 128:
  VAR_54 = VAR_38;
  break;
 }

 if (VAR_51->c_cflag & VAR_5)
  VAR_54 |= VAR_34;
 if (VAR_51->c_cflag & VAR_9)
  VAR_54 |= VAR_32;
 if (!(VAR_51->c_cflag & VAR_11))
  VAR_54 |= VAR_31;
 VAR_59 = (VAR_53->port.type == VAR_13 ? VAR_50->uartclk/4 : VAR_50->uartclk/16);
 VAR_57 = FUNC_13(VAR_50, VAR_51, VAR_52,
      VAR_50->uartclk / 16 / 0xffff,
      VAR_59);
 VAR_58 = FUNC_3(VAR_50, VAR_57);




 if (VAR_53->bugs & VAR_15 && (VAR_58 & 0xff) == 0)
  VAR_58++;

 if (VAR_53->capabilities & VAR_18 && VAR_53->port.fifosize > 1) {
  if (VAR_57 < 2400)
   VAR_55 = VAR_23 | VAR_24;
  else
   VAR_55 = VAR_49[VAR_53->port.type].fcr;
 }
 if (VAR_53->capabilities & VAR_16 && VAR_53->port.fifosize >= 32) {
  VAR_53->mcr &= ~VAR_45;
  if (VAR_51->c_cflag & VAR_3)
   VAR_53->mcr |= VAR_45;
 }





 FUNC_9(&VAR_53->port.lock, VAR_56);





 if (VAR_53->port.type == VAR_13) {
  if (VAR_57 == VAR_50->uartclk/4)
   FUNC_6(VAR_53, VAR_48, 0x4);
  else if (VAR_57 == VAR_50->uartclk/8)
   FUNC_6(VAR_53, VAR_48, 0x8);
  else
   FUNC_6(VAR_53, VAR_48, 0);
 }




 FUNC_14(VAR_50, VAR_51->c_cflag, VAR_57);

 VAR_53->port.read_status_mask = VAR_42 | VAR_44 | VAR_40;
 if (VAR_51->c_iflag & VAR_8)
  VAR_53->port.read_status_mask |= VAR_41 | VAR_43;
 if (VAR_51->c_iflag & (VAR_0 | VAR_10))
  VAR_53->port.read_status_mask |= VAR_39;




 VAR_53->port.ignore_status_mask = 0;
 if (VAR_51->c_iflag & VAR_7)
  VAR_53->port.ignore_status_mask |= VAR_43 | VAR_41;
 if (VAR_51->c_iflag & VAR_6) {
  VAR_53->port.ignore_status_mask |= VAR_39;




  if (VAR_51->c_iflag & VAR_7)
   VAR_53->port.ignore_status_mask |= VAR_42;
 }




 if ((VAR_51->c_cflag & VAR_2) == 0)
  VAR_53->port.ignore_status_mask |= VAR_40;




 VAR_53->ier &= ~VAR_26;
 if (!(VAR_53->bugs & VAR_14) &&
   FUNC_0(&VAR_53->port, VAR_51->c_cflag))
  VAR_53->ier |= VAR_26;
 if (VAR_53->capabilities & VAR_19)
  VAR_53->ier |= VAR_28 | VAR_27;

 FUNC_7(VAR_53, VAR_25, VAR_53->ier);

 if (VAR_53->capabilities & VAR_17) {
  unsigned char VAR_60 = 0;





  if (VAR_51->c_cflag & VAR_3)
   VAR_60 |= VAR_21;

  FUNC_8(VAR_53, VAR_29, 0xBF);
  FUNC_8(VAR_53, VAR_20, VAR_60);
 }
 if (VAR_53->capabilities & VAR_46) {

  FUNC_8(VAR_53, VAR_29, 0xe0);
 } else {
  FUNC_8(VAR_53, VAR_29, VAR_54 | VAR_30);
 }

 FUNC_5(VAR_53, VAR_58);





 if (VAR_53->port.type == VAR_12)
  FUNC_8(VAR_53, VAR_22, VAR_55);

 FUNC_8(VAR_53, VAR_29, VAR_54);
 VAR_53->lcr = VAR_54;
 if (VAR_53->port.type != VAR_12) {
  if (VAR_55 & VAR_23) {

   FUNC_8(VAR_53, VAR_22, VAR_23);
  }
  FUNC_8(VAR_53, VAR_22, VAR_55);
 }
 FUNC_4(&VAR_53->port, VAR_53->port.mctrl);
 FUNC_10(&VAR_53->port.lock, VAR_56);

 if (FUNC_11(VAR_51))
  FUNC_12(VAR_51, VAR_57, VAR_57);
}
