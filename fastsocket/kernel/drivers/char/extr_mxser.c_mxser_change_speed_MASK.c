
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct tty_struct {size_t index; int hw_stopped; TYPE_1__* termios; struct mxser_port* driver_data; } ;
struct TYPE_5__ {int flags; } ;
struct mxser_port {scalar_t__ type; int rx_trigger; unsigned int IER; unsigned int MCR; int read_status_mask; int ignore_status_mask; scalar_t__ ioaddr; TYPE_3__* board; TYPE_2__ port; } ;
struct ktermios {int dummy; } ;
struct TYPE_6__ {scalar_t__ chip_flag; } ;
struct TYPE_4__ {unsigned int c_cflag; } ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;




 unsigned int VAR_5 ;
 unsigned int VAR_6 ;
 scalar_t__ FUNC_0 (struct tty_struct*) ;
 scalar_t__ FUNC_1 (struct tty_struct*) ;
 scalar_t__ FUNC_2 (struct tty_struct*) ;
 scalar_t__ FUNC_3 (struct tty_struct*) ;
 scalar_t__ FUNC_4 (struct tty_struct*) ;
 scalar_t__ FUNC_5 (struct tty_struct*) ;
 scalar_t__ FUNC_6 (struct tty_struct*) ;
 unsigned int VAR_7 ;
 unsigned int VAR_8 ;
 unsigned int VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 scalar_t__ VAR_12 ;
 int FUNC_7 (struct tty_struct*) ;
 int FUNC_8 (struct tty_struct*) ;
 scalar_t__ VAR_13 ;
 unsigned int VAR_14 ;
 unsigned int VAR_15 ;
 unsigned int VAR_16 ;
 unsigned int VAR_17 ;
 unsigned int VAR_18 ;
 scalar_t__ VAR_19 ;
 unsigned int VAR_20 ;
 unsigned int VAR_21 ;
 scalar_t__ VAR_22 ;
 unsigned int VAR_23 ;
 unsigned int VAR_24 ;
 unsigned int VAR_25 ;
 int VAR_26 ;
 int VAR_27 ;
 int VAR_28 ;
 int VAR_29 ;
 int VAR_30 ;
 int VAR_31 ;
 scalar_t__ VAR_32 ;
 unsigned int VAR_33 ;
 scalar_t__ VAR_34 ;
 unsigned char VAR_35 ;
 unsigned char FUNC_9 (scalar_t__) ;
 int FUNC_10 (scalar_t__) ;
 int FUNC_11 (scalar_t__) ;
 int FUNC_12 (scalar_t__) ;
 int FUNC_13 (scalar_t__) ;
 int FUNC_14 (struct tty_struct*,int ) ;
 scalar_t__* VAR_36 ;
 int FUNC_15 (struct mxser_port*) ;
 int FUNC_16 (scalar_t__,int ) ;
 int FUNC_17 (scalar_t__,int ) ;
 int FUNC_18 (unsigned int,scalar_t__) ;
 int FUNC_19 (struct tty_struct*) ;
 int FUNC_20 (struct tty_struct*) ;

__attribute__((used)) static int FUNC_21(struct tty_struct *VAR_37,
     struct ktermios *VAR_38)
{
 struct mxser_port *VAR_39 = VAR_37->driver_data;
 unsigned VAR_40, VAR_41, VAR_42;
 int VAR_43 = 0;
 unsigned char VAR_44;

 VAR_40 = VAR_37->termios->c_cflag;
 if (!VAR_39->ioaddr)
  return VAR_43;

 if (VAR_36[VAR_37->index] == 0)
  FUNC_14(VAR_37, FUNC_19(VAR_37));


 switch (VAR_40 & VAR_5) {
 case 131:
  VAR_41 = 0x00;
  break;
 case 130:
  VAR_41 = 0x01;
  break;
 case 129:
  VAR_41 = 0x02;
  break;
 case 128:
  VAR_41 = 0x03;
  break;
 default:
  VAR_41 = 0x00;
  break;
 }
 if (VAR_40 & VAR_6)
  VAR_41 |= 0x04;
 if (VAR_40 & VAR_8)
  VAR_41 |= VAR_24;
 if (!(VAR_40 & VAR_9))
  VAR_41 |= VAR_23;
 if (VAR_40 & VAR_3)
  VAR_41 |= VAR_25;

