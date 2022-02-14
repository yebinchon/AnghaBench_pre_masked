
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_device_id {int dummy; } ;
struct sd {int vflip; int hflip; int autogain; int exposure; int gain; int contrast; } ;
struct cam {int nmodes; int cam_mode; } ;
struct gspca_dev {struct cam cam; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (int ,char*) ;
 int VAR_6 ;
 int VAR_7 ;

__attribute__((used)) static int FUNC_2(struct gspca_dev *VAR_8,
   const struct usb_device_id *VAR_9)
{
 struct sd *VAR_10 = (struct sd *) VAR_8;
 struct cam *VAR_11;

 VAR_11 = &VAR_8->cam;

 FUNC_1(VAR_2, "Find Sensor PAC7311");
 VAR_11->cam_mode = VAR_7;
 VAR_11->nmodes = FUNC_0(VAR_7);

 VAR_10->contrast = VAR_1;
 VAR_10->gain = VAR_4;
 VAR_10->exposure = VAR_3;
 VAR_10->autogain = VAR_0;
 VAR_10->hflip = VAR_5;
 VAR_10->vflip = VAR_6;
 return 0;
}
