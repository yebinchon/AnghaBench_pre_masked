
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct usb_device_id {int driver_info; } ;
struct sd {int sensor; int bridge; int freq; scalar_t__ autogain; int exposure; int gain; int brightness; } ;
struct cam {int npkt; void* nmodes; void* cam_mode; } ;
struct gspca_dev {int* usb_buf; int ctrl_dis; struct cam cam; } ;
struct TYPE_2__ {int ctrl_dis; int flags; } ;


 void* FUNC_0 (void*) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_1 (struct gspca_dev*,int) ;
 TYPE_1__* VAR_12 ;
 void* VAR_13 ;
 void* VAR_14 ;

__attribute__((used)) static int FUNC_2(struct gspca_dev *VAR_15,
   const struct usb_device_id *VAR_16)
{
 struct sd *VAR_17 = (struct sd *) VAR_15;
 struct cam *VAR_18;

 FUNC_1(VAR_15, 0x00);
 if (VAR_15->usb_buf[0] != 0x10)
  return -VAR_5;


 VAR_17->sensor = VAR_16->driver_info >> 8;
 VAR_17->bridge = VAR_16->driver_info & 0xff;
 VAR_15->ctrl_dis = VAR_12[VAR_17->sensor].ctrl_dis;

 VAR_18 = &VAR_15->cam;
 if (!(VAR_12[VAR_17->sensor].flags & VAR_10)) {
  VAR_18->cam_mode = VAR_14;
  VAR_18->nmodes = FUNC_0(VAR_14);
 } else {
  VAR_18->cam_mode = VAR_13;
  VAR_18->nmodes = FUNC_0(VAR_13);
 }
 VAR_18->npkt = 36;

 VAR_17->brightness = VAR_2;
 VAR_17->gain = VAR_11;
 if (VAR_12[VAR_17->sensor].flags & VAR_9) {
  VAR_17->exposure = VAR_3;
  VAR_15->ctrl_dis |= (1 << VAR_7);
 } else {
  VAR_17->exposure = VAR_6;
  VAR_15->ctrl_dis |= (1 << VAR_4);
 }
 if (VAR_15->ctrl_dis & (1 << VAR_1))
  VAR_17->autogain = 0;
 else
  VAR_17->autogain = VAR_0;
 VAR_17->freq = VAR_8;

 return 0;
}
