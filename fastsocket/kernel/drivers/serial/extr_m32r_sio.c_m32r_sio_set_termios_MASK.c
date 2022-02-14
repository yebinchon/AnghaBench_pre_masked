
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int read_status_mask; int ignore_status_mask; int lock; } ;
struct uart_sio_port {unsigned char lcr; TYPE_1__ port; int ier; } ;
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
 scalar_t__ FUNC_0 (TYPE_1__*,int) ;
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
 int VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 unsigned int FUNC_1 (struct uart_port*,unsigned int) ;
 int FUNC_2 (struct uart_sio_port*,int ,int ) ;
 int FUNC_3 (unsigned int) ;
 int FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (int *,unsigned long) ;
 unsigned int FUNC_6 (struct uart_port*,struct ktermios*,struct ktermios*,int ,int) ;
 int FUNC_7 (struct uart_port*,int,unsigned int) ;

__attribute__((used)) static void FUNC_8(struct uart_port *VAR_27,
 struct ktermios *VAR_28, struct ktermios *VAR_29)
{
 struct uart_sio_port *VAR_30 = (struct uart_sio_port *)VAR_27;
 unsigned char VAR_31 = 0;
 unsigned long VAR_32;
 unsigned int VAR_33, VAR_34;

 switch (VAR_28->c_cflag & VAR_3) {
 case 131:
  VAR_31 = VAR_17;
  break;
 case 130:
  VAR_31 = VAR_18;
  break;
 case 129:
  VAR_31 = VAR_19;
  break;
 default:
 case 128:
  VAR_31 = VAR_20;
  break;
 }

 if (VAR_28->c_cflag & VAR_4)
  VAR_31 |= VAR_16;
 if (VAR_28->c_cflag & VAR_8)
  VAR_31 |= VAR_14;
 if (!(VAR_28->c_cflag & VAR_10))
  VAR_31 |= VAR_13;
 VAR_33 = FUNC_6(VAR_27, VAR_28, VAR_29, 0, VAR_27->uartclk/16);

 VAR_34 = FUNC_1(VAR_27, VAR_33);





 FUNC_4(&VAR_30->port.lock, VAR_32);

 FUNC_3(VAR_33);




 FUNC_7(VAR_27, VAR_28->c_cflag, VAR_33);

 VAR_30->port.read_status_mask = VAR_24 | VAR_26 | VAR_22;
 if (VAR_28->c_iflag & VAR_7)
  VAR_30->port.read_status_mask |= VAR_23 | VAR_25;
 if (VAR_28->c_iflag & (VAR_0 | VAR_9))
  VAR_30->port.read_status_mask |= VAR_21;




 VAR_30->port.ignore_status_mask = 0;
 if (VAR_28->c_iflag & VAR_6)
  VAR_30->port.ignore_status_mask |= VAR_25 | VAR_23;
 if (VAR_28->c_iflag & VAR_5) {
  VAR_30->port.ignore_status_mask |= VAR_21;




  if (VAR_28->c_iflag & VAR_6)
   VAR_30->port.ignore_status_mask |= VAR_24;
 }




 if ((VAR_28->c_cflag & VAR_2) == 0)
  VAR_30->port.ignore_status_mask |= VAR_22;




 VAR_30->ier &= ~VAR_12;
 if (FUNC_0(&VAR_30->port, VAR_28->c_cflag))
  VAR_30->ier |= VAR_12;

 FUNC_2(VAR_30, VAR_11, VAR_30->ier);

 VAR_30->lcr = VAR_31;
 FUNC_5(&VAR_30->port.lock, VAR_32);
}
