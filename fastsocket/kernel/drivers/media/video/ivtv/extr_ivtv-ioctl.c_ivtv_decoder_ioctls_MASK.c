
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int vc ;
typedef int u64 ;
typedef int u32 ;
struct TYPE_4__ {int vsync_field; } ;
struct video_event {int flags; int type; TYPE_2__ u; int cmd; } ;
struct video_command {int flags; int type; TYPE_2__ u; int cmd; } ;
struct ivtv_stream {int dma_pts; int type; } ;
struct ivtv_open_id {size_t type; int yuv_frames; struct ivtv* itv; } ;
struct ivtv_dma_frame {int * y_source; int type; } ;
struct TYPE_3__ {int lace_mode; } ;
struct ivtv {int v4l2_cap; int* last_dec_timing; unsigned long speed_mute_audio; unsigned long audio_stereo_mode; unsigned long audio_bilingual_mode; int serialize_lock; int event_waitq; int i_flags; TYPE_1__ yuv_info; int output_mode; int decoding; struct ivtv_stream* streams; } ;
struct file {int f_flags; int private_data; } ;





 unsigned long VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_1 (char*) ;
 int FUNC_2 (char*,...) ;
 int FUNC_3 (char*) ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;

 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 int VAR_27 ;


 int VAR_28 ;
 int VAR_29 ;






 unsigned long VAR_30 ;


 int VAR_31 ;
 int VAR_32 ;
 int VAR_33 ;
 int FUNC_4 (int *) ;
 int VAR_34 ;
 struct ivtv_open_id* FUNC_5 (int ) ;
 int FUNC_6 (int *,int *) ;
 int FUNC_7 (struct ivtv*,int ,int,int*) ;
 int FUNC_8 (struct ivtv*,int) ;
 int FUNC_9 (struct ivtv_stream*) ;
 int FUNC_10 (struct ivtv*,int ) ;
 int FUNC_11 (struct ivtv_open_id*,size_t) ;
 int FUNC_12 (struct ivtv*,int ,int,unsigned long,unsigned long) ;
 int FUNC_13 (struct ivtv*,struct ivtv_open_id*,struct video_event*,int) ;
 int FUNC_14 (struct ivtv*,struct ivtv_dma_frame*) ;
 int FUNC_15 (int*,int*,int) ;
 int FUNC_16 (struct video_event*,int ,int) ;
 int FUNC_17 (int *) ;
 int FUNC_18 (int *) ;
 int FUNC_19 (int *,int *,int ) ;
 int FUNC_20 () ;
 int FUNC_21 (int ,int *) ;
 int FUNC_22 (int ) ;
 int FUNC_23 (int ,int *) ;
 int FUNC_24 (int ,int *) ;
 int VAR_35 ;

