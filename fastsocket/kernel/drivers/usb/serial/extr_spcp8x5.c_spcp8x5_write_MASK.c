
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_serial_port {int dev; } ;
struct tty_struct {int dummy; } ;
struct spcp8x5_private {int lock; int buf; } ;


 int FUNC_0 (int *,char*,int) ;
 int FUNC_1 (int ,unsigned char const*,int) ;
 int FUNC_2 (struct usb_serial_port*) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int *,unsigned long) ;
 struct spcp8x5_private* FUNC_5 (struct usb_serial_port*) ;

__attribute__((used)) static int FUNC_6(struct tty_struct *VAR_0, struct usb_serial_port *VAR_1,
    const unsigned char *VAR_2, int VAR_3)
{
 struct spcp8x5_private *VAR_4 = FUNC_5(VAR_1);
 unsigned long VAR_5;

 FUNC_0(&VAR_1->dev, "%d bytes\n", VAR_3);

 if (!VAR_3)
  return VAR_3;

 FUNC_3(&VAR_4->lock, VAR_5);
 VAR_3 = FUNC_1(VAR_4->buf, VAR_2, VAR_3);
 FUNC_4(&VAR_4->lock, VAR_5);

 FUNC_2(VAR_1);

 return VAR_3;
}
