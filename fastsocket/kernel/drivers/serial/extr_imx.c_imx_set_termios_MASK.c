
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef unsigned long uint64_t ;
struct uart_port {int uartclk; TYPE_2__* state; } ;
struct ktermios {unsigned int c_cflag; int c_iflag; } ;
struct TYPE_11__ {int read_status_mask; int ignore_status_mask; unsigned int uartclk; int lock; scalar_t__ membase; TYPE_4__* state; } ;
struct imx_port {TYPE_5__ port; int timer; scalar_t__ have_rtscts; } ;
typedef int speed_t ;
struct TYPE_9__ {int tty; } ;
struct TYPE_10__ {TYPE_3__ port; } ;
struct TYPE_7__ {scalar_t__ tty; } ;
struct TYPE_8__ {TYPE_1__ port; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 unsigned int VAR_4 ;
 unsigned int VAR_5 ;
 unsigned int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 scalar_t__ VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 scalar_t__ FUNC_0 (TYPE_5__*,int) ;
 scalar_t__ VAR_16 ;
 scalar_t__ VAR_17 ;
 scalar_t__ VAR_18 ;
 unsigned int VAR_19 ;
 unsigned int VAR_20 ;
 unsigned int VAR_21 ;
 scalar_t__ VAR_22 ;
 unsigned int VAR_23 ;
 unsigned int VAR_24 ;
 unsigned int VAR_25 ;
 unsigned int VAR_26 ;
 unsigned int VAR_27 ;
 unsigned int VAR_28 ;
 unsigned int VAR_29 ;
 unsigned int VAR_30 ;
 unsigned int VAR_31 ;
 scalar_t__ VAR_32 ;
 unsigned int VAR_33 ;
 unsigned int FUNC_1 (unsigned int) ;
 int VAR_34 ;
 int VAR_35 ;
 int VAR_36 ;
 int VAR_37 ;
 scalar_t__ FUNC_2 (struct imx_port*) ;
 scalar_t__ VAR_38 ;
 unsigned int VAR_39 ;
 int FUNC_3 () ;
 int FUNC_4 () ;
 int FUNC_5 (int *) ;
 int FUNC_6 (unsigned long,unsigned long) ;
 int FUNC_7 (TYPE_5__*) ;
 int FUNC_8 (int,unsigned int,int,int,unsigned long*,unsigned long*) ;
 unsigned int FUNC_9 (scalar_t__) ;
 int FUNC_10 (int *,unsigned long) ;
 int FUNC_11 (int *,unsigned long) ;
 int FUNC_12 (int ,int ,int ) ;
 unsigned int FUNC_13 (struct uart_port*,struct ktermios*,struct ktermios*,int,int) ;
 unsigned int FUNC_14 (struct uart_port*,unsigned int) ;
 int FUNC_15 (struct uart_port*,int,unsigned int) ;
 int FUNC_16 (unsigned int,scalar_t__) ;

__attribute__((used)) static void
FUNC_17(struct uart_port *VAR_40, struct ktermios *VAR_41,
     struct ktermios *VAR_42)
{
 struct imx_port *VAR_43 = (struct imx_port *)VAR_40;
 unsigned long VAR_44;
 unsigned int VAR_45, VAR_46, VAR_47, VAR_48, VAR_49;
 unsigned int VAR_50 = VAR_42 ? VAR_42->c_cflag & VAR_6 : VAR_5;
 unsigned int VAR_51, VAR_52;
 unsigned long VAR_53, VAR_54;
 uint64_t VAR_55;





 if (0) {
  VAR_41->c_cflag &= ~(VAR_8 | VAR_3 | VAR_2);
  VAR_41->c_cflag |= VAR_1;
 }




 while ((VAR_41->c_cflag & VAR_6) != VAR_4 &&
        (VAR_41->c_cflag & VAR_6) != VAR_5) {
  VAR_41->c_cflag &= ~VAR_6;
  VAR_41->c_cflag |= VAR_50;
  VAR_50 = VAR_5;
 }

 if ((VAR_41->c_cflag & VAR_6) == VAR_5)
  VAR_45 = VAR_31 | VAR_28 | VAR_24;
 else
  VAR_45 = VAR_28 | VAR_24;

