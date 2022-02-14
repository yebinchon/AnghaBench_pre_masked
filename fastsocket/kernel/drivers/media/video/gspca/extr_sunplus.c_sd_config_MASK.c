
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_device_id {int driver_info; } ;
struct sd {int bridge; int subtype; int quality; int autogain; int colors; int contrast; int brightness; } ;
struct cam {void* nmodes; void* cam_mode; } ;
struct gspca_dev {int* usb_buf; struct cam cam; } ;


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
 void* VAR_9 ;
 int FUNC_1 (struct gspca_dev*,int,int ,int) ;
 void* VAR_10 ;
 void* VAR_11 ;

__attribute__((used)) static int FUNC_2(struct gspca_dev *VAR_12,
   const struct usb_device_id *VAR_13)
{
 struct sd *VAR_14 = (struct sd *) VAR_12;
 struct cam *VAR_15;

 VAR_15 = &VAR_12->cam;

 VAR_14->bridge = VAR_13->driver_info >> 8;
 VAR_14->subtype = VAR_13->driver_info;

 if (VAR_14->subtype == VAR_1) {



  FUNC_1(VAR_12, 0x20, 0, 1);
  switch (VAR_12->usb_buf[0]) {
  case 1:
   break;
  case 2:
   VAR_14->bridge = VAR_2;
   VAR_14->subtype = 0;
   break;
  default:
   return -VAR_6;
  }
 }

 switch (VAR_14->bridge) {
 default:



  VAR_15->cam_mode = VAR_10;
  VAR_15->nmodes = FUNC_0(VAR_10);
  break;
 case 128:
  VAR_15->cam_mode = VAR_9;
  if (VAR_14->subtype == VAR_7)
   VAR_15->nmodes = FUNC_0(VAR_9) - 1;
  else
   VAR_15->nmodes = FUNC_0(VAR_9);
  break;
 case 129:
  VAR_15->cam_mode = VAR_11;
  VAR_15->nmodes = FUNC_0(VAR_11);
  break;
 }
 VAR_14->brightness = VAR_3;
 VAR_14->contrast = VAR_5;
 VAR_14->colors = VAR_4;
 VAR_14->autogain = VAR_0;
 VAR_14->quality = VAR_8;
 return 0;
}
