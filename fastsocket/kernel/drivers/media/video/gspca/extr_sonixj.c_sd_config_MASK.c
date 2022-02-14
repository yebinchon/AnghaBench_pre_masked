
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_device_id {int driver_info; } ;
struct sd {int bridge; int sensor; int flags; int ag_cnt; int jpegqual; int quality; int ctrls; } ;
struct cam {int npkt; int ctrls; void* nmodes; void* cam_mode; } ;
struct gspca_dev {struct cam cam; } ;


 void* FUNC_0 (void*) ;
 int VAR_0 ;
 int VAR_1 ;
 void* VAR_2 ;
 void* VAR_3 ;

__attribute__((used)) static int FUNC_1(struct gspca_dev *VAR_4,
   const struct usb_device_id *VAR_5)
{
 struct sd *VAR_6 = (struct sd *) VAR_4;
 struct cam *VAR_7;

 VAR_6->bridge = VAR_5->driver_info >> 16;
 VAR_6->sensor = VAR_5->driver_info >> 8;
 VAR_6->flags = VAR_5->driver_info;

 VAR_7 = &VAR_4->cam;
 if (VAR_6->sensor == VAR_1) {
  VAR_7->cam_mode = VAR_2;
  VAR_7->nmodes = FUNC_0(VAR_2);
 } else {
  VAR_7->cam_mode = VAR_3;
  VAR_7->nmodes = FUNC_0(VAR_3);
 }
 VAR_7->npkt = 24;
 VAR_7->ctrls = VAR_6->ctrls;

 VAR_6->ag_cnt = -1;
 VAR_6->quality = VAR_0;
 VAR_6->jpegqual = 80;

 return 0;
}
