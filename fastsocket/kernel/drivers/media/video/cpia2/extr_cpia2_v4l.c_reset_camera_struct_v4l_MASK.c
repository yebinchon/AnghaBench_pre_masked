
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_7__ ;
typedef struct TYPE_13__ TYPE_6__ ;
typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int u16 ;
struct TYPE_13__ {int stream_mode; } ;
struct TYPE_12__ {int mains_frequency; int flicker_mode_req; } ;
struct TYPE_10__ {int height; int width; } ;
struct TYPE_9__ {scalar_t__ contrast; scalar_t__ saturation; scalar_t__ brightness; } ;
struct TYPE_14__ {TYPE_6__ camera_state; TYPE_5__ flicker_control; TYPE_3__ roi; TYPE_2__ color_params; } ;
struct TYPE_11__ {scalar_t__ clipcount; scalar_t__ flags; int height; int width; scalar_t__ y; scalar_t__ x; } ;
struct TYPE_8__ {int palette; int brightness; int colour; int contrast; } ;
struct camera_data {int prio; int pixelformat; TYPE_7__ params; int num_frames; int frame_size; TYPE_4__ vw; TYPE_1__ vp; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int *) ;

__attribute__((used)) static void FUNC_1(struct camera_data *VAR_7)
{




 VAR_7->vp.palette = (u16) VAR_1;
 VAR_7->vp.brightness = (u16) VAR_7->params.color_params.brightness * 256;
 VAR_7->vp.colour = (u16) VAR_7->params.color_params.saturation * 256;
 VAR_7->vp.contrast = (u16) VAR_7->params.color_params.contrast * 256;

 VAR_7->vw.x = 0;
 VAR_7->vw.y = 0;
 VAR_7->vw.width = VAR_7->params.roi.width;
 VAR_7->vw.height = VAR_7->params.roi.height;
 VAR_7->vw.flags = 0;
 VAR_7->vw.clipcount = 0;

 VAR_7->frame_size = VAR_3;
 VAR_7->num_frames = VAR_6;


 VAR_7->params.flicker_control.flicker_mode_req = VAR_5;
 VAR_7->params.flicker_control.mains_frequency = VAR_4;


 VAR_7->params.camera_state.stream_mode = VAR_2;

 VAR_7->pixelformat = VAR_0;
 FUNC_0(&VAR_7->prio);
 return;
}
