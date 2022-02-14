
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_28__ TYPE_9__ ;
typedef struct TYPE_27__ TYPE_8__ ;
typedef struct TYPE_26__ TYPE_7__ ;
typedef struct TYPE_25__ TYPE_6__ ;
typedef struct TYPE_24__ TYPE_5__ ;
typedef struct TYPE_23__ TYPE_4__ ;
typedef struct TYPE_22__ TYPE_3__ ;
typedef struct TYPE_21__ TYPE_2__ ;
typedef struct TYPE_20__ TYPE_1__ ;
typedef struct TYPE_19__ TYPE_14__ ;
typedef struct TYPE_18__ TYPE_13__ ;
typedef struct TYPE_17__ TYPE_12__ ;
typedef struct TYPE_16__ TYPE_11__ ;
typedef struct TYPE_15__ TYPE_10__ ;


typedef int u32 ;
struct v4l2_ctrl {size_t val; int id; } ;
struct cx2341x_handler {int audio_properties; TYPE_13__* video_chroma_median_filter_top; TYPE_13__* video_chroma_median_filter_bottom; TYPE_13__* video_luma_median_filter_top; TYPE_13__* video_luma_median_filter_bottom; TYPE_13__* video_temporal_filter; TYPE_13__* video_spatial_filter; TYPE_13__* video_chroma_spatial_filter_type; TYPE_13__* video_luma_spatial_filter_type; TYPE_5__* video_median_filter_type; TYPE_4__* video_temporal_filter_mode; TYPE_3__* video_spatial_filter_mode; TYPE_2__* video_mute_yuv; TYPE_1__* video_mute; TYPE_14__* video_encoding; TYPE_9__* ops; TYPE_13__* video_bitrate_mode; TYPE_13__* video_bitrate_peak; TYPE_12__* video_bitrate; TYPE_11__* video_b_frames; TYPE_10__* video_gop_size; TYPE_14__* audio_mode; TYPE_14__* audio_sampling_freq; TYPE_13__* audio_mode_extension; TYPE_13__* audio_l2_bitrate; TYPE_13__* audio_ac3_bitrate; TYPE_8__* audio_encoding; TYPE_7__* audio_emphasis; TYPE_6__* audio_crc; } ;
typedef size_t s32 ;
struct TYPE_28__ {int (* s_stream_vbi_fmt ) (struct cx2341x_handler*,size_t) ;int (* s_audio_sampling_freq ) (struct cx2341x_handler*,int) ;int (* s_audio_mode ) (struct cx2341x_handler*,int) ;int (* s_video_encoding ) (struct cx2341x_handler*,int) ;} ;
struct TYPE_27__ {int val; } ;
struct TYPE_26__ {int val; } ;
struct TYPE_25__ {int val; } ;
struct TYPE_24__ {int val; } ;
struct TYPE_23__ {int val; } ;
struct TYPE_22__ {int val; } ;
struct TYPE_21__ {int val; } ;
struct TYPE_20__ {int val; } ;
struct TYPE_19__ {int val; } ;
struct TYPE_18__ {int val; } ;
struct TYPE_17__ {int val; } ;
struct TYPE_16__ {int val; } ;
struct TYPE_15__ {int val; } ;


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
 int FUNC_0 (struct cx2341x_handler*,int ,int,int const,...) ;
 int FUNC_1 (TYPE_14__*) ;
 int FUNC_2 (struct cx2341x_handler*,size_t) ;
 int FUNC_3 (struct cx2341x_handler*,int) ;
 int FUNC_4 (struct cx2341x_handler*,int) ;
 int FUNC_5 (struct cx2341x_handler*,int) ;
 struct cx2341x_handler* FUNC_6 (struct v4l2_ctrl*) ;
 int FUNC_7 (TYPE_13__*,int) ;

