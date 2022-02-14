
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_device_id {int driver_info; int idVendor; int idProduct; } ;
struct sd {int bridge; int flags; int backlight; int autogain; int exposure; int gain; int sharpness; int lightfreq; int vflip; int hflip; int colors; int contrast; int brightness; int sensor; } ;
struct gspca_dev {int dummy; } ;


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

__attribute__((used)) static int FUNC_0(struct gspca_dev *VAR_12,
   const struct usb_device_id *VAR_13)
{
 struct sd *VAR_14 = (struct sd *) VAR_12;

 VAR_14->bridge = VAR_13->driver_info >> 8;
 VAR_14->flags = VAR_13->driver_info & 0xff;

 if (VAR_13->idVendor == 0x046d &&
     (VAR_13->idProduct == 0x0892 || VAR_13->idProduct == 0x0896))
  VAR_14->sensor = VAR_9;

 VAR_14->brightness = VAR_2;
 VAR_14->contrast = VAR_4;
 VAR_14->colors = VAR_3;
 VAR_14->hflip = VAR_8;
 VAR_14->vflip = VAR_11;
 VAR_14->lightfreq = VAR_6;
 VAR_14->sharpness = VAR_10;
 VAR_14->gain = VAR_7;
 VAR_14->exposure = VAR_5;
 VAR_14->autogain = VAR_0;
 VAR_14->backlight = VAR_1;

 return 0;
}
