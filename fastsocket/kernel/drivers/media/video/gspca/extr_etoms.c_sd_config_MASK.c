
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_device_id {scalar_t__ driver_info; } ;
struct sd {scalar_t__ sensor; int ag_cnt; int autogain; int colors; int contrast; int brightness; } ;
struct cam {void* nmodes; void* cam_mode; } ;
struct gspca_dev {int ctrl_dis; struct cam cam; } ;


 void* FUNC_0 (void*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 void* VAR_6 ;
 void* VAR_7 ;

__attribute__((used)) static int FUNC_1(struct gspca_dev *VAR_8,
       const struct usb_device_id *VAR_9)
{
 struct sd *VAR_10 = (struct sd *) VAR_8;
 struct cam *VAR_11;

 VAR_11 = &VAR_8->cam;
 VAR_10->sensor = VAR_9->driver_info;
 if (VAR_10->sensor == VAR_5) {
  VAR_11->cam_mode = VAR_6;
  VAR_11->nmodes = FUNC_0(VAR_6);
 } else {
  VAR_11->cam_mode = VAR_7;
  VAR_11->nmodes = FUNC_0(VAR_7);
  VAR_8->ctrl_dis = (1 << VAR_3);
 }
 VAR_10->brightness = VAR_1;
 VAR_10->contrast = VAR_4;
 VAR_10->colors = VAR_2;
 VAR_10->autogain = VAR_0;
 VAR_10->ag_cnt = -1;
 return 0;
}
