
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_device_id {int dummy; } ;
struct sd {int red_gain; int blue_gain; int green_gain; int effect; int sharpness; int awb; int freq; int mirror; int autogain; int gamma; int colors; int contrast; int brightness; } ;
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
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;

__attribute__((used)) static int FUNC_1(struct gspca_dev *VAR_14,
       const struct usb_device_id *VAR_15)
{
 struct sd *VAR_16 = (struct sd *) VAR_14;
 struct cam *VAR_17;

 VAR_17 = &VAR_14->cam;

 VAR_17->cam_mode = VAR_13;
 VAR_17->nmodes = FUNC_0(VAR_13);

 VAR_16->brightness = VAR_3;
 VAR_16->contrast = VAR_5;
 VAR_16->colors = VAR_4;
 VAR_16->gamma = VAR_9;
 VAR_16->autogain = VAR_0;
 VAR_16->mirror = VAR_10;
 VAR_16->freq = VAR_7;
 VAR_16->awb = VAR_1;
 VAR_16->sharpness = VAR_12;
 VAR_16->effect = VAR_6;
 VAR_16->red_gain = VAR_11;
 VAR_16->blue_gain = VAR_2;
 VAR_16->green_gain = VAR_8 * 3 - VAR_11 - VAR_2;

 return 0;
}
