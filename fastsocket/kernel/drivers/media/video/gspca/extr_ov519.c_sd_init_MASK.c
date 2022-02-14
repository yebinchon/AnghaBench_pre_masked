
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int curr_mode; } ;
struct sd {int bridge; int sensor; int frame_rate; TYPE_2__* ctrls; TYPE_1__ gspca_dev; int sif; } ;
struct cam {void* nmodes; void* cam_mode; } ;
struct gspca_dev {int usb_err; int ctrl_dis; struct cam cam; } ;
struct TYPE_4__ {int def; int max; int val; } ;


 void* FUNC_0 (void*) ;







 size_t VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 size_t VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_1 (int ,char*) ;
 int * VAR_13 ;
 int FUNC_2 (char*) ;
 int FUNC_3 (struct sd*,int ,int ) ;
 int FUNC_4 (struct sd*,int,int,int) ;
 void* VAR_14 ;
 scalar_t__ FUNC_5 (struct sd*,int ) ;
 int FUNC_6 (int) ;
 void* VAR_15 ;
 void* VAR_16 ;
 void* VAR_17 ;
 void* VAR_18 ;
 void* VAR_19 ;
 void* VAR_20 ;
 void* VAR_21 ;
 void* VAR_22 ;
 void* VAR_23 ;
 void* VAR_24 ;
 int FUNC_7 (struct gspca_dev*) ;
 void* VAR_25 ;
 int FUNC_8 (struct gspca_dev*) ;
 void* VAR_26 ;
 int FUNC_9 (struct sd*) ;
 int FUNC_10 (struct sd*) ;
 int FUNC_11 (struct sd*) ;
 void* VAR_27 ;
 int FUNC_12 (struct sd*,int ) ;
 int FUNC_13 (struct sd*) ;
 int FUNC_14 (struct sd*) ;
 int FUNC_15 (struct sd*) ;
 int FUNC_16 (struct sd*) ;
 int FUNC_17 (struct sd*) ;
 int FUNC_18 (struct sd*) ;
 int FUNC_19 (struct sd*) ;
 void* VAR_28 ;
 void* VAR_29 ;
 int FUNC_20 (struct sd*,int ,int) ;
 int FUNC_21 (struct gspca_dev*) ;
 int FUNC_22 (struct gspca_dev*) ;
 int FUNC_23 (struct gspca_dev*) ;
 int FUNC_24 (struct gspca_dev*) ;
 int FUNC_25 (struct sd*) ;
 int FUNC_26 (struct sd*) ;
 void* VAR_30 ;
 int FUNC_27 (struct sd*,void*,void*) ;
 int FUNC_28 (struct sd*,void*,void*) ;

