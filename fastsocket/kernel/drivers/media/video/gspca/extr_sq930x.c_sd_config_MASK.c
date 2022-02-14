
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_device_id {int driver_info; } ;
struct sd {int sensor; int type; int expo; int gain; } ;
struct cam {int bulk; int nmodes; int cam_mode; } ;
struct gspca_dev {struct cam cam; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static int FUNC_1(struct gspca_dev *VAR_3,
  const struct usb_device_id *VAR_4)
{
 struct sd *VAR_5 = (struct sd *) VAR_3;
 struct cam *VAR_6 = &VAR_3->cam;

 VAR_5->sensor = VAR_4->driver_info >> 8;
 VAR_5->type = VAR_4->driver_info;

 VAR_6->cam_mode = VAR_2;
 VAR_6->nmodes = FUNC_0(VAR_2);

 VAR_6->bulk = 1;

 VAR_5->gain = VAR_1;
 VAR_5->expo = VAR_0;

 return 0;
}