__attribute__((used)) static int FUNC_25(struct file *VAR_36, unsigned int VAR_37, void *VAR_38)
{
 struct ivtv_open_id *VAR_39 = FUNC_5(VAR_36->private_data);
 struct ivtv *VAR_40 = VAR_39->itv;
 int VAR_41 = VAR_36->f_flags & VAR_18;
 struct ivtv_stream *VAR_42 = &VAR_40->streams[VAR_39->type];
 unsigned long VAR_43 = (unsigned long)VAR_38;

 switch (VAR_37) {
 case 138: {
  struct ivtv_dma_frame *VAR_44 = VAR_38;

  FUNC_2("IVTV_IOC_DMA_FRAME\n");
  if (!(VAR_40->v4l2_cap & VAR_21))
   return -VAR_7;
  if (VAR_44->type != VAR_20)
   return -VAR_7;
  if (VAR_40->output_mode == VAR_17 && VAR_44->y_source == ((void*)0))
   return 0;
  if (FUNC_11(VAR_39, VAR_39->type)) {
   return -VAR_5;
  }
  if (FUNC_10(VAR_40, VAR_17) != VAR_17) {
   FUNC_9(VAR_42);
   return -VAR_5;
  }

  VAR_39->yuv_frames = 1;
  if (VAR_44->y_source == ((void*)0))
   return 0;
  return FUNC_14(VAR_40, VAR_44);
 }

 case 132: {
  u32 VAR_45[VAR_3];
  u64 *VAR_46 = VAR_38;

  FUNC_2("VIDEO_GET_PTS\n");
  if (VAR_42->type < VAR_9) {
   *VAR_46 = VAR_42->dma_pts;
   break;
  }
  if (!(VAR_40->v4l2_cap & VAR_21))
   return -VAR_7;

  if (FUNC_24(VAR_14, &VAR_40->i_flags)) {
   *VAR_46 = (u64) ((u64)VAR_40->last_dec_timing[2] << 32) |
     (u64)VAR_40->last_dec_timing[1];
   break;
  }
  *VAR_46 = 0;
  if (FUNC_4(&VAR_40->decoding)) {
   if (FUNC_7(VAR_40, VAR_1, 5, VAR_45)) {
    FUNC_3("GET_TIMING: couldn't read clock\n");
    return -VAR_8;
   }
   FUNC_15(VAR_40->last_dec_timing, VAR_45, sizeof(VAR_40->last_dec_timing));
   FUNC_21(VAR_14, &VAR_40->i_flags);
   *VAR_46 = (u64) ((u64) VAR_45[2] << 32) | (u64) VAR_45[1];

  }
  break;
 }

 case 133: {
  u32 VAR_47[VAR_3];
  u64 *VAR_48 = VAR_38;

  FUNC_2("VIDEO_GET_FRAME_COUNT\n");
  if (VAR_42->type < VAR_9) {
   *VAR_48 = 0;
   break;
  }
  if (!(VAR_40->v4l2_cap & VAR_21))
   return -VAR_7;

  if (FUNC_24(VAR_14, &VAR_40->i_flags)) {
   *VAR_48 = VAR_40->last_dec_timing[0];
   break;
  }
  *VAR_48 = 0;
  if (FUNC_4(&VAR_40->decoding)) {
   if (FUNC_7(VAR_40, VAR_1, 5, VAR_47)) {
    FUNC_3("GET_TIMING: couldn't read clock\n");
    return -VAR_8;
   }
   FUNC_15(VAR_40->last_dec_timing, VAR_47, sizeof(VAR_40->last_dec_timing));
   FUNC_21(VAR_14, &VAR_40->i_flags);
   *VAR_48 = VAR_47[0];
  }
  break;
 }

 case 131: {
  struct video_command VAR_49;

  FUNC_2("VIDEO_PLAY\n");
  FUNC_16(&VAR_49, 0, sizeof(VAR_49));
  VAR_49.cmd = VAR_24;
  return FUNC_13(VAR_40, VAR_39, &VAR_49, 0);
 }

 case 129: {
  struct video_command VAR_50;

  FUNC_2("VIDEO_STOP\n");
  FUNC_16(&VAR_50, 0, sizeof(VAR_50));
  VAR_50.cmd = VAR_25;
  VAR_50.flags = VAR_27 | VAR_26;
  return FUNC_13(VAR_40, VAR_39, &VAR_50, 0);
 }

 case 135: {
  struct video_command VAR_51;

  FUNC_2("VIDEO_FREEZE\n");
  FUNC_16(&VAR_51, 0, sizeof(VAR_51));
  VAR_51.cmd = VAR_23;
  return FUNC_13(VAR_40, VAR_39, &VAR_51, 0);
 }

 case 136: {
  struct video_command VAR_52;

  FUNC_2("VIDEO_CONTINUE\n");
  FUNC_16(&VAR_52, 0, sizeof(VAR_52));
  VAR_52.cmd = VAR_22;
  return FUNC_13(VAR_40, VAR_39, &VAR_52, 0);
 }

 case 137:
 case 128: {
  struct video_command *VAR_53 = VAR_38;
  int VAR_54 = (VAR_37 == 128);

  if (VAR_54)
   FUNC_2("VIDEO_TRY_COMMAND %d\n", VAR_53->cmd);
  else
   FUNC_2("VIDEO_COMMAND %d\n", VAR_53->cmd);
  return FUNC_13(VAR_40, VAR_39, VAR_53, VAR_54);
 }

 case 134: {
  struct video_event *VAR_55 = VAR_38;
  FUNC_0(VAR_35);

  FUNC_2("VIDEO_GET_EVENT\n");
  if (!(VAR_40->v4l2_cap & VAR_21))
   return -VAR_7;
  FUNC_16(VAR_55, 0, sizeof(*VAR_55));
  FUNC_21(VAR_12, &VAR_40->i_flags);

  while (1) {
   if (FUNC_23(VAR_10, &VAR_40->i_flags))
    VAR_55->type = VAR_28;
   else if (FUNC_23(VAR_11, &VAR_40->i_flags)) {
    VAR_55->type = VAR_29;
    VAR_55->u.vsync_field = FUNC_24(VAR_13, &VAR_40->i_flags) ?
     VAR_32 : VAR_31;
    if (VAR_40->output_mode == VAR_17 &&
     (VAR_40->yuv_info.lace_mode & VAR_15) ==
        VAR_16) {
     VAR_55->u.vsync_field = VAR_33;
    }
   }
   if (VAR_55->type)
    return 0;
   if (VAR_41)
    return -VAR_4;



   FUNC_18(&VAR_40->serialize_lock);
   FUNC_19(&VAR_40->event_waitq, &VAR_35, VAR_19);
   if (!FUNC_24(VAR_10, &VAR_40->i_flags) &&
       !FUNC_24(VAR_11, &VAR_40->i_flags))
    FUNC_20();
   FUNC_6(&VAR_40->event_waitq, &VAR_35);
   FUNC_17(&VAR_40->serialize_lock);
   if (FUNC_22(VAR_34)) {

    FUNC_1("User stopped wait for event\n");
    return -VAR_6;
   }
  }
  break;
 }

 case 130:
  FUNC_2("VIDEO_SELECT_SOURCE\n");
  if (!(VAR_40->v4l2_cap & VAR_21))
   return -VAR_7;
  return FUNC_8(VAR_40, VAR_43 == VAR_30);

 case 139:
  FUNC_2("AUDIO_SET_MUTE\n");
  VAR_40->speed_mute_audio = VAR_43;
  return 0;

 case 140:
  FUNC_2("AUDIO_CHANNEL_SELECT\n");
  if (VAR_43 > VAR_0)
   return -VAR_7;
  VAR_40->audio_stereo_mode = VAR_43;
  FUNC_12(VAR_40, VAR_2, 2, VAR_40->audio_bilingual_mode, VAR_40->audio_stereo_mode);
  return 0;

 case 141:
  FUNC_2("AUDIO_BILINGUAL_CHANNEL_SELECT\n");
  if (VAR_43 > VAR_0)
   return -VAR_7;
  VAR_40->audio_bilingual_mode = VAR_43;
  FUNC_12(VAR_40, VAR_2, 2, VAR_40->audio_bilingual_mode, VAR_40->audio_stereo_mode);
  return 0;

 default:
  return -VAR_7;
 }
 return 0;
}
