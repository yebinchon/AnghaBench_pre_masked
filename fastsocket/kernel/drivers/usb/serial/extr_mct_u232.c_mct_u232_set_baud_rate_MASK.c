
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_serial_port {int dev; } ;
struct usb_serial {int dev; } ;
struct tty_struct {int dummy; } ;
typedef int speed_t ;
typedef unsigned char __le32 ;


 scalar_t__ FUNC_0 (struct tty_struct*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 unsigned char FUNC_1 (int ) ;
 int FUNC_2 (char*,unsigned char,...) ;
 int FUNC_3 (int *,char*,int ,int) ;
 int FUNC_4 (struct usb_serial*,int ,int *) ;
 int FUNC_5 (struct tty_struct*,int ,int ) ;
 int FUNC_6 (int ,int ,int ,int ,int ,int ,unsigned char*,int ,int ) ;
 int FUNC_7 (int ,int ) ;

__attribute__((used)) static int FUNC_8(struct tty_struct *VAR_8,
 struct usb_serial *VAR_9, struct usb_serial_port *VAR_10, speed_t VAR_11)
{
 __le32 VAR_12;
 int VAR_13;
 unsigned char VAR_14 = 0;
 unsigned char VAR_15 = 0;
 speed_t VAR_16;

 VAR_12 = FUNC_1(FUNC_4(VAR_9, VAR_11,
        &VAR_16));

 VAR_13 = FUNC_6(VAR_9->dev, FUNC_7(VAR_9->dev, 0),
    VAR_0,
    VAR_4,
    0, 0, &VAR_12, VAR_1,
    VAR_7);
 if (VAR_13 < 0)
  FUNC_3(&VAR_10->dev, "Set BAUD RATE %d failed (error = %d)\n",
   VAR_11, VAR_13);
 else
  FUNC_5(VAR_8, VAR_16, VAR_16);
 FUNC_2("set_baud_rate: value: 0x%x, divisor: 0x%x", VAR_11, VAR_12);
 VAR_13 = FUNC_6(VAR_9->dev, FUNC_7(VAR_9->dev, 0),
    VAR_5,
    VAR_4,
    0, 0, &VAR_14, VAR_6,
    VAR_7);
 if (VAR_13 < 0)
  FUNC_3(&VAR_10->dev, "Sending USB device request code %d "
   "failed (error = %d)\n", VAR_5,
   VAR_13);

 if (VAR_10 && FUNC_0(VAR_8))
    VAR_15 = 1;

 FUNC_2("set_baud_rate: send second control message, data = %02X",
       VAR_15);
 VAR_13 = FUNC_6(VAR_9->dev, FUNC_7(VAR_9->dev, 0),
   VAR_2,
   VAR_4,
   0, 0, &VAR_15, VAR_3,
   VAR_7);
 if (VAR_13 < 0)
  FUNC_3(&VAR_10->dev, "Sending USB device request code %d "
   "failed (error = %d)\n", VAR_2, VAR_13);

 return VAR_13;
}
