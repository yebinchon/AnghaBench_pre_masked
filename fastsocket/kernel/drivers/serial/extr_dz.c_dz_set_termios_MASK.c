
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct uart_port {scalar_t__ ignore_status_mask; } ;
struct ktermios {int c_cflag; int c_iflag; } ;
struct TYPE_2__ {unsigned int line; int read_status_mask; int ignore_status_mask; int lock; } ;
struct dz_port {unsigned int cflag; TYPE_1__ port; } ;


 int VAR_0 ;
 int VAR_1 ;




 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 unsigned int VAR_6 ;
 unsigned int VAR_7 ;
 unsigned int VAR_8 ;
 unsigned int VAR_9 ;
 unsigned int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 unsigned int VAR_14 ;
 unsigned int VAR_15 ;
 int VAR_16 ;
 unsigned int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int FUNC_0 (unsigned int) ;
 int FUNC_1 (struct dz_port*,int ,unsigned int) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;
 struct dz_port* FUNC_4 (struct uart_port*) ;
 int FUNC_5 (struct ktermios*,unsigned int,unsigned int) ;
 unsigned int FUNC_6 (struct uart_port*,struct ktermios*,struct ktermios*,int,int) ;
 int FUNC_7 (struct uart_port*,int,unsigned int) ;

__attribute__((used)) static void FUNC_8(struct uart_port *VAR_24, struct ktermios *VAR_25,
      struct ktermios *VAR_26)
{
 struct dz_port *VAR_27 = FUNC_4(VAR_24);
 unsigned long VAR_28;
 unsigned int VAR_29, VAR_30;
 int VAR_31;

 VAR_29 = VAR_27->port.line;

 switch (VAR_25->c_cflag & VAR_2) {
 case 131:
  VAR_29 |= VAR_6;
  break;
 case 130:
  VAR_29 |= VAR_7;
  break;
 case 129:
  VAR_29 |= VAR_8;
  break;
 case 128:
 default:
  VAR_29 |= VAR_9;
 }

 if (VAR_25->c_cflag & VAR_3)
  VAR_29 |= VAR_10;
 if (VAR_25->c_cflag & VAR_21)
  VAR_29 |= VAR_14;
 if (VAR_25->c_cflag & VAR_23)
  VAR_29 |= VAR_15;

 VAR_30 = FUNC_6(VAR_24, VAR_25, VAR_26, 50, 9600);
 VAR_31 = FUNC_0(VAR_30);
 if (VAR_31 < 0) {
  VAR_30 = FUNC_6(VAR_24, VAR_26, ((void*)0), 50, 9600);
  VAR_31 = FUNC_0(VAR_30);
  if (VAR_31 < 0) {
   VAR_30 = 9600;
   VAR_31 = VAR_4;
  }
  FUNC_5(VAR_25, VAR_30, VAR_30);
 }
 VAR_29 |= VAR_31;

 if (VAR_25->c_cflag & VAR_1)
  VAR_29 |= VAR_17;

 FUNC_2(&VAR_27->port.lock, VAR_28);

 FUNC_7(VAR_24, VAR_25->c_cflag, VAR_30);

 FUNC_1(VAR_27, VAR_12, VAR_29);
 VAR_27->cflag = VAR_29;


 VAR_27->port.read_status_mask = VAR_13;
 if (VAR_25->c_iflag & VAR_20)
  VAR_27->port.read_status_mask |= VAR_11 | VAR_16;
 if (VAR_25->c_iflag & (VAR_0 | VAR_22))
  VAR_27->port.read_status_mask |= VAR_5;


 VAR_24->ignore_status_mask = 0;
 if ((VAR_25->c_iflag & (VAR_19 | VAR_18)) == (VAR_19 | VAR_18))
  VAR_27->port.ignore_status_mask |= VAR_13;
 if (VAR_25->c_iflag & VAR_19)
  VAR_27->port.ignore_status_mask |= VAR_11 | VAR_16;
 if (VAR_25->c_iflag & VAR_18)
  VAR_27->port.ignore_status_mask |= VAR_5;

 FUNC_3(&VAR_27->port.lock, VAR_28);
}
