
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_9__ ;
typedef struct TYPE_17__ TYPE_8__ ;
typedef struct TYPE_16__ TYPE_7__ ;
typedef struct TYPE_15__ TYPE_6__ ;
typedef struct TYPE_14__ TYPE_5__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct v4l2_control {int id; int value; } ;
struct TYPE_14__ {int user_effects; int gpio_data; int frame_rate; } ;
struct TYPE_13__ {int stream_mode; } ;
struct TYPE_12__ {int cam_register; } ;
struct TYPE_11__ {int target_kb; } ;
struct TYPE_10__ {int brightness; int contrast; int saturation; } ;
struct TYPE_15__ {TYPE_5__ vp_params; TYPE_4__ camera_state; TYPE_3__ flicker_control; TYPE_2__ vc_params; TYPE_1__ color_params; } ;
struct camera_data {TYPE_6__ params; } ;
struct TYPE_18__ {int value; } ;
struct TYPE_17__ {int value; } ;
struct TYPE_16__ {int value; } ;
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
 int FUNC_0 (char*,int,int) ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;





 int FUNC_1 (struct camera_data*,int ,int ,int ) ;
 TYPE_9__* VAR_19 ;
 TYPE_8__* VAR_20 ;
 TYPE_7__* VAR_21 ;

__attribute__((used)) static int FUNC_2(void *VAR_22,struct camera_data *VAR_23)
{
 struct v4l2_control *VAR_24 = VAR_22;

 switch(VAR_24->id) {
 case 132:
  FUNC_1(VAR_23, VAR_3,
     VAR_18, 0);
  VAR_24->value = VAR_23->params.color_params.brightness;
  break;
 case 131:
  FUNC_1(VAR_23, VAR_0,
     VAR_18, 0);
  VAR_24->value = VAR_23->params.color_params.contrast;
  break;
 case 129:
  FUNC_1(VAR_23, VAR_5,
     VAR_18, 0);
  VAR_24->value = VAR_23->params.color_params.saturation;
  break;
 case 130:
  FUNC_1(VAR_23, VAR_2,
     VAR_18, 0);
  VAR_24->value = (VAR_23->params.vp_params.user_effects &
       VAR_9) != 0;
  break;
 case 128:
  FUNC_1(VAR_23, VAR_2,
     VAR_18, 0);
  VAR_24->value = (VAR_23->params.vp_params.user_effects &
       VAR_8) != 0;
  break;
 case 134:
  VAR_24->value = VAR_23->params.vc_params.target_kb;
  break;
 case 137:
  FUNC_1(VAR_23, VAR_4,
     VAR_18, 0);
  VAR_24->value = VAR_23->params.vp_params.gpio_data;
  break;
 case 139:
 {
  int VAR_25, VAR_26;
  FUNC_1(VAR_23, VAR_1,
     VAR_18, 0);
  if(VAR_23->params.flicker_control.cam_register &
     VAR_7) {
   VAR_26 = VAR_14;
  } else {
      if(VAR_23->params.flicker_control.cam_register &
         VAR_6) {
   VAR_26 = VAR_11;
      } else {
   VAR_26 = VAR_12;
      }
  }
  for(VAR_25=0; VAR_25<VAR_15; VAR_25++) {
   if(VAR_19[VAR_25].value == VAR_26) {
    VAR_24->value = VAR_25;
    break;
   }
  }
  if(VAR_25 == VAR_15)
   return -VAR_10;
  break;
 }
 case 138:
 {
  int VAR_27 = VAR_16 - 1;
  int VAR_28;
  for(VAR_28=0; VAR_28<= VAR_27; VAR_28++) {
   if(VAR_23->params.vp_params.frame_rate ==
      VAR_20[VAR_28].value)
    break;
  }
  if(VAR_28 > VAR_27)
   return -VAR_10;
  VAR_24->value = VAR_28;
  break;
 }
 case 133:
  VAR_24->value = VAR_23->params.camera_state.stream_mode;
  break;
 case 136:
 {
  int VAR_29;
  FUNC_1(VAR_23, VAR_4,
     VAR_18, 0);
  for(VAR_29=0; VAR_29<VAR_17; VAR_29++) {
   if((VAR_23->params.vp_params.gpio_data&VAR_13) ==
      VAR_21[VAR_29].value) {
    break;
   }
  }
  if(VAR_29 == VAR_17)
   return -VAR_10;
  VAR_24->value = VAR_29;
  break;
 }
 case 135:
  return -VAR_10;
 default:
  return -VAR_10;
 }

 FUNC_0("Get control id:%d, value:%d\n", VAR_24->id, VAR_24->value);

 return 0;
}
