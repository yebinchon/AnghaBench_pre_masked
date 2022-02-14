
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct uart_port {int uartclk; } ;
struct TYPE_3__ {int read_status_mask; int ignore_status_mask; int lock; } ;
struct pnx8xxx_port {TYPE_1__ port; int timer; } ;
struct ktermios {unsigned int c_cflag; int c_iflag; } ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_1 (int ) ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 unsigned int VAR_20 ;
 unsigned int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 unsigned int VAR_26 ;
 unsigned int VAR_27 ;
 unsigned int VAR_28 ;
 unsigned int VAR_29 ;
 unsigned int VAR_30 ;
 unsigned int VAR_31 ;
 scalar_t__ FUNC_2 (TYPE_1__*,int) ;
 int FUNC_3 () ;
 int FUNC_4 (int *) ;
 int FUNC_5 (TYPE_1__*) ;
 int FUNC_6 (struct pnx8xxx_port*,int ) ;
 int FUNC_7 (struct pnx8xxx_port*,int ,unsigned int) ;
 int FUNC_8 (int *,unsigned long) ;
 int FUNC_9 (int *,unsigned long) ;
 unsigned int FUNC_10 (struct uart_port*,struct ktermios*,struct ktermios*,int ,int) ;
 unsigned int FUNC_11 (struct uart_port*,unsigned int) ;
 int FUNC_12 (struct uart_port*,int,unsigned int) ;

__attribute__((used)) static void
FUNC_13(struct uart_port *VAR_32, struct ktermios *VAR_33,
     struct ktermios *VAR_34)
{
 struct pnx8xxx_port *VAR_35 = (struct pnx8xxx_port *)VAR_32;
 unsigned long VAR_36;
 unsigned int VAR_37, VAR_38, VAR_39, VAR_40;
 unsigned int VAR_41 = VAR_34 ? VAR_34->c_cflag & VAR_4 : VAR_3;




 while ((VAR_33->c_cflag & VAR_4) != VAR_2 &&
        (VAR_33->c_cflag & VAR_4) != VAR_3) {
  VAR_33->c_cflag &= ~VAR_4;
  VAR_33->c_cflag |= VAR_41;
  VAR_41 = VAR_3;
 }

 if ((VAR_33->c_cflag & VAR_4) == VAR_3)
  VAR_37 = VAR_27;
 else
  VAR_37 = 0;

 if (VAR_33->c_cflag & VAR_5)
  VAR_37 |= VAR_26;
 if (VAR_33->c_cflag & VAR_9) {
  VAR_37 |= VAR_28;
  if (!(VAR_33->c_cflag & VAR_11))
   VAR_37 |= VAR_29;
 }




 VAR_39 = FUNC_10(VAR_32, VAR_33, VAR_34, 0, VAR_32->uartclk/16);
 VAR_40 = FUNC_11(VAR_32, VAR_39);

 FUNC_8(&VAR_35->port.lock, VAR_36);

 VAR_35->port.read_status_mask = FUNC_1(VAR_25) |
    FUNC_1(VAR_23) |
    FUNC_1(VAR_24);
 if (VAR_33->c_iflag & VAR_8)
  VAR_35->port.read_status_mask |=
   FUNC_0(VAR_17) |
   FUNC_0(VAR_18);
 if (VAR_33->c_iflag & (VAR_0 | VAR_10))
  VAR_35->port.read_status_mask |=
   FUNC_1(VAR_22);




 VAR_35->port.ignore_status_mask = 0;
 if (VAR_33->c_iflag & VAR_7)
  VAR_35->port.ignore_status_mask |=
   FUNC_0(VAR_17) |
   FUNC_0(VAR_18);
 if (VAR_33->c_iflag & VAR_6) {
  VAR_35->port.ignore_status_mask |=
   FUNC_1(VAR_22);




  if (VAR_33->c_iflag & VAR_7)
   VAR_35->port.ignore_status_mask |=
    FUNC_1(VAR_25);
 }




 if ((VAR_33->c_cflag & VAR_1) == 0)
  VAR_35->port.ignore_status_mask |=
   FUNC_1(VAR_24);

 FUNC_4(&VAR_35->timer);




 FUNC_12(VAR_32, VAR_33->c_cflag, VAR_39);




 VAR_38 = FUNC_6(VAR_35, VAR_15);
 FUNC_7(VAR_35, VAR_15, VAR_38 & ~(VAR_21 |
     VAR_20));

 while (FUNC_6(VAR_35, VAR_13) & VAR_19)
  FUNC_3();


 FUNC_7(VAR_35, VAR_15, 0);


 VAR_37 |= VAR_31;
 VAR_37 |= VAR_30;


 FUNC_7(VAR_35, VAR_16, VAR_37);


 VAR_40 -= 1;
 FUNC_7(VAR_35, VAR_12, VAR_40);

 FUNC_7(VAR_35, VAR_14, -1);

 FUNC_7(VAR_35, VAR_15, VAR_38);

 if (FUNC_2(&VAR_35->port, VAR_33->c_cflag))
  FUNC_5(&VAR_35->port);

 FUNC_9(&VAR_35->port.lock, VAR_36);
}
