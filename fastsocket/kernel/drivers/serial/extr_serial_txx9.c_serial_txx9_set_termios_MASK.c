
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int read_status_mask; int ignore_status_mask; int flags; int lock; int mctrl; } ;
struct uart_txx9_port {TYPE_1__ port; } ;
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
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 unsigned int VAR_21 ;
 unsigned int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 unsigned int VAR_27 ;
 unsigned int VAR_28 ;
 unsigned int VAR_29 ;
 unsigned int VAR_30 ;
 unsigned int VAR_31 ;
 unsigned int VAR_32 ;
 unsigned int VAR_33 ;
 unsigned int VAR_34 ;
 int VAR_35 ;
 int FUNC_0 (TYPE_1__*,int ) ;
 unsigned int FUNC_1 (struct uart_txx9_port*,int ) ;
 int FUNC_2 (struct uart_txx9_port*,int ,int) ;
 int FUNC_3 (struct uart_txx9_port*,int ,unsigned int) ;
 int FUNC_4 (struct uart_txx9_port*,unsigned int) ;
 int FUNC_5 (struct uart_txx9_port*,int ,int) ;
 int FUNC_6 (int *,unsigned long) ;
 int FUNC_7 (int *,unsigned long) ;
 struct uart_txx9_port* FUNC_8 (struct uart_port*) ;
 unsigned int FUNC_9 (struct uart_port*,struct ktermios*,struct ktermios*,int ,int) ;
 unsigned int FUNC_10 (struct uart_port*,unsigned int) ;
 int FUNC_11 (struct uart_port*,int,unsigned int) ;

__attribute__((used)) static void
FUNC_12(struct uart_port *VAR_36, struct ktermios *VAR_37,
         struct ktermios *VAR_38)
{
 struct uart_txx9_port *VAR_39 = FUNC_8(VAR_36);
 unsigned int VAR_40, VAR_41 = 0;
 unsigned long VAR_42;
 unsigned int VAR_43, VAR_44;




 VAR_37->c_cflag &= ~(VAR_7 | VAR_2);
 VAR_37->c_cflag |= VAR_1;

 VAR_40 = FUNC_1(VAR_39, VAR_26);

 VAR_40 &= ~VAR_30;
 switch (VAR_37->c_cflag & VAR_5) {
 case 129:
  VAR_40 |= VAR_28;
  break;
 default:
 case 131:
 case 130:
 case 128:
  VAR_40 |= VAR_29;
  break;
 }

 VAR_40 &= ~VAR_34;
 if (VAR_37->c_cflag & VAR_6)
  VAR_40 |= VAR_33;
 else
  VAR_40 |= VAR_32;
 VAR_40 &= ~(VAR_31 | VAR_27);
 if (VAR_37->c_cflag & VAR_11)
  VAR_40 |= VAR_31;
 if (!(VAR_37->c_cflag & VAR_13))
  VAR_40 |= VAR_27;




 VAR_43 = FUNC_9(VAR_36, VAR_37, VAR_38, 0, VAR_36->uartclk/16/2);
 VAR_44 = FUNC_10(VAR_36, VAR_43);



 VAR_41 = VAR_22 | VAR_21;





 FUNC_6(&VAR_39->port.lock, VAR_42);




 FUNC_11(VAR_36, VAR_37->c_cflag, VAR_43);

 VAR_39->port.read_status_mask = VAR_18 |
  VAR_15 | VAR_14;
 if (VAR_37->c_iflag & VAR_10)
  VAR_39->port.read_status_mask |= VAR_17 | VAR_19;
 if (VAR_37->c_iflag & (VAR_0 | VAR_12))
  VAR_39->port.read_status_mask |= VAR_16;




 VAR_39->port.ignore_status_mask = 0;
 if (VAR_37->c_iflag & VAR_9)
  VAR_39->port.ignore_status_mask |= VAR_19 | VAR_17;
 if (VAR_37->c_iflag & VAR_8) {
  VAR_39->port.ignore_status_mask |= VAR_16;




  if (VAR_37->c_iflag & VAR_9)
   VAR_39->port.ignore_status_mask |= VAR_18;
 }




 if ((VAR_37->c_cflag & VAR_3) == 0)
  VAR_39->port.ignore_status_mask |= VAR_14;


 if ((VAR_37->c_cflag & VAR_4) &&
     (VAR_39->port.flags & VAR_35)) {
  FUNC_5(VAR_39, VAR_23,
   VAR_24 | VAR_25);
 } else {
  FUNC_2(VAR_39, VAR_23,
    VAR_24 | VAR_25);
 }

 FUNC_3(VAR_39, VAR_26, VAR_40);
 FUNC_4(VAR_39, VAR_44);
 FUNC_3(VAR_39, VAR_20, VAR_41);

 FUNC_0(&VAR_39->port, VAR_39->port.mctrl);
 FUNC_7(&VAR_39->port.lock, VAR_42);
}
