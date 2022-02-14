
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_9__ {void* swap_eyes; void* decimate; int mode; } ;
struct TYPE_8__ {double x; double y; double w; double h; } ;
struct TYPE_7__ {int u; int v; scalar_t__ enable; } ;
struct TYPE_10__ {int brightness; char* annotate_string; int annotate_text_colour; int annotate_bg_colour; TYPE_3__ stereo_mode; scalar_t__ annotate_text_size; scalar_t__ enable_annotate; void* stats_pass; int drc_level; scalar_t__ awb_gains_b; scalar_t__ awb_gains_r; scalar_t__ shutter_speed; TYPE_2__ roi; scalar_t__ vflip; scalar_t__ hflip; scalar_t__ rotation; TYPE_1__ colourEffects; int imageEffect; int awbMode; int exposureMeterMode; int flickerAvoidMode; int exposureMode; scalar_t__ exposureCompensation; scalar_t__ videoStabilisation; scalar_t__ ISO; scalar_t__ saturation; scalar_t__ contrast; scalar_t__ sharpness; } ;
typedef TYPE_4__ RASPICAM_CAMERA_PARAMETERS ;


 void* VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (TYPE_4__*) ;

void FUNC_1(RASPICAM_CAMERA_PARAMETERS *VAR_8)
{
   FUNC_0(VAR_8);

   VAR_8->sharpness = 0;
   VAR_8->contrast = 0;
   VAR_8->brightness = 50;
   VAR_8->saturation = 0;
   VAR_8->ISO = 0;
   VAR_8->videoStabilisation = 0;
   VAR_8->exposureCompensation = 0;
   VAR_8->exposureMode = VAR_4;
   VAR_8->flickerAvoidMode = VAR_5;
   VAR_8->exposureMeterMode = VAR_3;
   VAR_8->awbMode = VAR_2;
   VAR_8->imageEffect = VAR_6;
   VAR_8->colourEffects.enable = 0;
   VAR_8->colourEffects.u = 128;
   VAR_8->colourEffects.v = 128;
   VAR_8->rotation = 0;
   VAR_8->hflip = VAR_8->vflip = 0;
   VAR_8->roi.x = VAR_8->roi.y = 0.0;
   VAR_8->roi.w = VAR_8->roi.h = 1.0;
   VAR_8->shutter_speed = 0;
   VAR_8->awb_gains_r = 0;
   VAR_8->awb_gains_b = 0;
   VAR_8->drc_level = VAR_1;
   VAR_8->stats_pass = VAR_0;
   VAR_8->enable_annotate = 0;
   VAR_8->annotate_string[0] = '\0';
   VAR_8->annotate_text_size = 0;
   VAR_8->annotate_text_colour = -1;
   VAR_8->annotate_bg_colour = -1;
   VAR_8->stereo_mode.mode = VAR_7;
   VAR_8->stereo_mode.decimate = VAR_0;
   VAR_8->stereo_mode.swap_eyes = VAR_0;
}
