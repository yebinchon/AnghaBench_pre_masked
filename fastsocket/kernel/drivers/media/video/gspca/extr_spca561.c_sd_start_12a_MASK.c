
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct usb_device {int dummy; } ;
struct TYPE_4__ {TYPE_1__* cam_mode; } ;
struct gspca_dev {int* usb_buf; struct usb_device* dev; scalar_t__ curr_mode; TYPE_2__ cam; } ;
typedef int __u8 ;
struct TYPE_3__ {int priv; } ;


 int FUNC_0 (int*,int const*,int) ;
 int FUNC_1 (struct gspca_dev*,int,int) ;
 int FUNC_2 (struct usb_device*,int,int) ;
 int FUNC_3 (struct gspca_dev*) ;
 int FUNC_4 (struct gspca_dev*) ;
 int FUNC_5 (struct gspca_dev*) ;

__attribute__((used)) static int FUNC_6(struct gspca_dev *VAR_0)
{
 struct usb_device *VAR_1 = VAR_0->dev;
 int VAR_2;
 static const __u8 VAR_3[8] =
  {0x92, 0x30, 0x20, 0x00, 0x0c, 0x00, 0x00, 0x00};

 VAR_2 = VAR_0->cam.cam_mode[(int) VAR_0->curr_mode].priv;
 if (VAR_2 <= 1) {

  FUNC_2(VAR_1, 0x8500, 0x10 | VAR_2);
 } else {



  FUNC_2(VAR_1, 0x8500, VAR_2);
 }

 VAR_0->usb_buf[0] = 0xaa;
 VAR_0->usb_buf[1] = 0x00;
 FUNC_1(VAR_0, 0x8307, 2);

 FUNC_2(VAR_0->dev, 0x8700, 0x8a);

 FUNC_2(VAR_0->dev, 0x8112, 0x1e | 0x20);
 FUNC_2(VAR_0->dev, 0x850b, 0x03);
 FUNC_0(VAR_0->usb_buf, VAR_3, 8);
 FUNC_1(VAR_0, 0x8391, 8);
 FUNC_1(VAR_0, 0x8390, 8);
 FUNC_5(VAR_0);
 FUNC_4(VAR_0);
 FUNC_3(VAR_0);


 FUNC_2(VAR_0->dev, 0x8114, 0x00);
 return 0;
}