 if ((VAR_39->type == VAR_12) || (VAR_39->type == VAR_10)) {
  if (VAR_39->board->chip_flag) {
   VAR_42 = VAR_14;
   VAR_42 |= VAR_7;
   FUNC_15(VAR_39);
  } else
   VAR_42 = 0;
 } else {
  VAR_42 = VAR_14;
  if (VAR_39->board->chip_flag) {
   VAR_42 |= VAR_7;
   FUNC_15(VAR_39);
  } else {
   switch (VAR_39->rx_trigger) {
   case 1:
    VAR_42 |= VAR_15;
    break;
   case 4:
    VAR_42 |= VAR_17;
    break;
   case 8:
    VAR_42 |= VAR_18;
    break;
   default:
    VAR_42 |= VAR_16;
    break;
   }
  }
 }


 VAR_39->IER &= ~VAR_20;
 VAR_39->MCR &= ~VAR_33;
 if (VAR_40 & VAR_4) {
  VAR_39->port.flags |= VAR_1;
  VAR_39->IER |= VAR_20;
  if ((VAR_39->type == VAR_11) || (VAR_39->board->chip_flag)) {
   VAR_39->MCR |= VAR_33;
  } else {
   VAR_44 = FUNC_9(VAR_39->ioaddr + VAR_34);
   if (VAR_37->hw_stopped) {
    if (VAR_44 & VAR_35) {
     VAR_37->hw_stopped = 0;
     if (VAR_39->type != VAR_11 &&
       !VAR_39->board->chip_flag) {
      FUNC_18(VAR_39->IER & ~VAR_21,
       VAR_39->ioaddr +
       VAR_19);
      VAR_39->IER |= VAR_21;
      FUNC_18(VAR_39->IER, VAR_39->ioaddr +
        VAR_19);
     }
     FUNC_20(VAR_37);
    }
   } else {
    if (!(VAR_44 & VAR_35)) {
     VAR_37->hw_stopped = 1;
     if ((VAR_39->type != VAR_11) &&
       (!VAR_39->board->chip_flag)) {
      VAR_39->IER &= ~VAR_21;
      FUNC_18(VAR_39->IER, VAR_39->ioaddr +
        VAR_19);
     }
    }
   }
  }
 } else {
  VAR_39->port.flags &= ~VAR_1;
 }
 FUNC_18(VAR_39->MCR, VAR_39->ioaddr + VAR_32);
 if (VAR_40 & VAR_2) {
  VAR_39->port.flags &= ~VAR_0;
 } else {
  VAR_39->port.flags |= VAR_0;
  VAR_39->IER |= VAR_20;
 }
 FUNC_18(VAR_39->IER, VAR_39->ioaddr + VAR_19);




 VAR_39->read_status_mask = VAR_29 | VAR_31 | VAR_27;
 if (FUNC_3(VAR_37))
  VAR_39->read_status_mask |= VAR_28 | VAR_30;
 if (FUNC_0(VAR_37) || FUNC_6(VAR_37))
  VAR_39->read_status_mask |= VAR_26;

 VAR_39->ignore_status_mask = 0;

 if (FUNC_1(VAR_37)) {
  VAR_39->ignore_status_mask |= VAR_26;
  VAR_39->read_status_mask |= VAR_26;




  if (FUNC_2(VAR_37)) {
   VAR_39->ignore_status_mask |=
      VAR_29 |
      VAR_30 |
      VAR_28;
   VAR_39->read_status_mask |=
      VAR_29 |
      VAR_30 |
      VAR_28;
  }
 }
 if (VAR_39->board->chip_flag) {
  FUNC_17(VAR_39->ioaddr, FUNC_7(VAR_37));
  FUNC_16(VAR_39->ioaddr, FUNC_8(VAR_37));
  if (FUNC_5(VAR_37)) {
   FUNC_12(
     VAR_39->ioaddr);
  } else {
   FUNC_10(
     VAR_39->ioaddr);
  }
  if (FUNC_4(VAR_37)) {
   FUNC_13(
     VAR_39->ioaddr);
  } else {
   FUNC_11(
     VAR_39->ioaddr);
  }
 }


 FUNC_18(VAR_42, VAR_39->ioaddr + VAR_13);
 FUNC_18(VAR_41, VAR_39->ioaddr + VAR_22);

 return VAR_43;
}
