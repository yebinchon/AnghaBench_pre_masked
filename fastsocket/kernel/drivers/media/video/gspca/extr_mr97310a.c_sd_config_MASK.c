
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_device_id {int idProduct; } ;
struct sd {int do_lcd_stop; scalar_t__ cam_type; int sensor_type; int adj_colors; int gain; int min_clockdiv; int contrast; int exposure; int brightness; } ;
struct cam {int nmodes; int cam_mode; } ;
struct gspca_dev {int* usb_buf; int ctrl_dis; struct cam cam; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
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
 int FUNC_1 (int ,char*,...) ;
 int VAR_16 ;
 int FUNC_2 (struct gspca_dev*,int,int) ;
 int FUNC_3 (char*,...) ;
 int VAR_17 ;
 int FUNC_4 (struct gspca_dev*) ;
 int FUNC_5 (struct gspca_dev*) ;
 int VAR_18 ;
 int FUNC_6 (struct gspca_dev*) ;

__attribute__((used)) static int FUNC_7(struct gspca_dev *VAR_19,
       const struct usb_device_id *VAR_20)
{
 struct sd *VAR_21 = (struct sd *) VAR_19;
 struct cam *VAR_22;
 int VAR_23 = VAR_13;
 int VAR_24;

 VAR_22 = &VAR_19->cam;
 VAR_22->cam_mode = VAR_18;
 VAR_22->nmodes = FUNC_0(VAR_18);
 VAR_21->do_lcd_stop = 0;
 VAR_24 = FUNC_6(VAR_19);
 if (VAR_24 < 0)
  return VAR_24;

 VAR_24 = FUNC_5(VAR_19);
 if (VAR_24 < 0)
  return VAR_24;


 VAR_24 = FUNC_2(VAR_19, 0x07, 1);
 if (VAR_24 < 0)
  return VAR_24;

 if (VAR_20->idProduct == 0x0110 || VAR_20->idProduct == 0x010e) {
  VAR_21->cam_type = VAR_1;
  VAR_22->nmodes--;
  switch (VAR_19->usb_buf[0]) {
  case 2:
   VAR_21->sensor_type = 0;
   break;
  case 3:
   VAR_21->sensor_type = 1;
   break;
  default:
   FUNC_3("Unknown CIF Sensor id : %02x",
          VAR_19->usb_buf[1]);
   return -VAR_5;
  }
  FUNC_1(VAR_4, "MR97310A CIF camera detected, sensor: %d",
         VAR_21->sensor_type);
 } else {
  VAR_21->cam_type = VAR_2;
  VAR_21->sensor_type = 1;
  VAR_21->do_lcd_stop = 0;
  VAR_21->adj_colors = 0;
  if (VAR_19->usb_buf[0] == 0x01) {
   VAR_21->sensor_type = 2;
  } else if ((VAR_19->usb_buf[0] != 0x03) &&
     (VAR_19->usb_buf[0] != 0x04)) {
   FUNC_3("Unknown VGA Sensor id Byte 0: %02x",
     VAR_19->usb_buf[0]);
   FUNC_3("Defaults assumed, may not work");
   FUNC_3("Please report this");
  }

  if ((VAR_19->usb_buf[0] == 0x03) &&
     (VAR_19->usb_buf[1] == 0x50))
   VAR_21->adj_colors = 1;
  if (VAR_19->usb_buf[0] == 0x04) {
   VAR_21->do_lcd_stop = 1;
   switch (VAR_19->usb_buf[1]) {
   case 0x50:
    VAR_21->sensor_type = 0;
    FUNC_1(VAR_4, "sensor_type corrected to 0");
    break;
   case 0x20:

    break;
   default:
    FUNC_3("Unknown VGA Sensor id Byte 1: %02x",
     VAR_19->usb_buf[1]);
    FUNC_3("Defaults assumed, may not work");
    FUNC_3("Please report this");
   }
  }
  FUNC_1(VAR_4, "MR97310A VGA camera detected, sensor: %d",
         VAR_21->sensor_type);
 }

 FUNC_4(VAR_19);

 if (VAR_17 != -1) {
  VAR_21->sensor_type = !!VAR_17;
  FUNC_1(VAR_4, "Forcing sensor type to: %d",
         VAR_21->sensor_type);
 }


 if (VAR_21->cam_type == VAR_1) {

  if (VAR_21->sensor_type == 0)
   VAR_19->ctrl_dis = (1 << VAR_15) |
           (1 << VAR_0) |
           (1 << VAR_3) |
           (1 << VAR_16);
  else
   VAR_19->ctrl_dis = (1 << VAR_0) |
           (1 << VAR_3) |
           (1 << VAR_16) |
           (1 << VAR_8);
 } else {

  if (VAR_21->sensor_type == 0)
   VAR_19->ctrl_dis = (1 << VAR_15) |
           (1 << VAR_0) |
           (1 << VAR_6) |
           (1 << VAR_7) |
           (1 << VAR_3) |
           (1 << VAR_16) |
           (1 << VAR_8);
  else if (VAR_21->sensor_type == 2) {
   VAR_19->ctrl_dis = (1 << VAR_15) |
           (1 << VAR_0) |
           (1 << VAR_7) |
           (1 << VAR_8);
   VAR_23 = VAR_11;
  } else if (VAR_21->do_lcd_stop)

   VAR_19->ctrl_dis = (1 << VAR_15) |
           (1 << VAR_3) |
           (1 << VAR_16);
  else
   VAR_19->ctrl_dis = (1 << VAR_0) |
           (1 << VAR_3) |
           (1 << VAR_16);
 }

 VAR_21->brightness = VAR_9;
 VAR_21->exposure = VAR_12;
 VAR_21->gain = VAR_23;
 VAR_21->contrast = VAR_10;
 VAR_21->min_clockdiv = VAR_14;

 return 0;
}
