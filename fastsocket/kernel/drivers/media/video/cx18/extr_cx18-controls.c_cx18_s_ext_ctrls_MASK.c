
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct v4l2_mbus_framefmt {int width; int code; int height; } ;
struct v4l2_ext_controls {scalar_t__ ctrl_class; int count; int error_idx; TYPE_1__* controls; } ;
struct v4l2_control {int value; int id; } ;
struct file {int dummy; } ;
struct cx2341x_mpeg_params {scalar_t__ video_encoding; int width; scalar_t__ stream_vbi_fmt; scalar_t__ stream_type; int audio_properties; int height; } ;
struct cx18_open_id {size_t type; int prio; struct cx18* cx; } ;
struct cx18_api_func_private {int * s; struct cx18* cx; } ;
struct cx18 {int dualwatch_stereo_mode; struct cx2341x_mpeg_params params; int * streams; int sd_av; int ana_capturing; int prio; } ;
struct TYPE_2__ {int value; int id; } ;


 unsigned int FUNC_0 (int*) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (int *) ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_2 (struct cx18*,int ,int ,int) ;
 int FUNC_3 (struct cx18*,struct v4l2_control*) ;
 int FUNC_4 (struct cx18*,scalar_t__,scalar_t__) ;
 int FUNC_5 (struct cx2341x_mpeg_params*,int ,struct v4l2_ext_controls*,int ) ;
 int FUNC_6 (struct cx18_api_func_private*,int ,struct cx2341x_mpeg_params*,struct cx2341x_mpeg_params*) ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_7 (int *,int ) ;
 int FUNC_8 (int ,int ,int ,struct v4l2_mbus_framefmt*) ;
 int VAR_10 ;

int FUNC_9(struct file *VAR_11, void *VAR_12, struct v4l2_ext_controls *VAR_13)
{
 struct cx18_open_id *VAR_14 = VAR_12;
 struct cx18 *VAR_15 = VAR_14->cx;
 int VAR_16;
 struct v4l2_control VAR_17;

 VAR_16 = FUNC_7(&VAR_15->prio, VAR_14->prio);
 if (VAR_16)
  return VAR_16;

 if (VAR_13->ctrl_class == VAR_2) {
  int VAR_18;
  int VAR_19 = 0;

  for (VAR_18 = 0; VAR_18 < VAR_13->count; VAR_18++) {
   VAR_17.id = VAR_13->controls[VAR_18].id;
   VAR_17.value = VAR_13->controls[VAR_18].value;
   VAR_19 = FUNC_3(VAR_15, &VAR_17);
   VAR_13->controls[VAR_18].value = VAR_17.value;
   if (VAR_19) {
    VAR_13->error_idx = VAR_18;
    break;
   }
  }
  return VAR_19;
 }
 if (VAR_13->ctrl_class == VAR_1) {
  static u32 VAR_20[3] = { 44100, 48000, 32000 };
  struct cx18_api_func_private VAR_21;
  struct cx2341x_mpeg_params VAR_22 = VAR_15->params;
  int VAR_23 = FUNC_5(&VAR_22, FUNC_1(&VAR_15->ana_capturing),
      VAR_13, VAR_5);
  unsigned int VAR_24;

  if (VAR_23)
   return VAR_23;

  if (VAR_22.video_encoding != VAR_15->params.video_encoding) {
   int VAR_25 = VAR_22.video_encoding ==
      VAR_4;
   struct v4l2_mbus_framefmt VAR_26;


   VAR_26.width = VAR_15->params.width / (VAR_25 ? 2 : 1);
   VAR_26.height = VAR_15->params.height;
   VAR_26.code = VAR_3;
   FUNC_8(VAR_15->sd_av, VAR_10, VAR_9, &VAR_26);
  }
  VAR_21.cx = VAR_15;
  VAR_21.s = &VAR_15->streams[VAR_14->type];
  VAR_23 = FUNC_6(&VAR_21, VAR_7, &VAR_15->params, &VAR_22);
  if (!VAR_23 &&
      (VAR_15->params.stream_vbi_fmt != VAR_22.stream_vbi_fmt ||
       VAR_15->params.stream_type != VAR_22.stream_type))
   VAR_23 = FUNC_4(VAR_15, VAR_22.stream_vbi_fmt,
       VAR_22.stream_type);
  VAR_15->params = VAR_22;
  VAR_15->dualwatch_stereo_mode = VAR_22.audio_properties & 0x0300;
  VAR_24 = VAR_22.audio_properties & 0x03;


  if (VAR_24 < FUNC_0(VAR_20))
   FUNC_2(VAR_15, VAR_6, VAR_8, VAR_20[VAR_24]);
  return VAR_23;
 }
 return -VAR_0;
}
