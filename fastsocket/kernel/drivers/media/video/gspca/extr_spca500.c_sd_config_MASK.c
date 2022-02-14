
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_device_id {scalar_t__ driver_info; } ;
struct sd {scalar_t__ subtype; int quality; int colors; int contrast; int brightness; } ;
struct cam {void* nmodes; void* cam_mode; } ;
struct gspca_dev {struct cam cam; } ;


 void* FUNC_0 (void*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 void* VAR_5 ;
 void* VAR_6 ;

__attribute__((used)) static int FUNC_1(struct gspca_dev *VAR_7,
   const struct usb_device_id *VAR_8)
{
 struct sd *VAR_9 = (struct sd *) VAR_7;
 struct cam *VAR_10;

 VAR_10 = &VAR_7->cam;
 VAR_9->subtype = VAR_8->driver_info;
 if (VAR_9->subtype != VAR_3) {
  VAR_10->cam_mode = VAR_6;
  VAR_10->nmodes = FUNC_0(VAR_6);
 } else {
  VAR_10->cam_mode = VAR_5;
  VAR_10->nmodes = FUNC_0(VAR_5);
 }
 VAR_9->brightness = VAR_0;
 VAR_9->contrast = VAR_2;
 VAR_9->colors = VAR_1;
 VAR_9->quality = VAR_4;
 return 0;
}
