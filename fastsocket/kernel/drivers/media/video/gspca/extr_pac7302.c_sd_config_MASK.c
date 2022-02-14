
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_device_id {int driver_info; } ;
struct sd {int flags; int vflip; int hflip; int autogain; int exposure; int gain; int blue_balance; int red_balance; int white_balance; int colors; int contrast; int brightness; } ;
struct cam {int nmodes; int cam_mode; } ;
struct gspca_dev {struct cam cam; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_1 (int ,char*) ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;

__attribute__((used)) static int FUNC_2(struct gspca_dev *VAR_13,
   const struct usb_device_id *VAR_14)
{
 struct sd *VAR_15 = (struct sd *) VAR_13;
 struct cam *VAR_16;

 VAR_16 = &VAR_13->cam;

 FUNC_1(VAR_5, "Find Sensor PAC7302");
 VAR_16->cam_mode = VAR_12;
 VAR_16->nmodes = FUNC_0(VAR_12);

 VAR_15->brightness = VAR_2;
 VAR_15->contrast = VAR_4;
 VAR_15->colors = VAR_3;
 VAR_15->white_balance = VAR_11;
 VAR_15->red_balance = VAR_9;
 VAR_15->blue_balance = VAR_1;
 VAR_15->gain = VAR_7;
 VAR_15->exposure = VAR_6;
 VAR_15->autogain = VAR_0;
 VAR_15->hflip = VAR_8;
 VAR_15->vflip = VAR_10;
 VAR_15->flags = VAR_14->driver_info;
 return 0;
}
