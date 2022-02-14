
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v4l2_ext_control {int id; int value; } ;
struct cx2341x_mpeg_params {int audio_sampling_freq; int capabilities; int audio_encoding; int audio_l2_bitrate; int audio_ac3_bitrate; int audio_mode; int audio_mode_extension; int audio_emphasis; int audio_crc; int audio_mute; int video_aspect; int video_gop_size; int video_b_frames; int video_gop_closure; int video_bitrate_mode; int video_bitrate; int video_bitrate_peak; int video_temporal_decimation; int video_mute; int video_mute_yuv; int stream_type; int stream_vbi_fmt; int video_spatial_filter_mode; int video_spatial_filter; int video_luma_spatial_filter_type; int video_chroma_spatial_filter_type; int video_temporal_filter_mode; int video_temporal_filter; int video_median_filter_type; int video_luma_median_filter_top; int video_luma_median_filter_bottom; int video_chroma_median_filter_top; int video_chroma_median_filter_bottom; int stream_insert_nav_packets; int video_encoding; } ;


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

__attribute__((used)) static int FUNC_0(struct cx2341x_mpeg_params *VAR_11, int VAR_12,
  struct v4l2_ext_control *VAR_13)
{
 switch (VAR_13->id) {
 case 152:
  if (VAR_12)
   return -VAR_1;
  VAR_11->audio_sampling_freq = VAR_13->value;
  break;
 case 157:
  if (VAR_12)
   return -VAR_1;
  if (VAR_11->capabilities & VAR_0)
   if (VAR_13->value != VAR_5 &&
       VAR_13->value != VAR_4)
    return -VAR_3;
  VAR_11->audio_encoding = VAR_13->value;
  break;
 case 156:
  if (VAR_12)
   return -VAR_1;
  VAR_11->audio_l2_bitrate = VAR_13->value;
  break;
 case 160:
  if (VAR_12)
   return -VAR_1;
  if (!(VAR_11->capabilities & VAR_0))
   return -VAR_2;
  VAR_11->audio_ac3_bitrate = VAR_13->value;
  break;
 case 155:
  VAR_11->audio_mode = VAR_13->value;
  break;
 case 154:
  VAR_11->audio_mode_extension = VAR_13->value;
  break;
 case 158:
  VAR_11->audio_emphasis = VAR_13->value;
  break;
 case 159:
  VAR_11->audio_crc = VAR_13->value;
  break;
 case 153:
  VAR_11->audio_mute = VAR_13->value;
  break;
 case 137:
  VAR_11->video_aspect = VAR_13->value;
  break;
 case 133: {
  int VAR_14 = VAR_13->value + 1;
  int VAR_15 = VAR_11->video_gop_size;
  VAR_11->video_b_frames = VAR_13->value;
  VAR_11->video_gop_size = VAR_14 * ((VAR_15 + VAR_14 - 1) / VAR_14);

  while (VAR_11->video_gop_size > 34)
   VAR_11->video_gop_size -= VAR_14;
  break;
 }
 case 131: {
  int VAR_16 = VAR_11->video_b_frames + 1;
  int VAR_17 = VAR_13->value;
  VAR_11->video_gop_size = VAR_16 * ((VAR_17 + VAR_16 - 1) / VAR_16);

  while (VAR_11->video_gop_size > 34)
   VAR_11->video_gop_size -= VAR_16;
  VAR_13->value = VAR_11->video_gop_size;
  break;
 }
 case 132:
  VAR_11->video_gop_closure = VAR_13->value;
  break;
 case 135:
  if (VAR_12)
   return -VAR_1;

  if (VAR_11->video_encoding == VAR_9 &&
      VAR_13->value != VAR_8)
   return -VAR_2;
  VAR_11->video_bitrate_mode = VAR_13->value;
  break;
 case 136:
  if (VAR_12)
   return -VAR_1;
  VAR_11->video_bitrate = VAR_13->value;
  break;
 case 134:
  if (VAR_12)
   return -VAR_1;
  VAR_11->video_bitrate_peak = VAR_13->value;
  break;
 case 128:
  VAR_11->video_temporal_decimation = VAR_13->value;
  break;
 case 130:
  VAR_11->video_mute = (VAR_13->value != 0);
  break;
 case 129:
  VAR_11->video_mute_yuv = VAR_13->value;
  break;
 case 139:
  if (VAR_12)
   return -VAR_1;
  VAR_11->stream_type = VAR_13->value;
  VAR_11->video_encoding =
      (VAR_11->stream_type == VAR_6 ||
       VAR_11->stream_type == VAR_7) ?
   VAR_9 :
   VAR_10;
  if (VAR_11->video_encoding == VAR_9)

   VAR_11->video_bitrate_mode =
    VAR_8;
  break;
 case 138:
  VAR_11->stream_vbi_fmt = VAR_13->value;
  break;
 case 142:
  VAR_11->video_spatial_filter_mode = VAR_13->value;
  break;
 case 143:
  VAR_11->video_spatial_filter = VAR_13->value;
  break;
 case 145:
  VAR_11->video_luma_spatial_filter_type = VAR_13->value;
  break;
 case 148:
  VAR_11->video_chroma_spatial_filter_type = VAR_13->value;
  break;
 case 140:
  VAR_11->video_temporal_filter_mode = VAR_13->value;
  break;
 case 141:
  VAR_11->video_temporal_filter = VAR_13->value;
  break;
 case 144:
  VAR_11->video_median_filter_type = VAR_13->value;
  break;
 case 146:
  VAR_11->video_luma_median_filter_top = VAR_13->value;
  break;
 case 147:
  VAR_11->video_luma_median_filter_bottom = VAR_13->value;
  break;
 case 149:
  VAR_11->video_chroma_median_filter_top = VAR_13->value;
  break;
 case 150:
  VAR_11->video_chroma_median_filter_bottom = VAR_13->value;
  break;
 case 151:
  VAR_11->stream_insert_nav_packets = VAR_13->value;
  break;
 default:
  return -VAR_2;
 }
 return 0;
}
