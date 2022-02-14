
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_device_id {int dummy; } ;
struct sd {int frame_rate; int freqfltr; int vflip; int hflip; int sharpness; int aec; int awb; int agc; int exposure; int gain; int contrast; int brightness; } ;
struct cam {int bulk; int bulk_size; int bulk_nurbs; int mode_framerates; int nmodes; int cam_mode; } ;
struct gspca_dev {int ctrl_inac; struct cam cam; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
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
 int VAR_12 ;
 int VAR_13 ;

__attribute__((used)) static int FUNC_1(struct gspca_dev *VAR_14,
       const struct usb_device_id *VAR_15)
{
 struct sd *VAR_16 = (struct sd *) VAR_14;
 struct cam *VAR_17;

 VAR_17 = &VAR_14->cam;

 VAR_17->cam_mode = VAR_13;
 VAR_17->nmodes = FUNC_0(VAR_13);
 VAR_17->mode_framerates = VAR_12;

 VAR_17->bulk = 1;
 VAR_17->bulk_size = 16384;
 VAR_17->bulk_nurbs = 2;

 VAR_16->frame_rate = 30;

 VAR_16->brightness = VAR_4;
 VAR_16->contrast = VAR_5;
 VAR_16->gain = VAR_8;
 VAR_16->exposure = VAR_6;



 VAR_14->ctrl_inac |= (1 << VAR_3);

 VAR_16->awb = VAR_2;
 VAR_16->aec = VAR_0;
 VAR_16->sharpness = VAR_10;
 VAR_16->hflip = VAR_9;
 VAR_16->vflip = VAR_11;
 VAR_16->freqfltr = VAR_7;

 return 0;
}
