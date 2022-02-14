
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_device_id {int dummy; } ;
struct sd {int quality; int colors; int contrast; int brightness; } ;
struct cam {int nmodes; int cam_mode; } ;
struct gspca_dev {struct cam cam; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;

__attribute__((used)) static int FUNC_1(struct gspca_dev *VAR_5,
   const struct usb_device_id *VAR_6)
{
 struct sd *VAR_7 = (struct sd *) VAR_5;
 struct cam *VAR_8;

 VAR_8 = &VAR_5->cam;
 VAR_8->cam_mode = VAR_4;
 VAR_8->nmodes = FUNC_0(VAR_4);

 VAR_7->brightness = VAR_0;
 VAR_7->contrast = VAR_2;
 VAR_7->colors = VAR_1;
 VAR_7->quality = VAR_3;
 return 0;
}
