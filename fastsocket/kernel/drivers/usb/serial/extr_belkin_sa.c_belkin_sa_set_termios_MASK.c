
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_serial_port {int dev; struct usb_serial* serial; } ;
struct usb_serial {int dummy; } ;
struct tty_struct {struct ktermios* termios; } ;
struct ktermios {unsigned int c_iflag; unsigned int c_cflag; } ;
struct belkin_sa_private {unsigned long control_state; int bad_flow_control; int lock; } ;
typedef int speed_t ;
typedef int __u16 ;


 unsigned int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
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
 int FUNC_2 (int) ;
 scalar_t__ FUNC_3 (int ,int) ;
 unsigned int VAR_16 ;
 unsigned int VAR_17 ;
 unsigned int VAR_18 ;




 unsigned int VAR_19 ;
 unsigned int VAR_20 ;
 unsigned int VAR_21 ;
 unsigned int VAR_22 ;
 unsigned int VAR_23 ;
 unsigned int VAR_24 ;
 unsigned long VAR_25 ;
 unsigned long VAR_26 ;
 int FUNC_4 (char*) ;
 int FUNC_5 (int *,char*) ;
 int FUNC_6 (int *,unsigned long) ;
 int FUNC_7 (int *,unsigned long) ;
 int FUNC_8 (struct tty_struct*,int,int) ;
 int FUNC_9 (struct tty_struct*) ;
 struct belkin_sa_private* FUNC_10 (struct usb_serial_port*) ;

__attribute__((used)) static void FUNC_11(struct tty_struct *VAR_27,
  struct usb_serial_port *VAR_28, struct ktermios *VAR_29)
{
 struct usb_serial *VAR_30 = VAR_28->serial;
 struct belkin_sa_private *VAR_31 = FUNC_10(VAR_28);
 unsigned int VAR_32;
 unsigned int VAR_33;
 unsigned int VAR_34 = 0;
 unsigned int VAR_35 = 0;
 __u16 VAR_36 = 0;
 unsigned long VAR_37;
 unsigned long VAR_38;
 int VAR_39;
 speed_t VAR_40;
 struct ktermios *VAR_41 = VAR_27->termios;

 VAR_32 = VAR_41->c_iflag;
 VAR_33 = VAR_41->c_cflag;

 VAR_41->c_cflag &= ~VAR_17;


 FUNC_6(&VAR_31->lock, VAR_37);
 VAR_38 = VAR_31->control_state;
 VAR_39 = VAR_31->bad_flow_control;
 FUNC_7(&VAR_31->lock, VAR_37);

 VAR_34 = VAR_29->c_iflag;
 VAR_35 = VAR_29->c_cflag;


 if ((VAR_33 & VAR_16) != (VAR_35 & VAR_16)) {

  if ((VAR_35 & VAR_16) == VAR_0) {
   VAR_38 |= (VAR_25|VAR_26);
   if (FUNC_3(VAR_11, 1) < 0)
    FUNC_5(&VAR_28->dev, "Set DTR error\n");

   if (!(VAR_35 & VAR_18))
    if (FUNC_3(VAR_14
        , 1) < 0)
     FUNC_5(&VAR_28->dev, "Set RTS error\n");
  }
 }

 VAR_40 = FUNC_9(VAR_27);
 if (VAR_40) {
  VAR_36 = FUNC_0(VAR_40);

  if (VAR_36 == 0)
   VAR_36 = 1;

  VAR_40 = FUNC_0(VAR_36);


  FUNC_8(VAR_27, VAR_40, VAR_40);
  if (FUNC_3(VAR_9, VAR_36) < 0)
   FUNC_5(&VAR_28->dev, "Set baudrate error\n");
 } else {

  if (FUNC_3(VAR_12,
      VAR_3) < 0)
   FUNC_5(&VAR_28->dev, "Disable flowcontrol error\n");

  VAR_38 &= ~(VAR_25 | VAR_26);
  if (FUNC_3(VAR_11, 0) < 0)
   FUNC_5(&VAR_28->dev, "DTR LOW error\n");
  if (FUNC_3(VAR_14, 0) < 0)
   FUNC_5(&VAR_28->dev, "RTS LOW error\n");
 }


 if ((VAR_33 ^ VAR_35) & (VAR_23 | VAR_24)) {
  if (VAR_33 & VAR_23)
   VAR_36 = (VAR_33 & VAR_24) ? VAR_8
      : VAR_6;
  else
   VAR_36 = VAR_7;
  if (FUNC_3(VAR_13, VAR_36) < 0)
   FUNC_5(&VAR_28->dev, "Set parity error\n");
 }


 if ((VAR_33 & VAR_19) != (VAR_35 & VAR_19)) {
  switch (VAR_33 & VAR_19) {
  case 131:
   VAR_36 = FUNC_1(5);
   break;
  case 130:
   VAR_36 = FUNC_1(6);
   break;
  case 129:
   VAR_36 = FUNC_1(7);
   break;
  case 128:
   VAR_36 = FUNC_1(8);
   break;
  default: FUNC_4("CSIZE was not CS5-CS8, using default of 8");
   VAR_36 = FUNC_1(8);
   break;
  }
  if (FUNC_3(VAR_10, VAR_36) < 0)
   FUNC_5(&VAR_28->dev, "Set data bits error\n");
 }


 if ((VAR_33 & VAR_20) != (VAR_35 & VAR_20)) {
  VAR_36 = (VAR_33 & VAR_20) ? FUNC_2(2)
      : FUNC_2(1);
  if (FUNC_3(VAR_15,
       VAR_36) < 0)
   FUNC_5(&VAR_28->dev, "Set stop bits error\n");
 }


 if (((VAR_32 ^ VAR_34) & (VAR_21 | VAR_22)) ||
  ((VAR_33 ^ VAR_35) & VAR_18)) {
  VAR_36 = 0;
  if ((VAR_32 & VAR_21) || (VAR_32 & VAR_22))
   VAR_36 |= (VAR_5 | VAR_2);
  else
   VAR_36 &= ~(VAR_5 | VAR_2);

  if (VAR_33 & VAR_18)
   VAR_36 |= (VAR_4 | VAR_1);
  else
   VAR_36 &= ~(VAR_4 | VAR_1);

  if (VAR_39)
   VAR_36 &= ~(VAR_1);

  if (FUNC_3(VAR_12, VAR_36) < 0)
   FUNC_5(&VAR_28->dev, "Set flow control error\n");
 }


 FUNC_6(&VAR_31->lock, VAR_37);
 VAR_31->control_state = VAR_38;
 FUNC_7(&VAR_31->lock, VAR_37);
}