__attribute__((used)) static int FUNC_29(struct gspca_dev *VAR_31)
{
 struct sd *VAR_32 = (struct sd *) VAR_31;
 struct cam *VAR_33 = &VAR_31->cam;

 switch (VAR_32->bridge) {
 case 146:
 case 145:
  FUNC_7(VAR_31);
  break;
 case 144:
 case 143:
  FUNC_8(VAR_31);
  break;
 case 142:
  FUNC_9(VAR_32);
  break;
 case 141:
  FUNC_19(VAR_32);
  break;
 case 140:
  FUNC_25(VAR_32);
  break;
 }




 VAR_32->sensor = -1;


 if (FUNC_5(VAR_32, VAR_10) >= 0) {
  FUNC_16(VAR_32);


 } else if (FUNC_5(VAR_32, VAR_7) >= 0) {
  FUNC_15(VAR_32);


 } else if (FUNC_5(VAR_32, VAR_11) >= 0) {
  FUNC_17(VAR_32);


 } else if (FUNC_5(VAR_32, VAR_12) >= 0) {
  FUNC_18(VAR_32);
 } else {
  FUNC_2("Can't determine sensor slave IDs");
  goto error;
 }

 if (VAR_32->sensor < 0)
  goto error;

 FUNC_12(VAR_32, 0);

 switch (VAR_32->bridge) {
 case 146:
 case 145:
  if (VAR_32->sif) {
   VAR_33->cam_mode = VAR_25;
   VAR_33->nmodes = FUNC_0(VAR_25);
  }
  break;
 case 144:
 case 143:
  if (VAR_32->sif) {
   VAR_33->cam_mode = VAR_26;
   VAR_33->nmodes = FUNC_0(VAR_26);
  }
  break;
 case 142:
  if (VAR_32->sif) {
   VAR_33->cam_mode = VAR_27;
   VAR_33->nmodes = FUNC_0(VAR_27);
  }
  break;
 case 141:
  if (VAR_32->sensor == 139) {
   VAR_33->cam_mode = VAR_28;
   VAR_33->nmodes = FUNC_0(VAR_28);
  } else if (VAR_32->sensor == 138) {
   VAR_33->cam_mode = VAR_29;
   VAR_33->nmodes = FUNC_0(VAR_29);
  } else if (VAR_32->sif) {
   VAR_33->cam_mode = VAR_27;
   VAR_33->nmodes = FUNC_0(VAR_27);
  }
  break;
 case 140:
  if (VAR_32->sif)
   VAR_33->nmodes = FUNC_0(VAR_30) - 1;


  FUNC_26(VAR_32);
  break;
 }

 VAR_31->ctrl_dis = VAR_13[VAR_32->sensor];


 switch (VAR_32->sensor) {
 case 139:
  FUNC_27(VAR_32, VAR_15, FUNC_0(VAR_15));


  FUNC_4(VAR_32, 0x13, 0x27, 0x27);
  break;
 case 138:
  FUNC_27(VAR_32, VAR_16, FUNC_0(VAR_16));


  FUNC_4(VAR_32, 0x13, 0x27, 0x27);
  break;
 case 137:
  FUNC_27(VAR_32, VAR_17, FUNC_0(VAR_17));
  break;
 case 136:
 case 135:
  VAR_32->ctrls[VAR_2].def = 200;

  FUNC_27(VAR_32, VAR_18, FUNC_0(VAR_18));
  break;
 default:


  FUNC_27(VAR_32, VAR_19, FUNC_0(VAR_19));
  FUNC_4(VAR_32, 0x0e, 0x00, 0x40);
  break;
 case 134:
 case 133:
  FUNC_27(VAR_32, VAR_20, FUNC_0(VAR_20));
  break;
 case 132:
 case 131:
  FUNC_27(VAR_32, VAR_21, FUNC_0(VAR_21));
  break;
 case 130:
  FUNC_3(VAR_32, VAR_9, VAR_8);
  FUNC_6(14);
  FUNC_20(VAR_32, VAR_6, 0x23);
  FUNC_28(VAR_32, VAR_14,
    FUNC_0(VAR_14));
  FUNC_27(VAR_32, VAR_22, FUNC_0(VAR_22));
  VAR_32->gspca_dev.curr_mode = 1;
  VAR_32->frame_rate = 15;
  FUNC_11(VAR_32);
  FUNC_10(VAR_32);
  VAR_32->ctrls[VAR_1].max = 4;
  VAR_32->ctrls[VAR_1].val =
   VAR_32->ctrls[VAR_1].def = 2;
  FUNC_23(VAR_31);
  VAR_32->ctrls[VAR_2].max = 6;
  VAR_32->ctrls[VAR_2].val =
   VAR_32->ctrls[VAR_2].def = 3;
  FUNC_24(VAR_31);
  VAR_32->ctrls[VAR_0].max = 6;
  VAR_32->ctrls[VAR_0].val =
   VAR_32->ctrls[VAR_0].def = 3;
  FUNC_22(VAR_31);
  FUNC_21(VAR_31);
  FUNC_13(VAR_32);
  FUNC_14(VAR_32);
  FUNC_12(VAR_32, 0);
  break;
 case 129:
  VAR_32->ctrls[VAR_5].max = 3;
  VAR_32->ctrls[VAR_5].def = 3;
  FUNC_27(VAR_32, VAR_23, FUNC_0(VAR_23));
  break;
 case 128:
  FUNC_27(VAR_32, VAR_24, FUNC_0(VAR_24));
  break;
 }
 return VAR_31->usb_err;
error:
 FUNC_1(VAR_3, "OV519 Config failed");
 return -VAR_4;
}