 if (VAR_41->c_cflag & VAR_3) {
  if( VAR_43->have_rtscts ) {
   VAR_45 &= ~VAR_24;
   VAR_45 |= VAR_23;
  } else {
   VAR_41->c_cflag &= ~VAR_3;
  }
 }

 if (VAR_41->c_cflag & VAR_7)
  VAR_45 |= VAR_29;
 if (VAR_41->c_cflag & VAR_13) {
  VAR_45 |= VAR_25;
  if (VAR_41->c_cflag & VAR_15)
   VAR_45 |= VAR_26;
 }




 VAR_48 = FUNC_13(VAR_40, VAR_41, VAR_42, 50, VAR_40->uartclk / 16);
 VAR_49 = FUNC_14(VAR_40, VAR_48);

 FUNC_10(&VAR_43->port.lock, VAR_44);

 VAR_43->port.read_status_mask = 0;
 if (VAR_41->c_iflag & VAR_11)
  VAR_43->port.read_status_mask |= (VAR_35 | VAR_37);
 if (VAR_41->c_iflag & (VAR_0 | VAR_14))
  VAR_43->port.read_status_mask |= VAR_34;




 VAR_43->port.ignore_status_mask = 0;
 if (VAR_41->c_iflag & VAR_10)
  VAR_43->port.ignore_status_mask |= VAR_37;
 if (VAR_41->c_iflag & VAR_9) {
  VAR_43->port.ignore_status_mask |= VAR_34;




  if (VAR_41->c_iflag & VAR_10)
   VAR_43->port.ignore_status_mask |= VAR_36;
 }

 FUNC_5(&VAR_43->timer);




 FUNC_15(VAR_40, VAR_41->c_cflag, VAR_48);




 VAR_46 = FUNC_9(VAR_43->port.membase + VAR_18);
 FUNC_16(VAR_46 & ~(VAR_21 | VAR_19 | VAR_20),
   VAR_43->port.membase + VAR_18);

 while ( !(FUNC_9(VAR_43->port.membase + VAR_38) & VAR_39))
  FUNC_3();


 VAR_47 = FUNC_9(VAR_43->port.membase + VAR_22);
 FUNC_16(VAR_47 & ~( VAR_30 | VAR_27),
   VAR_43->port.membase + VAR_22);
 VAR_47 &= (VAR_30 | VAR_27);

 if (FUNC_2(VAR_43)) {




  VAR_51 = 1;
 } else {
  VAR_51 = VAR_43->port.uartclk / (VAR_48 * 16);
  if (VAR_51 > 7)
   VAR_51 = 7;
  if (!VAR_51)
   VAR_51 = 1;
 }

 FUNC_8(16 * VAR_51 * VAR_48, VAR_43->port.uartclk,
  1 << 16, 1 << 16, &VAR_53, &VAR_54);

 if (VAR_40->state && VAR_40->state->port.tty) {
  VAR_55 = VAR_43->port.uartclk;
  VAR_55 *= VAR_53;
  FUNC_6(VAR_55, VAR_54 * 16 * VAR_51);
  FUNC_12(VAR_43->port.state->port.tty,
    (speed_t)VAR_55, (speed_t)VAR_55);
 }

 VAR_53 -= 1;
 VAR_54 -= 1;

 VAR_52 = FUNC_9(VAR_43->port.membase + VAR_32);
 VAR_52 = (VAR_52 & (~VAR_33)) | FUNC_1(VAR_51);
 FUNC_16(VAR_52, VAR_43->port.membase + VAR_32);

 FUNC_16(VAR_53, VAR_43->port.membase + VAR_16);
 FUNC_16(VAR_54, VAR_43->port.membase + VAR_17);

 if (!FUNC_4())
  FUNC_16(VAR_43->port.uartclk / VAR_51 / 1000,
    VAR_43->port.membase + VAR_12);

 FUNC_16(VAR_46, VAR_43->port.membase + VAR_18);


 FUNC_16(VAR_45 | VAR_47, VAR_43->port.membase + VAR_22);

 if (FUNC_0(&VAR_43->port, VAR_41->c_cflag))
  FUNC_7(&VAR_43->port);

 FUNC_11(&VAR_43->port.lock, VAR_44);
}
