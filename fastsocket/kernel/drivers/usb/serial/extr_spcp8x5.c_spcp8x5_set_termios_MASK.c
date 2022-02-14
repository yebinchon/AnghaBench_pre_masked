
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct usb_serial_port {int dev; struct usb_serial* serial; } ;
struct usb_serial {int dev; } ;
struct tty_struct {TYPE_1__* termios; } ;
struct spcp8x5_private {int type; int lock; int line_control; } ;
struct ktermios {unsigned int c_cflag; } ;
struct TYPE_2__ {unsigned int c_cflag; } ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;




 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 unsigned int VAR_7 ;
 unsigned int VAR_8 ;
 int VAR_9 ;
 unsigned char VAR_10 ;
 unsigned char VAR_11 ;
 unsigned char VAR_12 ;
 unsigned char VAR_13 ;
 unsigned char VAR_14 ;
 unsigned char VAR_15 ;
 unsigned char VAR_16 ;
 unsigned char VAR_17 ;
 unsigned char VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int FUNC_0 (char*,int) ;
 int FUNC_1 (int *,char*,...) ;
 int FUNC_2 (int ,int ,int ) ;
 int FUNC_3 (int ,int,int ,int ) ;
 int FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (int *,unsigned long) ;
 int FUNC_6 (struct tty_struct*) ;
 int FUNC_7 (TYPE_1__*,struct ktermios*) ;
 int FUNC_8 (int ,int ,int ,int ,unsigned short,int ,int *,int ,int) ;
 struct spcp8x5_private* FUNC_9 (struct usb_serial_port*) ;
 int FUNC_10 (int ,int ) ;

__attribute__((used)) static void FUNC_11(struct tty_struct *VAR_21,
  struct usb_serial_port *VAR_22, struct ktermios *VAR_23)
{
 struct usb_serial *VAR_24 = VAR_22->serial;
 struct spcp8x5_private *VAR_25 = FUNC_9(VAR_22);
 unsigned long VAR_26;
 unsigned int VAR_27 = VAR_21->termios->c_cflag;
 unsigned int VAR_28 = VAR_23->c_cflag;
 unsigned short VAR_29;
 unsigned char VAR_30[2] = {0, 0};
 int VAR_31;
 int VAR_32;
 u8 VAR_33;



 if (!FUNC_7(VAR_21->termios, VAR_23))
  return;


 FUNC_4(&VAR_25->lock, VAR_26);
 VAR_33 = VAR_25->line_control;
 if ((VAR_28 & VAR_1) == VAR_0) {
  VAR_25->line_control |= VAR_5;
  if (!(VAR_28 & VAR_2))
   VAR_25->line_control |= VAR_6;
 }
 if (VAR_33 != VAR_25->line_control) {
  VAR_33 = VAR_25->line_control;
  FUNC_5(&VAR_25->lock, VAR_26);
  FUNC_2(VAR_24->dev, VAR_33 , VAR_25->type);
 } else {
  FUNC_5(&VAR_25->lock, VAR_26);
 }


 VAR_31 = FUNC_6(VAR_21);
 switch (VAR_31) {
 case 300: VAR_30[0] = 0x00; break;
 case 600: VAR_30[0] = 0x01; break;
 case 1200: VAR_30[0] = 0x02; break;
 case 2400: VAR_30[0] = 0x03; break;
 case 4800: VAR_30[0] = 0x04; break;
 case 9600: VAR_30[0] = 0x05; break;
 case 19200: VAR_30[0] = 0x07; break;
 case 38400: VAR_30[0] = 0x09; break;
 case 57600: VAR_30[0] = 0x0a; break;
 case 115200: VAR_30[0] = 0x0b; break;
 case 230400: VAR_30[0] = 0x0c; break;
 case 460800: VAR_30[0] = 0x0d; break;
 case 921600: VAR_30[0] = 0x0e; break;


 case 3000000: VAR_30[0] = 0x11; break;

 case 0:
 case 1000000:
   VAR_30[0] = 0x0b; break;
 default:
  FUNC_1(&VAR_22->dev, "spcp825 driver does not support the "
   "baudrate requested, using default of 9600.\n");
 }


 if (VAR_27 & VAR_3) {
  switch (VAR_27 & VAR_3) {
  case 131:
   VAR_30[1] |= VAR_13;
   break;
  case 130:
   VAR_30[1] |= VAR_14;
   break;
  case 129:
   VAR_30[1] |= VAR_15;
   break;
  default:
  case 128:
   VAR_30[1] |= VAR_16;
   break;
  }
 }


 VAR_30[1] |= (VAR_27 & VAR_4) ? VAR_18 :
         VAR_17;


 if (VAR_27 & VAR_7) {
  VAR_30[1] |= (VAR_27 & VAR_8) ?
  VAR_12 : VAR_10 ;
 } else
  VAR_30[1] |= VAR_11;

 VAR_29 = VAR_30[0] | VAR_30[1]<<8;

 VAR_32 = FUNC_8(VAR_24->dev, FUNC_10(VAR_24->dev, 0),
       VAR_19, VAR_9,
       VAR_29, 0, ((void*)0), 0, 100);
 if (VAR_32 < 0)
  FUNC_1(&VAR_22->dev, "Set UART format %#x failed (error = %d)\n",
   VAR_29, VAR_32);
 FUNC_0("0x21:0x40:0:0  %d\n", VAR_32);

 if (VAR_27 & VAR_2) {

  FUNC_3(VAR_24->dev, 0x000a,
         VAR_20, VAR_25->type);
 }
 return;
}
