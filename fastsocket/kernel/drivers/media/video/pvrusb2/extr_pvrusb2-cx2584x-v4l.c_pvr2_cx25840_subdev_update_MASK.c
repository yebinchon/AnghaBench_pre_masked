
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int u32 ;
struct v4l2_subdev {TYPE_5__* ops; } ;
struct routing_scheme {int cnt; TYPE_2__* def; } ;
struct pvr2_hdw {int input_val; TYPE_1__* hdw_desc; scalar_t__ force_dirty; scalar_t__ input_dirty; } ;
typedef enum cx25840_video_input { ____Placeholder_cx25840_video_input } cx25840_video_input ;
typedef enum cx25840_audio_input { ____Placeholder_cx25840_audio_input } cx25840_audio_input ;
struct TYPE_10__ {TYPE_4__* audio; TYPE_3__* video; } ;
struct TYPE_9__ {int (* s_routing ) (struct v4l2_subdev*,int ,int ,int ) ;} ;
struct TYPE_8__ {int (* s_routing ) (struct v4l2_subdev*,int ,int ,int ) ;} ;
struct TYPE_7__ {int vid; int aud; } ;
struct TYPE_6__ {unsigned int signal_routing_scheme; } ;


 unsigned int FUNC_0 (struct routing_scheme**) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ,char*,...) ;
 struct routing_scheme** VAR_2 ;
 int FUNC_2 (struct v4l2_subdev*,int ,int ,int ) ;
 int FUNC_3 (struct v4l2_subdev*,int ,int ,int ) ;

void FUNC_4(struct pvr2_hdw *VAR_3, struct v4l2_subdev *VAR_4)
{
 FUNC_1(VAR_0, "subdev cx2584x update...");
 if (VAR_3->input_dirty || VAR_3->force_dirty) {
  enum cx25840_video_input VAR_5;
  enum cx25840_audio_input VAR_6;
  const struct routing_scheme *VAR_7;
  unsigned int VAR_8 = VAR_3->hdw_desc->signal_routing_scheme;

  VAR_7 = (VAR_8 < FUNC_0(VAR_2)) ?
   VAR_2[VAR_8] : ((void*)0);
  if ((VAR_7 == ((void*)0)) ||
      (VAR_3->input_val < 0) ||
      (VAR_3->input_val >= VAR_7->cnt)) {
   FUNC_1(VAR_1,
       "*** WARNING *** subdev cx2584x set_input:"
       " Invalid routing scheme (%u)"
       " and/or input (%d)",
       VAR_8, VAR_3->input_val);
   return;
  }
  VAR_5 = VAR_7->def[VAR_3->input_val].vid;
  VAR_6 = VAR_7->def[VAR_3->input_val].aud;
  FUNC_1(VAR_0,
      "subdev cx2584x set_input vid=0x%x aud=0x%x",
      VAR_5, VAR_6);
  VAR_4->ops->video->s_routing(VAR_4, (u32)VAR_5, 0, 0);
  VAR_4->ops->audio->s_routing(VAR_4, (u32)VAR_6, 0, 0);
 }
}
