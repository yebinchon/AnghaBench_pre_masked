
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct v4l2_ctrl_handler {int error; } ;
struct cx2341x_handler {int capabilities; int width; int height; void* video_luma_median_filter_top; void* video_spatial_filter; void* video_luma_spatial_filter_type; void* video_spatial_filter_mode; void* video_mute; void* stream_type; void* video_b_frames; void* audio_sampling_freq; void* video_chroma_median_filter_top; void* video_chroma_median_filter_bottom; void* video_luma_median_filter_bottom; void* video_median_filter_type; void* video_temporal_filter; void* video_temporal_filter_mode; void* video_chroma_spatial_filter_type; void* video_mute_yuv; void* video_bitrate_peak; void* video_bitrate; void* video_bitrate_mode; scalar_t__ is_50hz; void* video_gop_size; void* video_encoding; void* audio_ac3_bitrate; void* audio_crc; void* audio_emphasis; void* audio_mode_extension; void* audio_mode; void* audio_l2_bitrate; void* audio_encoding; void* stream_vbi_fmt; struct v4l2_ctrl_handler hdl; } ;


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
 int VAR_25 ;
 int VAR_26 ;
 int VAR_27 ;
 int VAR_28 ;
 int VAR_29 ;
 int VAR_30 ;
 int VAR_31 ;
 int VAR_32 ;
 int VAR_33 ;
 int VAR_34 ;
 int VAR_35 ;
 int VAR_36 ;
 int VAR_37 ;
 int VAR_38 ;
 int VAR_39 ;
 int VAR_40 ;
 int VAR_41 ;
 int VAR_42 ;
 int VAR_43 ;
 int VAR_44 ;
 int VAR_45 ;
 int VAR_46 ;
 int VAR_47 ;
 int VAR_48 ;
 int VAR_49 ;
 int VAR_50 ;
 int VAR_51 ;
 int VAR_52 ;
 int VAR_53 ;
 int VAR_54 ;
 int VAR_55 ;
 int VAR_56 ;
 int VAR_57 ;
 int VAR_58 ;
 int VAR_59 ;
 int VAR_60 ;
 int VAR_61 ;
 int VAR_62 ;
 int VAR_63 ;
 int VAR_64 ;
 int VAR_65 ;
 int VAR_66 ;
 int VAR_67 ;
 int VAR_68 ;
 int VAR_69 ;
 int VAR_70 ;
 int VAR_71 ;
 int VAR_72 ;
 void* FUNC_0 (struct v4l2_ctrl_handler*,int ,int,int,int,int) ;
 void* FUNC_1 (struct v4l2_ctrl_handler*,int ,int ,int,int ) ;
 void* FUNC_2 (struct v4l2_ctrl_handler*,int ,int,int,int,int) ;
 int FUNC_3 (int,void**) ;
 int FUNC_4 (struct v4l2_ctrl_handler*) ;
 int FUNC_5 (struct v4l2_ctrl_handler*,unsigned int) ;

