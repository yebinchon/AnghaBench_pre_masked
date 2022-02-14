
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int ulong ;
typedef int u32 ;
struct uart_port {int uartclk; } ;
struct TYPE_2__ {int read_status_mask; int ignore_status_mask; int lock; } ;
struct mpsc_port_info {int c_iflag; int c_cflag; int rcv_data; TYPE_1__ port; } ;
struct ktermios {int c_iflag; int c_cflag; } ;


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
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int FUNC_0 (struct mpsc_port_info*,int ) ;
 int FUNC_1 (struct mpsc_port_info*,int ) ;
 int FUNC_2 (struct mpsc_port_info*,int ) ;
 int FUNC_3 (struct mpsc_port_info*,int ) ;
 int FUNC_4 (struct mpsc_port_info*) ;
 int FUNC_5 (struct uart_port*) ;
 int FUNC_6 (int *,int ) ;
 int FUNC_7 (int *,int ) ;
 int FUNC_8 (struct uart_port*,struct ktermios*,struct ktermios*,int ,int ) ;
 int FUNC_9 (struct uart_port*,int,int ) ;

__attribute__((used)) static void FUNC_10(struct uart_port *VAR_25, struct ktermios *VAR_26,
   struct ktermios *VAR_27)
{
 struct mpsc_port_info *VAR_28 = (struct mpsc_port_info *)VAR_25;
 u32 VAR_29;
 ulong VAR_30;
 u32 VAR_31, VAR_32, VAR_33;

 VAR_28->c_iflag = VAR_26->c_iflag;
 VAR_28->c_cflag = VAR_26->c_cflag;

 switch (VAR_26->c_cflag & VAR_3) {
 case 131:
  VAR_31 = VAR_12;
  break;
 case 130:
  VAR_31 = VAR_13;
  break;
 case 129:
  VAR_31 = VAR_14;
  break;
 case 128:
 default:
  VAR_31 = VAR_15;
  break;
 }

 if (VAR_26->c_cflag & VAR_4)
  VAR_32 = VAR_17;
 else
  VAR_32 = VAR_16;

 VAR_33 = VAR_8;
 if (VAR_26->c_cflag & VAR_18)
  if (VAR_26->c_cflag & VAR_20)
   VAR_33 = VAR_10;
 VAR_29 = FUNC_8(VAR_25, VAR_26, VAR_27, 0, VAR_25->uartclk);

 FUNC_6(&VAR_28->port.lock, VAR_30);

 FUNC_9(VAR_25, VAR_26->c_cflag, VAR_29);

 FUNC_1(VAR_28, VAR_31);
 FUNC_3(VAR_28, VAR_32);
 FUNC_2(VAR_28, VAR_33);
 FUNC_0(VAR_28, VAR_29);


 VAR_28->port.read_status_mask = VAR_23;

 if (VAR_26->c_iflag & VAR_7)
  VAR_28->port.read_status_mask |= VAR_24
   | VAR_22;

 if (VAR_26->c_iflag & (VAR_0 | VAR_19))
  VAR_28->port.read_status_mask |= VAR_21;


 VAR_28->port.ignore_status_mask = 0;

 if (VAR_26->c_iflag & VAR_6)
  VAR_28->port.ignore_status_mask |= VAR_24
   | VAR_22;

 if (VAR_26->c_iflag & VAR_5) {
  VAR_28->port.ignore_status_mask |= VAR_21;

  if (VAR_26->c_iflag & VAR_6)
   VAR_28->port.ignore_status_mask |= VAR_23;
 }

 if ((VAR_26->c_cflag & VAR_2)) {
  if (!VAR_28->rcv_data) {
   VAR_28->rcv_data = 1;
   FUNC_4(VAR_28);
  }
 } else if (VAR_28->rcv_data) {
  FUNC_5(VAR_25);
  VAR_28->rcv_data = 0;
 }

 FUNC_7(&VAR_28->port.lock, VAR_30);
}
