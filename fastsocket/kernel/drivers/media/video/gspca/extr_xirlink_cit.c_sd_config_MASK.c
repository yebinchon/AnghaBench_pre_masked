
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_device_id {int driver_info; } ;
struct sd {int model; int sof_len; int stop_on_control_change; int hflip; int lighting; int sharpness; int hue; int contrast; int brightness; } ;
struct cam {int nmodes; int reverse_alts; int input_flags; void* cam_mode; } ;
struct gspca_dev {int ctrl_dis; struct cam cam; } ;


 void* FUNC_0 (void*) ;
 int VAR_0 ;






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
 void* VAR_12 ;
 scalar_t__ VAR_13 ;
 void* VAR_14 ;
 void* VAR_15 ;
 void* VAR_16 ;

__attribute__((used)) static int FUNC_1(struct gspca_dev *VAR_17,
       const struct usb_device_id *VAR_18)
{
 struct sd *VAR_19 = (struct sd *) VAR_17;
 struct cam *VAR_20;

 VAR_19->model = VAR_18->driver_info;
 if (VAR_19->model == 129 && VAR_13)
  VAR_19->model = 133;

 VAR_20 = &VAR_17->cam;
 switch (VAR_19->model) {
 case 132:
  VAR_20->cam_mode = VAR_14;
  VAR_20->nmodes = FUNC_0(VAR_14);
  VAR_20->reverse_alts = 1;
  VAR_17->ctrl_dis = ~((1 << VAR_5) | (1 << VAR_6));
  VAR_19->sof_len = 4;
  break;
 case 131:
  VAR_20->cam_mode = VAR_12;
  VAR_20->nmodes = FUNC_0(VAR_12);
  VAR_20->reverse_alts = 1;
  VAR_17->ctrl_dis = (1 << VAR_7) | (1 << VAR_6);
  VAR_19->sof_len = 4;
  break;
 case 130:
  VAR_20->cam_mode = VAR_15 + 1;
  VAR_20->nmodes = 3;
  VAR_17->ctrl_dis = (1 << VAR_5) |
          (1 << VAR_9) |
          (1 << VAR_6);
  break;
 case 129:
  VAR_20->cam_mode = VAR_16;
  VAR_20->nmodes = FUNC_0(VAR_16);
  VAR_17->ctrl_dis = (1 << VAR_7) |
          (1 << VAR_8) |
          (1 << VAR_6);
  VAR_19->stop_on_control_change = 1;
  VAR_19->sof_len = 4;
  break;
 case 128:
  VAR_20->cam_mode = VAR_15;
  VAR_20->nmodes = FUNC_0(VAR_15);
  VAR_17->ctrl_dis = (1 << VAR_5) |
          (1 << VAR_9) |
          (1 << VAR_8) |
          (1 << VAR_6);
  break;
 case 133:
  VAR_20->cam_mode = VAR_16;
  VAR_20->nmodes = 2;
  VAR_20->input_flags = VAR_11;
  VAR_17->ctrl_dis = ~(1 << VAR_5);
  VAR_19->stop_on_control_change = 1;
  VAR_19->sof_len = 4;
  break;
 }

 VAR_19->brightness = VAR_0;
 VAR_19->contrast = VAR_1;
 VAR_19->hue = VAR_3;
 VAR_19->sharpness = VAR_10;
 VAR_19->lighting = VAR_4;
 VAR_19->hflip = VAR_2;

 return 0;
}
