
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_22__ TYPE_9__ ;
typedef struct TYPE_21__ TYPE_8__ ;
typedef struct TYPE_20__ TYPE_7__ ;
typedef struct TYPE_19__ TYPE_6__ ;
typedef struct TYPE_18__ TYPE_5__ ;
typedef struct TYPE_17__ TYPE_4__ ;
typedef struct TYPE_16__ TYPE_3__ ;
typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;
typedef struct TYPE_13__ TYPE_11__ ;
typedef struct TYPE_12__ TYPE_10__ ;


typedef int u16 ;
struct TYPE_13__ {scalar_t__ clipcount; scalar_t__ flags; int height; int width; scalar_t__ y; scalar_t__ x; } ;
struct TYPE_22__ {int height; int width; } ;
struct TYPE_21__ {scalar_t__ contrast; scalar_t__ saturation; scalar_t__ brightness; } ;
struct TYPE_19__ {scalar_t__ sensor_flags; } ;
struct TYPE_18__ {void* frame_rate; scalar_t__ gpio_data; scalar_t__ gpio_direction; scalar_t__ lowlight_boost; } ;
struct TYPE_17__ {scalar_t__ device_type; } ;
struct TYPE_16__ {int target_kb; } ;
struct TYPE_15__ {int creep_period; int user_squeeze; int inhibit_htables; int jpeg_options; } ;
struct TYPE_14__ {int mains_frequency; int flicker_mode_req; } ;
struct TYPE_12__ {TYPE_9__ roi; TYPE_8__ color_params; TYPE_6__ version; TYPE_5__ vp_params; TYPE_4__ pnp_id; TYPE_3__ vc_params; TYPE_2__ compression; TYPE_1__ flicker_control; } ;
struct TYPE_20__ {int palette; int brightness; int colour; int contrast; } ;
struct camera_data {TYPE_11__ vw; TYPE_10__ params; TYPE_7__ vp; int video_size; int sensor_type; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 void* VAR_3 ;
 void* VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 int VAR_9 ;
 scalar_t__ VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 scalar_t__ VAR_18 ;

__attribute__((used)) static void FUNC_0(struct camera_data *VAR_19)
{



 VAR_19->params.color_params.brightness = VAR_6;
 VAR_19->params.color_params.contrast = VAR_7;
 VAR_19->params.color_params.saturation = VAR_8;
 VAR_19->params.vp_params.lowlight_boost = 0;


 VAR_19->params.flicker_control.flicker_mode_req = VAR_11;
 VAR_19->params.flicker_control.mains_frequency = 60;


 VAR_19->params.compression.jpeg_options = VAR_2;
 VAR_19->params.compression.creep_period = 2;
 VAR_19->params.compression.user_squeeze = 20;
 VAR_19->params.compression.inhibit_htables = 0;


 VAR_19->params.vp_params.gpio_direction = 0;
 VAR_19->params.vp_params.gpio_data = 0;


 VAR_19->params.vc_params.target_kb = VAR_9;




 if(VAR_19->params.pnp_id.device_type == VAR_10) {
  if(VAR_19->params.version.sensor_flags == VAR_5)
   VAR_19->params.vp_params.frame_rate = VAR_3;
  else
   VAR_19->params.vp_params.frame_rate = VAR_4;
 } else {
  VAR_19->params.vp_params.frame_rate = VAR_4;
 }





 if (VAR_19->params.version.sensor_flags == VAR_5) {
  VAR_19->sensor_type = VAR_1;
  VAR_19->video_size = VAR_17;
  VAR_19->params.roi.width = VAR_14;
  VAR_19->params.roi.height = VAR_15;
 } else {
  VAR_19->sensor_type = VAR_0;
  VAR_19->video_size = VAR_16;
  VAR_19->params.roi.width = VAR_12;
  VAR_19->params.roi.height = VAR_13;
 }





 VAR_19->vp.palette = (u16) VAR_18;
 VAR_19->vp.brightness = (u16) VAR_19->params.color_params.brightness * 256;
 VAR_19->vp.colour = (u16) VAR_19->params.color_params.saturation * 256;
 VAR_19->vp.contrast = (u16) VAR_19->params.color_params.contrast * 256;

 VAR_19->vw.x = 0;
 VAR_19->vw.y = 0;
 VAR_19->vw.width = VAR_19->params.roi.width;
 VAR_19->vw.height = VAR_19->params.roi.height;
 VAR_19->vw.flags = 0;
 VAR_19->vw.clipcount = 0;

 return;
}
