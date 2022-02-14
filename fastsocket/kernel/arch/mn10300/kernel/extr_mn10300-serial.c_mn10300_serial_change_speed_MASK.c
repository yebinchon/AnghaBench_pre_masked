
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
typedef int u16 ;
struct TYPE_3__ {int flags; int custom_divisor; unsigned long uartclk; int read_status_mask; int ignore_status_mask; int lock; } ;
struct mn10300_serial_port {unsigned long ioclk; int div_timer; int* _tmxmd; int* _tmxbr; scalar_t__ type; int tx_cts; int* _status; int* _control; TYPE_1__ uart; int name; } ;
struct ktermios {unsigned int c_cflag; int c_iflag; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 () ;
 int VAR_3 ;
 unsigned int VAR_4 ;
 int VAR_5 ;
 unsigned int VAR_6 ;


 unsigned int VAR_7 ;
 unsigned int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;


 unsigned int VAR_12 ;
 int VAR_13 ;
 unsigned int VAR_14 ;
 scalar_t__ VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 int VAR_27 ;
 int VAR_28 ;
 int VAR_29 ;
 int VAR_30 ;
 int VAR_31 ;
 int VAR_32 ;
 int VAR_33 ;
 int VAR_34 ;
 int VAR_35 ;
 int VAR_36 ;
 int VAR_37 ;
 int VAR_38 ;
 int VAR_39 ;
 int VAR_40 ;
 int VAR_41 ;
 int VAR_42 ;
 int VAR_43 ;
 int VAR_44 ;
 int VAR_45 ;
 int VAR_46 ;
 int FUNC_1 (char*,...) ;
 int FUNC_2 (char*,int ,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (TYPE_1__*,struct ktermios*,struct ktermios*,int ,int) ;
 int FUNC_6 (TYPE_1__*,int,int) ;

__attribute__((used)) static void FUNC_7(struct mn10300_serial_port *VAR_47,
       struct ktermios *VAR_48,
       struct ktermios *VAR_49)
{
 unsigned long VAR_50;
 unsigned long VAR_51 = VAR_47->ioclk;
 unsigned VAR_52;
 int VAR_53, VAR_54, VAR_55, VAR_56;
 u16 VAR_57, VAR_58;
 u8 VAR_59, VAR_60;
 u8 VAR_61 = VAR_47->div_timer;

 FUNC_2("%s{%lu}", VAR_47->name, VAR_51);


 VAR_52 = VAR_48->c_cflag;
 switch (VAR_52 & VAR_7) {
 case 131: VAR_58 = VAR_17; VAR_54 = 9; break;
 case 130: VAR_58 = VAR_18; VAR_54 = 10; break;
 default: VAR_58 = VAR_18; VAR_54 = 10; break;
 }

 if (VAR_52 & VAR_8) {
  VAR_58 |= VAR_23;
  VAR_54++;
 }

 if (VAR_52 & VAR_12) {
  VAR_54++;
  if (VAR_52 & VAR_14)
   VAR_58 |= VAR_21;




  else
   VAR_58 |= VAR_19;
 }


 VAR_60 = 0;

 if (VAR_61 == 129)
  VAR_58 |= VAR_26;

 else if (VAR_61 == 128)
  VAR_58 |= VAR_25;

try_alternative:
 VAR_53 = FUNC_5(&VAR_47->uart, VAR_48, VAR_49, 0,
      VAR_47->ioclk / 8);

 FUNC_1("ALT %d [baud %d]", VAR_60, VAR_53);

 if (!VAR_53)
  VAR_53 = 9600;
 VAR_55 = 1;
 if (VAR_53 == 134) {
  VAR_53 = 269;
  VAR_55 = 2;
 }

 if (VAR_53 == 38400 &&
     (VAR_47->uart.flags & VAR_46) == VAR_45
     ) {
  FUNC_1("CUSTOM %u", VAR_47->uart.custom_divisor);

  if (VAR_61 == 129) {
   if (VAR_47->uart.custom_divisor <= 65535) {
    VAR_59 = VAR_37;
    VAR_57 = VAR_47->uart.custom_divisor;
    VAR_47->uart.uartclk = VAR_51;
    goto timer_okay;
   }
   if (VAR_47->uart.custom_divisor / 8 <= 65535) {
    VAR_59 = VAR_39;
    VAR_57 = VAR_47->uart.custom_divisor / 8;
    VAR_47->uart.custom_divisor = VAR_57 * 8;
    VAR_47->uart.uartclk = VAR_51 / 8;
    goto timer_okay;
   }
   if (VAR_47->uart.custom_divisor / 32 <= 65535) {
    VAR_59 = VAR_38;
    VAR_57 = VAR_47->uart.custom_divisor / 32;
    VAR_47->uart.custom_divisor = VAR_57 * 32;
    VAR_47->uart.uartclk = VAR_51 / 32;
    goto timer_okay;
   }

  } else if (VAR_61 == 128) {
   if (VAR_47->uart.custom_divisor <= 255) {
    VAR_59 = VAR_32;
    VAR_57 = VAR_47->uart.custom_divisor;
    VAR_47->uart.uartclk = VAR_51;
    goto timer_okay;
   }
   if (VAR_47->uart.custom_divisor / 8 <= 255) {
    VAR_59 = VAR_34;
    VAR_57 = VAR_47->uart.custom_divisor / 8;
    VAR_47->uart.custom_divisor = VAR_57 * 8;
    VAR_47->uart.uartclk = VAR_51 / 8;
    goto timer_okay;
   }
   if (VAR_47->uart.custom_divisor / 32 <= 255) {
    VAR_59 = VAR_33;
    VAR_57 = VAR_47->uart.custom_divisor / 32;
    VAR_47->uart.custom_divisor = VAR_57 * 32;
    VAR_47->uart.uartclk = VAR_51 / 32;
    goto timer_okay;
   }
  }
 }

 switch (VAR_61) {
 case 129:
  VAR_47->uart.uartclk = VAR_51;
  VAR_59 = VAR_37;
  VAR_57 = VAR_56 = (VAR_51 / (VAR_53 * VAR_55) + 4) / 8 - 1;
  if (VAR_56 > 0 && VAR_56 <= 65535)
   goto timer_okay;

  VAR_47->uart.uartclk = VAR_51 / 8;
  VAR_59 = VAR_39;
  VAR_57 = VAR_56 = (VAR_51 / (VAR_53 * 8 * VAR_55) + 4) / 8 - 1;
  if (VAR_56 > 0 && VAR_56 <= 65535)
   goto timer_okay;

  VAR_47->uart.uartclk = VAR_51 / 32;
  VAR_59 = VAR_38;
  VAR_57 = VAR_56 = (VAR_51 / (VAR_53 * 32 * VAR_55) + 4) / 8 - 1;
  if (VAR_56 > 0 && VAR_56 <= 65535)
   goto timer_okay;
  break;

 case 128:
  VAR_47->uart.uartclk = VAR_51;
  VAR_59 = VAR_32;
  VAR_57 = VAR_56 = (VAR_51 / (VAR_53 * VAR_55) + 4) / 8 - 1;
  if (VAR_56 > 0 && VAR_56 <= 255)
   goto timer_okay;

  VAR_47->uart.uartclk = VAR_51 / 8;
  VAR_59 = VAR_34;
  VAR_57 = VAR_56 = (VAR_51 / (VAR_53 * 8 * VAR_55) + 4) / 8 - 1;
  if (VAR_56 > 0 && VAR_56 <= 255)
   goto timer_okay;

  VAR_47->uart.uartclk = VAR_51 / 32;
  VAR_59 = VAR_33;
  VAR_57 = VAR_56 = (VAR_51 / (VAR_53 * 32 * VAR_55) + 4) / 8 - 1;
  if (VAR_56 > 0 && VAR_56 <= 255)
   goto timer_okay;
  break;

 default:
  FUNC_0();
  return;
 }


 FUNC_1("CAN'T SUPPORT");

 switch (VAR_60) {
 case 0:
  if (VAR_49) {
   VAR_48->c_cflag &= ~VAR_3;
   VAR_48->c_cflag |= (VAR_49->c_cflag & VAR_3);
   VAR_60 = 1;
   goto try_alternative;
  }

 case 1:


  VAR_48->c_cflag &= ~VAR_3;
  VAR_48->c_cflag |= VAR_1;
  VAR_60 = 2;
  goto try_alternative;

 default:




  VAR_48->c_cflag &= ~VAR_3;
  VAR_48->c_cflag |= VAR_0;

  if (VAR_61 == 129)
   VAR_59 = VAR_38;
  else if (VAR_61 == 128)
   VAR_59 = VAR_33;
  VAR_57 = 1;

  VAR_47->uart.uartclk = VAR_51 / 32;
  break;
 }
timer_okay:

 FUNC_1("UARTCLK: %u / %hu", VAR_47->uart.uartclk, VAR_57);


 FUNC_3(&VAR_47->uart.lock, VAR_50);

 FUNC_6(&VAR_47->uart, VAR_48->c_cflag, VAR_53);


 switch (VAR_61) {
 case 129:
  *VAR_47->_tmxmd = 0;
  *VAR_47->_tmxbr = VAR_57;
  *VAR_47->_tmxmd = VAR_36;
  *VAR_47->_tmxmd = VAR_59 | VAR_35;
  break;

 case 128:
  *VAR_47->_tmxmd = 0;
  *(volatile u8 *) VAR_47->_tmxbr = (u8) VAR_57;
  *VAR_47->_tmxmd = VAR_31;
  *VAR_47->_tmxmd = VAR_59 | VAR_30;
  break;
 }


 VAR_58 &= ~(VAR_27 | VAR_28);

 if (VAR_47->type == VAR_15 && VAR_52 & VAR_6) {



  VAR_47->tx_cts = *VAR_47->_status;

  if (VAR_47->tx_cts & VAR_29)
   VAR_58 |= VAR_27;
  else
   VAR_58 |= VAR_27 | VAR_28;
 }


 VAR_47->uart.read_status_mask = (1 << VAR_42) | (1 << VAR_43);
 if (VAR_48->c_iflag & VAR_11)
  VAR_47->uart.read_status_mask |=
   (1 << VAR_44) | (1 << VAR_41);
 if (VAR_48->c_iflag & (VAR_2 | VAR_13))
  VAR_47->uart.read_status_mask |= (1 << VAR_40);


 VAR_47->uart.ignore_status_mask = 0;
 if (VAR_48->c_iflag & VAR_10)
  VAR_47->uart.ignore_status_mask |=
   (1 << VAR_44) | (1 << VAR_41);
 if (VAR_48->c_iflag & VAR_9) {
  VAR_47->uart.ignore_status_mask |= (1 << VAR_40);




  if (VAR_48->c_iflag & VAR_10)
   VAR_47->uart.ignore_status_mask |= (1 << VAR_43);
 }


 if ((VAR_48->c_cflag & VAR_5) == 0)
  VAR_47->uart.ignore_status_mask |= (1 << VAR_42);

 VAR_58 |= *VAR_47->_control & (VAR_24 | VAR_22 | VAR_16);
 *VAR_47->_control = VAR_58;

 FUNC_4(&VAR_47->uart.lock, VAR_50);
}