__attribute__((used)) static int FUNC_8(struct v4l2_ctrl *VAR_25)
{
 static const int VAR_26[] = {
  0,
  1,
  2,
  14,
  11,
  12,
 };
 struct cx2341x_handler *VAR_27 = FUNC_6(VAR_25);
 s32 VAR_28 = VAR_25->val;
 u32 VAR_29;
 int VAR_30;

 switch (VAR_25->id) {
 case 133:
  if (VAR_27->ops && VAR_27->ops->s_stream_vbi_fmt)
   return VAR_27->ops->s_stream_vbi_fmt(VAR_27, VAR_28);
  return 0;

 case 132:
  return FUNC_0(VAR_27,
   VAR_4, 1, VAR_28 + 1);

 case 130:
  return FUNC_0(VAR_27, VAR_11, 1, VAR_28);

 case 141:
  return FUNC_0(VAR_27, VAR_2, 1, VAR_28);

 case 128:
  return FUNC_0(VAR_27,
   VAR_10, 1, VAR_28);

 case 139:
  return FUNC_0(VAR_27, VAR_1, 2, 7, VAR_28);

 case 140:

  VAR_29 = (VAR_27->audio_sampling_freq->val << 0) |
   (VAR_27->audio_mode->val << 8) |
   (VAR_27->audio_mode_extension->val << 10) |
   (VAR_27->audio_crc->val << 14);
  if (VAR_27->audio_emphasis->val == VAR_16)
   VAR_29 |= 3 << 12;
  else
   VAR_29 |= VAR_27->audio_emphasis->val << 12;

  if (VAR_27->audio_encoding->val == VAR_17) {
   VAR_29 |=


    ((3 - VAR_18) << 2) |

    (VAR_27->audio_ac3_bitrate->val << 4) |
    (VAR_0 << 28);
  } else {

   VAR_29 |=
    ((3 - VAR_27->audio_encoding->val) << 2) |
    ((1 + VAR_27->audio_l2_bitrate->val) << 4);
  }
  VAR_30 = FUNC_0(VAR_27,
    VAR_5, 1, VAR_29);
  if (VAR_30)
   return VAR_30;

  VAR_27->audio_properties = VAR_29;
  if (VAR_27->audio_ac3_bitrate) {
   int VAR_31 = VAR_27->audio_encoding->val ==
      VAR_17;

   FUNC_7(VAR_27->audio_ac3_bitrate, VAR_31);
   FUNC_7(VAR_27->audio_l2_bitrate, !VAR_31);
  }
  FUNC_7(VAR_27->audio_mode_extension,
   VAR_27->audio_mode->val == VAR_19);
  if (FUNC_1(VAR_27->audio_sampling_freq) &&
      VAR_27->ops && VAR_27->ops->s_audio_sampling_freq)
   return VAR_27->ops->s_audio_sampling_freq(VAR_27, VAR_27->audio_sampling_freq->val);
  if (FUNC_1(VAR_27->audio_mode) &&
      VAR_27->ops && VAR_27->ops->s_audio_mode)
   return VAR_27->ops->s_audio_mode(VAR_27, VAR_27->audio_mode->val);
  return 0;

 case 131:

  return FUNC_0(VAR_27, VAR_12, 2,
    VAR_27->video_gop_size->val,
    VAR_27->video_b_frames->val + 1);

 case 134:

  VAR_30 = FUNC_0(VAR_27,
   VAR_14, 1, VAR_26[VAR_28]);
  if (VAR_30)
   return VAR_30;

  VAR_30 = FUNC_0(VAR_27, VAR_6, 5,
    VAR_27->video_bitrate_mode->val,
    VAR_27->video_bitrate->val,
    VAR_27->video_bitrate_peak->val / 400, 0, 0);
  if (VAR_30)
   return VAR_30;

  FUNC_7(VAR_27->video_bitrate_mode,
   VAR_27->video_encoding->val != VAR_24);
  FUNC_7(VAR_27->video_bitrate_peak,
   VAR_27->video_bitrate_mode->val != VAR_23);
  if (FUNC_1(VAR_27->video_encoding) &&
      VAR_27->ops && VAR_27->ops->s_video_encoding)
   return VAR_27->ops->s_video_encoding(VAR_27, VAR_27->video_encoding->val);
  return 0;

 case 129:

  return FUNC_0(VAR_27, VAR_3, 1,
    VAR_27->video_mute->val |
     (VAR_27->video_mute_yuv->val << 8));

 case 135: {
  int VAR_32;


  VAR_30 = FUNC_0(VAR_27, VAR_8, 2,
    VAR_27->video_spatial_filter_mode->val |
     (VAR_27->video_temporal_filter_mode->val << 1),
    VAR_27->video_median_filter_type->val);
  if (VAR_30)
   return VAR_30;

  VAR_32 = VAR_27->video_spatial_filter_mode->val !=
    VAR_21;
  FUNC_7(VAR_27->video_spatial_filter, VAR_32);
  FUNC_7(VAR_27->video_luma_spatial_filter_type, VAR_32);
  FUNC_7(VAR_27->video_chroma_spatial_filter_type, VAR_32);
  VAR_32 = VAR_27->video_temporal_filter_mode->val !=
    VAR_22;
  FUNC_7(VAR_27->video_temporal_filter, VAR_32);
  VAR_32 = VAR_27->video_median_filter_type->val !=
    VAR_20;
  FUNC_7(VAR_27->video_luma_median_filter_bottom, VAR_32);
  FUNC_7(VAR_27->video_luma_median_filter_top, VAR_32);
  FUNC_7(VAR_27->video_chroma_median_filter_bottom, VAR_32);
  FUNC_7(VAR_27->video_chroma_median_filter_top, VAR_32);
  return 0;
 }

 case 137:

  return FUNC_0(VAR_27,
    VAR_13, 2,
    VAR_27->video_luma_spatial_filter_type->val,
    VAR_27->video_chroma_spatial_filter_type->val);

 case 136:

  return FUNC_0(VAR_27, VAR_9, 2,
    VAR_27->video_spatial_filter->val,
    VAR_27->video_temporal_filter->val);

 case 138:

  return FUNC_0(VAR_27, VAR_7, 4,
    VAR_27->video_luma_median_filter_bottom->val,
    VAR_27->video_luma_median_filter_top->val,
    VAR_27->video_chroma_median_filter_bottom->val,
    VAR_27->video_chroma_median_filter_top->val);
 }
 return -VAR_15;
}
