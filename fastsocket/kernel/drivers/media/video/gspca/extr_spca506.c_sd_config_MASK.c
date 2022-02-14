
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct usb_device_id {int dummy; } ;
struct sd {int hue; int colors; int contrast; int brightness; } ;
struct cam {int nmodes; int cam_mode; } ;
struct gspca_dev {struct cam cam; } ;
struct TYPE_3__ {int default_value; } ;
struct TYPE_4__ {TYPE_1__ qctrl; } ;


 int FUNC_0 (int ) ;
 size_t VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 TYPE_2__* VAR_4 ;
 int VAR_5 ;

__attribute__((used)) static int FUNC_1(struct gspca_dev *VAR_6,
   const struct usb_device_id *VAR_7)
{
 struct sd *VAR_8 = (struct sd *) VAR_6;
 struct cam *VAR_9;

 VAR_9 = &VAR_6->cam;
 VAR_9->cam_mode = VAR_5;
 VAR_9->nmodes = FUNC_0(VAR_5);
 VAR_8->brightness = VAR_4[VAR_0].qctrl.default_value;
 VAR_8->contrast = VAR_4[VAR_2].qctrl.default_value;
 VAR_8->colors = VAR_4[VAR_1].qctrl.default_value;
 VAR_8->hue = VAR_4[VAR_3].qctrl.default_value;
 return 0;
}
