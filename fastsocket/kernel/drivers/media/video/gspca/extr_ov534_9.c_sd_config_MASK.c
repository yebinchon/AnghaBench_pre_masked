
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_device_id {int dummy; } ;
struct sd {int freq; int satur; int sharpness; int exposure; int autogain; int contrast; int brightness; } ;
struct cam {int nmodes; int cam_mode; } ;
struct gspca_dev {int ctrl_inac; struct cam cam; } ;


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

__attribute__((used)) static int FUNC_1(struct gspca_dev *VAR_9,
       const struct usb_device_id *VAR_10)
{
 struct sd *VAR_11 = (struct sd *) VAR_9;
 struct cam *VAR_12;

 VAR_12 = &VAR_9->cam;

 VAR_12->cam_mode = VAR_8;
 VAR_12->nmodes = FUNC_0(VAR_8);

 VAR_11->brightness = VAR_1;
 VAR_11->contrast = VAR_2;
 VAR_11->satur = VAR_6;
 VAR_11->freq = VAR_5;

 return 0;
}
