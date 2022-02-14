
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct uart_port {int dummy; } ;
struct TYPE_2__ {int uartclk; int fifosize; int read_status_mask; int ignore_status_mask; int lock; scalar_t__ membase; } ;
struct uart_amba_port {TYPE_1__ port; } ;
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
 scalar_t__ VAR_10 ;
 unsigned int VAR_11 ;
 scalar_t__ VAR_12 ;
 scalar_t__ VAR_13 ;
 scalar_t__ VAR_14 ;
 unsigned int VAR_15 ;
 unsigned int VAR_16 ;
 unsigned int VAR_17 ;
 unsigned int VAR_18 ;
 unsigned int VAR_19 ;
 unsigned int VAR_20 ;
 unsigned int VAR_21 ;
 unsigned int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 int VAR_27 ;
 scalar_t__ FUNC_0 (struct uart_port*,int) ;
 unsigned int FUNC_1 (scalar_t__) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;
 unsigned int FUNC_4 (struct uart_port*,struct ktermios*,struct ktermios*,int ,int) ;
 unsigned int FUNC_5 (struct uart_port*,unsigned int) ;
 int FUNC_6 (struct uart_port*,int,unsigned int) ;
 int FUNC_7 (unsigned int,scalar_t__) ;

__attribute__((used)) static void
FUNC_8(struct uart_port *VAR_28, struct ktermios *VAR_29,
       struct ktermios *VAR_30)
{
 struct uart_amba_port *VAR_31 = (struct uart_amba_port *)VAR_28;
 unsigned int VAR_32, VAR_33;
 unsigned long VAR_34;
 unsigned int VAR_35, VAR_36;




 VAR_35 = FUNC_4(VAR_28, VAR_29, VAR_30, 0, VAR_31->port.uartclk/16);
 VAR_36 = FUNC_5(VAR_28, VAR_35);

 switch (VAR_29->c_cflag & VAR_2) {
 case 130:
  VAR_32 = VAR_19;
  break;
 case 129:
  VAR_32 = VAR_20;
  break;
 case 128:
  VAR_32 = VAR_21;
  break;
 default:
  VAR_32 = VAR_22;
  break;
 }
 if (VAR_29->c_cflag & VAR_3)
  VAR_32 |= VAR_18;
 if (VAR_29->c_cflag & VAR_7) {
  VAR_32 |= VAR_17;
  if (!(VAR_29->c_cflag & VAR_9))
   VAR_32 |= VAR_15;
 }
 if (VAR_31->port.fifosize > 1)
  VAR_32 |= VAR_16;

 FUNC_2(&VAR_31->port.lock, VAR_34);




 FUNC_6(VAR_28, VAR_29->c_cflag, VAR_35);

 VAR_31->port.read_status_mask = VAR_25;
 if (VAR_29->c_iflag & VAR_6)
  VAR_31->port.read_status_mask |= VAR_24 | VAR_26;
 if (VAR_29->c_iflag & (VAR_0 | VAR_8))
  VAR_31->port.read_status_mask |= VAR_23;




 VAR_31->port.ignore_status_mask = 0;
 if (VAR_29->c_iflag & VAR_5)
  VAR_31->port.ignore_status_mask |= VAR_24 | VAR_26;
 if (VAR_29->c_iflag & VAR_4) {
  VAR_31->port.ignore_status_mask |= VAR_23;




  if (VAR_29->c_iflag & VAR_5)
   VAR_31->port.ignore_status_mask |= VAR_25;
 }




 if ((VAR_29->c_cflag & VAR_1) == 0)
  VAR_31->port.ignore_status_mask |= VAR_27;


 VAR_33 = FUNC_1(VAR_31->port.membase + VAR_10) & ~VAR_11;

 if (FUNC_0(VAR_28, VAR_29->c_cflag))
  VAR_33 |= VAR_11;

 FUNC_7(0, VAR_31->port.membase + VAR_10);


 VAR_36 -= 1;
 FUNC_7((VAR_36 & 0xf00) >> 8, VAR_31->port.membase + VAR_14);
 FUNC_7(VAR_36 & 0xff, VAR_31->port.membase + VAR_13);






 FUNC_7(VAR_32, VAR_31->port.membase + VAR_12);
 FUNC_7(VAR_33, VAR_31->port.membase + VAR_10);

 FUNC_3(&VAR_31->port.lock, VAR_34);
}
