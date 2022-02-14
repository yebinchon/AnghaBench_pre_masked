
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct usb_serial_port {TYPE_1__* serial; } ;
struct tty_struct {int dummy; } ;
struct ftdi_private {int interface; } ;
typedef int __u32 ;
typedef int __u16 ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct tty_struct*,struct usb_serial_port*) ;
 int FUNC_1 (char*) ;
 char* FUNC_2 (int,int ) ;
 int FUNC_3 (int ,int ,int ,int ,int,int,char*,int ,int ) ;
 struct ftdi_private* FUNC_4 (struct usb_serial_port*) ;
 int FUNC_5 (int ,int ) ;

__attribute__((used)) static int FUNC_6(struct tty_struct *VAR_5, struct usb_serial_port *VAR_6)
{
 struct ftdi_private *VAR_7 = FUNC_4(VAR_6);
 char *VAR_8;
 __u16 VAR_9;
 __u16 VAR_10;
 __u32 VAR_11;
 int VAR_12;

 VAR_8 = FUNC_2(1, VAR_3);
 if (!VAR_8)
  return -VAR_0;

 VAR_11 = FUNC_0(VAR_5, VAR_6);
 VAR_9 = (__u16)VAR_11;
 VAR_10 = (__u16)(VAR_11 >> 16);
 if (VAR_7->interface) {
  VAR_10 = (__u16)((VAR_10 << 8) | VAR_7->interface);
 }

 VAR_12 = FUNC_3(VAR_6->serial->dev,
       FUNC_5(VAR_6->serial->dev, 0),
       VAR_1,
       VAR_2,
       VAR_9, VAR_10,
       VAR_8, 0, VAR_4);

 FUNC_1(VAR_8);
 return VAR_12;
}
