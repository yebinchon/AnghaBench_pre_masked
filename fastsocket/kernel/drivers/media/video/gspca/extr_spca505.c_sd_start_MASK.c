
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
struct usb_device {int dummy; } ;
struct sd {scalar_t__ subtype; } ;
struct TYPE_4__ {TYPE_1__* cam_mode; } ;
struct gspca_dev {scalar_t__ curr_mode; TYPE_2__ cam; struct usb_device* dev; } ;
struct TYPE_3__ {int priv; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int,char*,int) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (char*,int) ;
 int FUNC_2 (struct gspca_dev*,int,int) ;
 int FUNC_3 (struct usb_device*,int,int,int) ;
 int FUNC_4 (struct gspca_dev*) ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_5 (struct gspca_dev*,int ) ;

__attribute__((used)) static int FUNC_6(struct gspca_dev *VAR_9)
{
 struct sd *VAR_10 = (struct sd *) VAR_9;
 struct usb_device *VAR_11 = VAR_9->dev;
 int VAR_12, VAR_13;
 static u8 VAR_14[][3] = {

  {0x00, 0x10, 0x10},
  {0x01, 0x1a, 0x1a},
  {0x02, 0x1c, 0x1d},
  {0x04, 0x34, 0x34},
  {0x05, 0x40, 0x40}
 };

 if (VAR_10->subtype == VAR_2)
  FUNC_5(VAR_9, VAR_8);
 else
  FUNC_5(VAR_9, VAR_7);
 VAR_12 = FUNC_2(VAR_9, 0x06, 0x16);

 if (VAR_12 < 0) {
  FUNC_0(VAR_1|VAR_0,
         "register read failed err: %d",
         VAR_12);
  return VAR_12;
 }
 if (VAR_12 != 0x0101) {
  FUNC_1("After vector read returns 0x%04x should be 0x0101",
   VAR_12);
 }

 VAR_12 = FUNC_3(VAR_9->dev, 0x06, 0x16, 0x0a);
 if (VAR_12 < 0)
  return VAR_12;
 FUNC_3(VAR_9->dev, 0x05, 0xc2, 0x12);




 FUNC_3(VAR_11, 0x02, 0x00, 0x00);

 VAR_13 = VAR_9->cam.cam_mode[(int) VAR_9->curr_mode].priv;
 FUNC_3(VAR_11, VAR_4, 0x00, VAR_14[VAR_13][0]);
 FUNC_3(VAR_11, VAR_4, 0x06, VAR_14[VAR_13][1]);
 FUNC_3(VAR_11, VAR_4, 0x07, VAR_14[VAR_13][2]);

 VAR_12 = FUNC_3(VAR_11, VAR_5,
    VAR_6,
    VAR_3);

 FUNC_4(VAR_9);

 return VAR_12;
}
