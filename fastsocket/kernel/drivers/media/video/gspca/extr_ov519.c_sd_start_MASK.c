
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int ctrl_dis; int height; int width; } ;
struct sd {int bridge; int snapshot_needs_reset; int first_frame; TYPE_1__ gspca_dev; int sensor_height; int sensor_width; } ;
struct gspca_dev {int usb_err; } ;


 int VAR_0 ;






 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (struct sd*) ;
 int FUNC_1 (struct sd*) ;
 int FUNC_2 (struct sd*) ;
 int FUNC_3 (struct sd*,int) ;
 int FUNC_4 (struct sd*) ;
 int FUNC_5 (struct gspca_dev*) ;
 int FUNC_6 (struct sd*) ;
 int FUNC_7 (struct gspca_dev*) ;
 int FUNC_8 (struct gspca_dev*) ;
 int FUNC_9 (struct gspca_dev*) ;
 int FUNC_10 (struct gspca_dev*) ;
 int FUNC_11 (struct sd*) ;
 int FUNC_12 (struct gspca_dev*) ;
 int FUNC_13 (struct sd*) ;

__attribute__((used)) static int FUNC_14(struct gspca_dev *VAR_7)
{
 struct sd *VAR_8 = (struct sd *) VAR_7;


 VAR_8->sensor_width = VAR_8->gspca_dev.width;
 VAR_8->sensor_height = VAR_8->gspca_dev.height;

 switch (VAR_8->bridge) {
 case 133:
 case 132:
  FUNC_0(VAR_8);
  break;
 case 131:
 case 130:
  FUNC_1(VAR_8);
  break;
 case 129:
  FUNC_2(VAR_8);
  break;

 case 128:
  FUNC_13(VAR_8);
  break;
 }

 FUNC_6(VAR_8);

 if (!(VAR_8->gspca_dev.ctrl_dis & (1 << VAR_3)))
  FUNC_10(VAR_7);
 if (!(VAR_8->gspca_dev.ctrl_dis & (1 << VAR_1)))
  FUNC_8(VAR_7);
 if (!(VAR_8->gspca_dev.ctrl_dis & (1 << VAR_2)))
  FUNC_9(VAR_7);
 if (!(VAR_8->gspca_dev.ctrl_dis & ((1 << VAR_5) | (1 << VAR_6))))
  FUNC_12(VAR_7);
 if (!(VAR_8->gspca_dev.ctrl_dis & (1 << VAR_0)))
  FUNC_7(VAR_7);
 if (!(VAR_8->gspca_dev.ctrl_dis & (1 << VAR_4)))
  FUNC_11(VAR_8);



 VAR_8->snapshot_needs_reset = 1;
 FUNC_5(VAR_7);

 VAR_8->first_frame = 3;

 FUNC_4(VAR_8);
 FUNC_3(VAR_8, 1);
 return VAR_7->usb_err;
}
