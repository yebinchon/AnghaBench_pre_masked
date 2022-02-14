
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct usb_device {int dummy; } ;
struct TYPE_4__ {TYPE_1__* cam_mode; } ;
struct gspca_dev {scalar_t__ curr_mode; TYPE_2__ cam; struct usb_device* dev; } ;
struct TYPE_3__ {int priv; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (struct usb_device*,int,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (struct gspca_dev*) ;
 int FUNC_3 (struct gspca_dev*) ;
 int FUNC_4 (struct gspca_dev*,int ) ;
 int FUNC_5 (struct gspca_dev*,int ) ;

__attribute__((used)) static int FUNC_6(struct gspca_dev *VAR_4)
{
 struct usb_device *VAR_5 = VAR_4->dev;
 int VAR_6;
 int VAR_7;

 FUNC_5(VAR_4, VAR_3);
 FUNC_0(200);
 FUNC_5(VAR_4, VAR_0);
 FUNC_4(VAR_4, VAR_1);

 VAR_7 = VAR_4->cam.cam_mode[(int) VAR_4->curr_mode].priv;
 switch (VAR_7) {
 default:
 case 0:
  VAR_6 = 0x27;
  break;
 case 1:
  VAR_6 = 0x25;
  break;
 case 2:
  VAR_6 = 0x22;
  break;
 case 3:
  VAR_6 = 0x21;
  break;
 }
 FUNC_1(VAR_5, 0x8700, VAR_6);
 FUNC_1(VAR_5, 0x8702, 0x81);
 FUNC_1(VAR_5, 0x8500, VAR_7);
 FUNC_4(VAR_4, VAR_2);
 FUNC_3(VAR_4);

 FUNC_2(VAR_4);
 FUNC_1(VAR_5, 0x8112, 0x10 | 0x20);
 return 0;
}
