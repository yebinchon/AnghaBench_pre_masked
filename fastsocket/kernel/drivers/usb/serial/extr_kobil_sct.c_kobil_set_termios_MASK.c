
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct usb_serial_port {TYPE_1__* serial; } ;
struct tty_struct {struct ktermios* termios; } ;
struct ktermios {int c_cflag; } ;
struct kobil_private {scalar_t__ device_type; } ;
typedef int speed_t ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 unsigned short VAR_8 ;
 unsigned short VAR_9 ;
 unsigned short VAR_10 ;
 unsigned short VAR_11 ;
 unsigned short VAR_12 ;
 unsigned short VAR_13 ;
 unsigned short VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int FUNC_0 (void*) ;
 void* FUNC_1 (int,int ) ;
 int FUNC_2 (void*,char*,int) ;
 int FUNC_3 (void*,char*) ;
 int FUNC_4 (struct tty_struct*,int,int) ;
 int FUNC_5 (struct tty_struct*) ;
 int FUNC_6 (int ,int ,int ,int,unsigned short,int ,void*,int ,int ) ;
 struct kobil_private* FUNC_7 (struct usb_serial_port*) ;
 int FUNC_8 (int ,int ) ;

__attribute__((used)) static void FUNC_9(struct tty_struct *VAR_19,
   struct usb_serial_port *VAR_20, struct ktermios *VAR_21)
{
 struct kobil_private *VAR_22;
 int VAR_23;
 unsigned short VAR_24 = 0;
 int VAR_25 = VAR_19->termios->c_cflag;
 speed_t VAR_26;
 void *VAR_27;

 VAR_22 = FUNC_7(VAR_20);
 if (VAR_22->device_type == VAR_5 ||
   VAR_22->device_type == VAR_3) {

  *VAR_19->termios = *VAR_21;
  return;
 }

 VAR_26 = FUNC_5(VAR_19);
 switch (VAR_26) {
 case 1200:
  VAR_24 = VAR_8;
  break;
 default:
  VAR_26 = 9600;
 case 9600:
  VAR_24 = VAR_9;
  break;
 }
 VAR_24 |= (VAR_25 & VAR_1) ? VAR_11 :
       VAR_10;

 VAR_27 = FUNC_1(50, VAR_2);
 if (!VAR_27)
  return;

 FUNC_2(VAR_27, "%d ", VAR_26);

 if (VAR_25 & VAR_6) {
  if (VAR_25 & VAR_7) {
   VAR_24 |= VAR_14;
   FUNC_3(VAR_27, "Odd Parity");
  } else {
   VAR_24 |= VAR_12;
   FUNC_3(VAR_27, "Even Parity");
  }
 } else {
  VAR_24 |= VAR_13;
  FUNC_3(VAR_27, "No Parity");
 }
 VAR_19->termios->c_cflag &= ~VAR_0;
 FUNC_4(VAR_19, VAR_26, VAR_26);

 VAR_23 = FUNC_6(VAR_20->serial->dev,
    FUNC_8(VAR_20->serial->dev, 0),
    VAR_15,
    VAR_18 | VAR_17 | VAR_16,
    VAR_24,
    0,
    VAR_27,
    0,
    VAR_4
  );
 FUNC_0(VAR_27);
}