int FUNC_6(struct cx2341x_handler *VAR_73,
    unsigned VAR_74)
{
 struct v4l2_ctrl_handler *VAR_75 = &VAR_73->hdl;
 u32 VAR_76 = VAR_73->capabilities;
 int VAR_77 = VAR_76 & VAR_1;
 int VAR_78 = VAR_76 & VAR_0;
 int VAR_79 = VAR_76 & VAR_2;

 VAR_73->width = 720;
 VAR_73->height = 480;

 FUNC_5(VAR_75, VAR_74);



 VAR_73->stream_type = FUNC_1(VAR_75,
   VAR_24,
   VAR_65, VAR_79 ? 0 : 2,
   VAR_64);
 VAR_73->stream_vbi_fmt = FUNC_1(VAR_75,
   VAR_25,
   VAR_66, VAR_77 ? 0 : 2,
   VAR_67);
 VAR_73->audio_sampling_freq = FUNC_1(VAR_75,
   VAR_11,
   VAR_51, 0,
   VAR_52);
 VAR_73->audio_encoding = FUNC_1(VAR_75,
   VAR_6,
   VAR_43, VAR_78 ? ~0x12 : ~0x2,
   VAR_44);
 VAR_73->audio_l2_bitrate = FUNC_1(VAR_75,
   VAR_7,
   VAR_46, 0x1ff,
   VAR_45);
 VAR_73->audio_mode = FUNC_1(VAR_75,
   VAR_8,
   VAR_49, 0,
   VAR_50);
 VAR_73->audio_mode_extension = FUNC_1(VAR_75,
   VAR_9,
   VAR_47, 0,
   VAR_48);
 VAR_73->audio_emphasis = FUNC_1(VAR_75,
   VAR_5,
   VAR_41, 0,
   VAR_42);
 VAR_73->audio_crc = FUNC_1(VAR_75,
   VAR_4,
   VAR_39, 0,
   VAR_40);

 FUNC_2(VAR_75, VAR_10, 0, 1, 1, 0);
 if (VAR_78)
  VAR_73->audio_ac3_bitrate = FUNC_1(VAR_75,
    VAR_3,
    VAR_38, 0x03,
    VAR_37);
 VAR_73->video_encoding = FUNC_1(VAR_75,
   VAR_31,
   VAR_72, 0,
   VAR_72);
 FUNC_1(VAR_75,
   VAR_26,
   VAR_68, 0,
   VAR_69);
 VAR_73->video_b_frames = FUNC_2(VAR_75,
   VAR_30, 0, 33, 1, 2);
 VAR_73->video_gop_size = FUNC_2(VAR_75,
   VAR_33,
   1, 34, 1, VAR_73->is_50hz ? 12 : 15);
 FUNC_2(VAR_75, VAR_32, 0, 1, 1, 1);
 VAR_73->video_bitrate_mode = FUNC_1(VAR_75,
   VAR_28,
   VAR_70, 0,
   VAR_71);
 VAR_73->video_bitrate = FUNC_2(VAR_75,
   VAR_27,
   0, 27000000, 1, 6000000);
 VAR_73->video_bitrate_peak = FUNC_2(VAR_75,
   VAR_29,
   0, 27000000, 1, 8000000);
 FUNC_2(VAR_75,
   VAR_36, 0, 255, 1, 0);
 VAR_73->video_mute = FUNC_2(VAR_75,
   VAR_34, 0, 1, 1, 0);
 VAR_73->video_mute_yuv = FUNC_2(VAR_75,
   VAR_35, 0, 0xffffff, 1, 0x008080);


 VAR_73->video_spatial_filter_mode = FUNC_0(VAR_75,
   VAR_21,
   VAR_61,
   VAR_60, 0,
   VAR_61);
 VAR_73->video_spatial_filter = FUNC_0(VAR_75,
   VAR_20,
   0, 15, 1, 0);
 VAR_73->video_luma_spatial_filter_type = FUNC_0(VAR_75,
   VAR_18,
   VAR_57,
   VAR_56,
   0,
   VAR_55);
 VAR_73->video_chroma_spatial_filter_type = FUNC_0(VAR_75,
   VAR_15,
   VAR_54,
   VAR_53,
   0,
   VAR_53);
 VAR_73->video_temporal_filter_mode = FUNC_0(VAR_75,
   VAR_23,
   VAR_63,
   VAR_62,
   0,
   VAR_63);
 VAR_73->video_temporal_filter = FUNC_0(VAR_75,
   VAR_22,
   0, 31, 1, 8);
 VAR_73->video_median_filter_type = FUNC_0(VAR_75,
   VAR_19,
   VAR_59,
   VAR_58,
   0,
   VAR_59);
 VAR_73->video_luma_median_filter_bottom = FUNC_0(VAR_75,
   VAR_16,
   0, 255, 1, 0);
 VAR_73->video_luma_median_filter_top = FUNC_0(VAR_75,
   VAR_17,
   0, 255, 1, 255);
 VAR_73->video_chroma_median_filter_bottom = FUNC_0(VAR_75,
   VAR_13,
   0, 255, 1, 0);
 VAR_73->video_chroma_median_filter_top = FUNC_0(VAR_75,
   VAR_14,
   0, 255, 1, 255);
 FUNC_0(VAR_75, VAR_12,
   0, 1, 1, 0);

 if (VAR_75->error) {
  int VAR_80 = VAR_75->error;

  FUNC_4(VAR_75);
  return VAR_80;
 }

 FUNC_3(8, &VAR_73->audio_sampling_freq);
 FUNC_3(2, &VAR_73->video_b_frames);
 FUNC_3(5, &VAR_73->stream_type);
 FUNC_3(2, &VAR_73->video_mute);
 FUNC_3(3, &VAR_73->video_spatial_filter_mode);
 FUNC_3(2, &VAR_73->video_luma_spatial_filter_type);
 FUNC_3(2, &VAR_73->video_spatial_filter);
 FUNC_3(4, &VAR_73->video_luma_median_filter_top);

 return 0;
}
