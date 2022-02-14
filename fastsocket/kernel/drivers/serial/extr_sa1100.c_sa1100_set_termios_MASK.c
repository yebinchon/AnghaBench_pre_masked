
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct uart_port {int uartclk; } ;
struct TYPE_3__ {int lock; int ignore_status_mask; int read_status_mask; } ;
struct sa1100_port {TYPE_1__ port; int timer; } ;
struct ktermios {unsigned int c_cflag; int c_iflag; } ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 scalar_t__ FUNC_0 (TYPE_1__*,int) ;
 unsigned int FUNC_1 (struct sa1100_port*) ;
 int FUNC_2 (struct sa1100_port*) ;
 int FUNC_3 (struct sa1100_port*,unsigned int) ;
 int FUNC_4 (struct sa1100_port*,unsigned int) ;
 int FUNC_5 (struct sa1100_port*,unsigned int) ;
 int FUNC_6 (struct sa1100_port*,unsigned int) ;
 int FUNC_7 (struct sa1100_port*,int) ;
 unsigned int VAR_11 ;
 unsigned int VAR_12 ;
 unsigned int VAR_13 ;
 unsigned int VAR_14 ;
 unsigned int VAR_15 ;
 unsigned int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int FUNC_8 (int) ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int FUNC_9 (int) ;
 int FUNC_10 () ;
 int FUNC_11 (int *) ;
 int FUNC_12 (TYPE_1__*) ;
 int FUNC_13 (int *,unsigned long) ;
 int FUNC_14 (int *,unsigned long) ;
 unsigned int FUNC_15 (struct uart_port*,struct ktermios*,struct ktermios*,int ,int) ;
 unsigned int FUNC_16 (struct uart_port*,unsigned int) ;
 int FUNC_17 (struct uart_port*,int,unsigned int) ;

__attribute__((used)) static void
FUNC_18(struct uart_port *VAR_24, struct ktermios *VAR_25,
     struct ktermios *VAR_26)
{
 struct sa1100_port *VAR_27 = (struct sa1100_port *)VAR_24;
 unsigned long VAR_28;
 unsigned int VAR_29, VAR_30, VAR_31, VAR_32;
 unsigned int VAR_33 = VAR_26 ? VAR_26->c_cflag & VAR_3 : VAR_2;




 while ((VAR_25->c_cflag & VAR_3) != VAR_1 &&
        (VAR_25->c_cflag & VAR_3) != VAR_2) {
  VAR_25->c_cflag &= ~VAR_3;
  VAR_25->c_cflag |= VAR_33;
  VAR_33 = VAR_2;
 }

 if ((VAR_25->c_cflag & VAR_3) == VAR_2)
  VAR_29 = VAR_11;
 else
  VAR_29 = 0;

 if (VAR_25->c_cflag & VAR_4)
  VAR_29 |= VAR_14;
 if (VAR_25->c_cflag & VAR_8) {
  VAR_29 |= VAR_13;
  if (!(VAR_25->c_cflag & VAR_10))
   VAR_29 |= VAR_12;
 }




 VAR_31 = FUNC_15(VAR_24, VAR_25, VAR_26, 0, VAR_24->uartclk/16);
 VAR_32 = FUNC_16(VAR_24, VAR_31);

 FUNC_13(&VAR_27->port.lock, VAR_28);

 VAR_27->port.read_status_mask &= FUNC_8(VAR_19);
 VAR_27->port.read_status_mask |= FUNC_9(VAR_22);
 if (VAR_25->c_iflag & VAR_7)
  VAR_27->port.read_status_mask |=
    FUNC_9(VAR_20 | VAR_21);
 if (VAR_25->c_iflag & (VAR_0 | VAR_9))
  VAR_27->port.read_status_mask |=
    FUNC_8(VAR_17 | VAR_18);




 VAR_27->port.ignore_status_mask = 0;
 if (VAR_25->c_iflag & VAR_6)
  VAR_27->port.ignore_status_mask |=
    FUNC_9(VAR_20 | VAR_21);
 if (VAR_25->c_iflag & VAR_5) {
  VAR_27->port.ignore_status_mask |=
    FUNC_8(VAR_17 | VAR_18);




  if (VAR_25->c_iflag & VAR_6)
   VAR_27->port.ignore_status_mask |=
    FUNC_9(VAR_22);
 }

 FUNC_11(&VAR_27->timer);




 FUNC_17(VAR_24, VAR_25->c_cflag, VAR_31);




 VAR_30 = FUNC_1(VAR_27);
 FUNC_6(VAR_27, VAR_30 & ~(VAR_15 | VAR_16));

 while (FUNC_2(VAR_27) & VAR_23)
  FUNC_10();


 FUNC_6(VAR_27, 0);


 FUNC_3(VAR_27, VAR_29);


 VAR_32 -= 1;
 FUNC_4(VAR_27, ((VAR_32 & 0xf00) >> 8));
 FUNC_5(VAR_27, (VAR_32 & 0xff));

 FUNC_7(VAR_27, -1);

 FUNC_6(VAR_27, VAR_30);

 if (FUNC_0(&VAR_27->port, VAR_25->c_cflag))
  FUNC_12(&VAR_27->port);

 FUNC_14(&VAR_27->port.lock, VAR_28);
}
