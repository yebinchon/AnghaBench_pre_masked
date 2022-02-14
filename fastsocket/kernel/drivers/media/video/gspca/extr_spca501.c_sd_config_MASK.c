
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct usb_device_id {int driver_info; } ;
struct sd {int colors; int contrast; int brightness; int subtype; } ;
struct cam {int nmodes; int cam_mode; } ;
struct gspca_dev {struct cam cam; } ;
struct TYPE_3__ {int default_value; } ;
struct TYPE_4__ {TYPE_1__ qctrl; } ;


 int FUNC_0 (int ) ;
 size_t VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 TYPE_2__* VAR_3 ;
 int VAR_4 ;

__attribute__((used)) static int FUNC_1(struct gspca_dev *VAR_5,
   const struct usb_device_id *VAR_6)
{
 struct sd *VAR_7 = (struct sd *) VAR_5;
 struct cam *VAR_8;

 VAR_8 = &VAR_5->cam;
 VAR_8->cam_mode = VAR_4;
 VAR_8->nmodes = FUNC_0(VAR_4);
 VAR_7->subtype = VAR_6->driver_info;
 VAR_7->brightness = VAR_3[VAR_0].qctrl.default_value;
 VAR_7->contrast = VAR_3[VAR_2].qctrl.default_value;
 VAR_7->colors = VAR_3[VAR_1].qctrl.default_value;

 return 0;
}
