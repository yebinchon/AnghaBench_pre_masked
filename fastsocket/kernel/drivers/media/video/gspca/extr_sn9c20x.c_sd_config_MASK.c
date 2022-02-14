
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_device_id {int driver_info; } ;
struct sd {int sensor; int i2c_addr; int flags; int exposure_step; int quality; int auto_exposure; int gain; int exposure; int vflip; int hflip; int blue; int red; int gamma; int hue; int saturation; int contrast; int brightness; scalar_t__ older_step; scalar_t__ old_step; } ;
struct cam {void* nmodes; void* cam_mode; } ;
struct gspca_dev {struct cam cam; } ;


 void* FUNC_0 (void*) ;
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
 void* VAR_12 ;
 void* VAR_13 ;
 void* VAR_14 ;

__attribute__((used)) static int FUNC_1(struct gspca_dev *VAR_15,
   const struct usb_device_id *VAR_16)
{
 struct sd *VAR_17 = (struct sd *) VAR_15;
 struct cam *VAR_18;

 VAR_18 = &VAR_15->cam;

 VAR_17->sensor = (VAR_16->driver_info >> 8) & 0xff;
 VAR_17->i2c_addr = VAR_16->driver_info & 0xff;
 VAR_17->flags = (VAR_16->driver_info >> 16) & 0xff;

 switch (VAR_17->sensor) {
 case 130:
 case 131:
 case 129:
 case 128:
  VAR_18->cam_mode = VAR_13;
  VAR_18->nmodes = FUNC_0(VAR_13);
  break;
 case 132:
  VAR_18->cam_mode = VAR_12;
  VAR_18->nmodes = FUNC_0(VAR_12);
  break;
 default:
  VAR_18->cam_mode = VAR_14;
  VAR_18->nmodes = FUNC_0(VAR_14);
  break;
 }

 VAR_17->old_step = 0;
 VAR_17->older_step = 0;
 VAR_17->exposure_step = 16;

 VAR_17->brightness = VAR_2;
 VAR_17->contrast = VAR_3;
 VAR_17->saturation = VAR_10;
 VAR_17->hue = VAR_8;
 VAR_17->gamma = VAR_6;
 VAR_17->red = VAR_9;
 VAR_17->blue = VAR_1;

 VAR_17->hflip = VAR_7;
 VAR_17->vflip = VAR_11;
 VAR_17->exposure = VAR_4;
 VAR_17->gain = VAR_5;
 VAR_17->auto_exposure = VAR_0;

 VAR_17->quality = 95;

 return 0;
}
