
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct cx2341x_mpeg_params {int video_temporal_filter; int port; int width; int height; scalar_t__ video_encoding; size_t stream_type; int video_aspect; int video_gop_size; int video_b_frames; int video_bitrate_peak; int video_spatial_filter_mode; int video_temporal_filter_mode; int video_median_filter_type; int video_luma_spatial_filter_type; int video_chroma_spatial_filter_type; int video_spatial_filter; int video_mute; int video_mute_yuv; int stream_insert_nav_packets; int video_temporal_decimation; int video_chroma_median_filter_top; int video_chroma_median_filter_bottom; int video_luma_median_filter_top; int video_luma_median_filter_bottom; int video_bitrate; int video_bitrate_mode; int audio_mute; int audio_properties; int video_gop_closure; int is_50hz; } ;
typedef int cx2341x_mbox_func ;


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
 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int FUNC_1 (void*,int ,int ,int,int,...) ;
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

int FUNC_2(void *VAR_46, cx2341x_mbox_func VAR_47,
     const struct cx2341x_mpeg_params *VAR_48,
     const struct cx2341x_mpeg_params *VAR_49)
{
 static int VAR_50[] = {
  0,
  1,
  2,
  14,
  11,
  12,
 };

 int VAR_51 = 0;
 int VAR_52 = (VAR_48 == ((void*)0));
 u16 VAR_53 = VAR_49->video_temporal_filter;

 FUNC_1(VAR_46, VAR_47, VAR_14, 2, VAR_49->port, 0);

 if (VAR_52 || FUNC_0(VAR_21)) {
  VAR_51 = FUNC_1(VAR_46, VAR_47, VAR_10, 1,
      VAR_49->is_50hz);
  if (VAR_51) return VAR_51;
 }

 if (VAR_52 || FUNC_0(VAR_45) || FUNC_0(VAR_20) || FUNC_0(VAR_32)) {
  u16 VAR_54 = VAR_49->width;
  u16 VAR_55 = VAR_49->height;

  if (VAR_49->video_encoding == VAR_17) {
   VAR_54 /= 2;
   VAR_55 /= 2;
  }
  VAR_51 = FUNC_1(VAR_46, VAR_47, VAR_11, 2,
      VAR_55, VAR_54);
  if (VAR_51) return VAR_51;
 }
 if (VAR_52 || FUNC_0(VAR_23)) {
  VAR_51 = FUNC_1(VAR_46, VAR_47, VAR_16, 1,
      VAR_50[VAR_49->stream_type]);
  if (VAR_51) return VAR_51;
 }
 if (VAR_52 || FUNC_0(VAR_24)) {
  VAR_51 = FUNC_1(VAR_46, VAR_47, VAR_3, 1,
      1 + VAR_49->video_aspect);
  if (VAR_51) return VAR_51;
 }
 if (VAR_52 || FUNC_0(VAR_25) || FUNC_0(VAR_34)) {
  VAR_51 = FUNC_1(VAR_46, VAR_47, VAR_13, 2,
    VAR_49->video_gop_size, VAR_49->video_b_frames + 1);
  if (VAR_51) return VAR_51;
 }
 if (VAR_52 || FUNC_0(VAR_33)) {
  VAR_51 = FUNC_1(VAR_46, VAR_47, VAR_12, 1,
      VAR_49->video_gop_closure);
  if (VAR_51) return VAR_51;
 }
 if (VAR_52 || FUNC_0(VAR_19)) {
  VAR_51 = FUNC_1(VAR_46, VAR_47, VAR_4,
      1, VAR_49->audio_properties);
  if (VAR_51) return VAR_51;
 }
 if (VAR_52 || FUNC_0(VAR_18)) {
  VAR_51 = FUNC_1(VAR_46, VAR_47, VAR_1, 1,
      VAR_49->audio_mute);
  if (VAR_51) return VAR_51;
 }
 if (VAR_52 || FUNC_0(VAR_27) || FUNC_0(VAR_26) ||
      FUNC_0(VAR_28)) {
  VAR_51 = FUNC_1(VAR_46, VAR_47, VAR_5, 5,
    VAR_49->video_bitrate_mode, VAR_49->video_bitrate,
    VAR_49->video_bitrate_peak / 400, 0, 0);
  if (VAR_51) return VAR_51;
 }
 if (VAR_52 || FUNC_0(VAR_42) ||
       FUNC_0(VAR_44) ||
       FUNC_0(VAR_38)) {
  VAR_51 = FUNC_1(VAR_46, VAR_47, VAR_7,
      2, VAR_49->video_spatial_filter_mode |
     (VAR_49->video_temporal_filter_mode << 1),
    VAR_49->video_median_filter_type);
  if (VAR_51) return VAR_51;
 }
 if (VAR_52 || FUNC_0(VAR_35) ||
       FUNC_0(VAR_36) ||
       FUNC_0(VAR_29) ||
       FUNC_0(VAR_30)) {
  VAR_51 = FUNC_1(VAR_46, VAR_47, VAR_6, 4,
    VAR_49->video_luma_median_filter_bottom,
    VAR_49->video_luma_median_filter_top,
    VAR_49->video_chroma_median_filter_bottom,
    VAR_49->video_chroma_median_filter_top);
  if (VAR_51) return VAR_51;
 }
 if (VAR_52 || FUNC_0(VAR_37) ||
       FUNC_0(VAR_31)) {
  VAR_51 = FUNC_1(VAR_46, VAR_47,
      VAR_15,
      2, VAR_49->video_luma_spatial_filter_type,
      VAR_49->video_chroma_spatial_filter_type);
  if (VAR_51) return VAR_51;
 }
 if (VAR_52 || FUNC_0(VAR_41) ||
       VAR_48->video_temporal_filter != VAR_53) {
  VAR_51 = FUNC_1(VAR_46, VAR_47, VAR_8,
      2, VAR_49->video_spatial_filter, VAR_53);
  if (VAR_51) return VAR_51;
 }
 if (VAR_52 || FUNC_0(VAR_43)) {
  VAR_51 = FUNC_1(VAR_46, VAR_47, VAR_9,
      1, VAR_49->video_temporal_decimation);
  if (VAR_51) return VAR_51;
 }
 if (VAR_52 || FUNC_0(VAR_39) ||
  (VAR_49->video_mute && FUNC_0(VAR_40))) {
  VAR_51 = FUNC_1(VAR_46, VAR_47, VAR_2, 1,
    VAR_49->video_mute | (VAR_49->video_mute_yuv << 8));
  if (VAR_51) return VAR_51;
 }
 if (VAR_52 || FUNC_0(VAR_22)) {
  VAR_51 = FUNC_1(VAR_46, VAR_47, VAR_0, 2,
    7, VAR_49->stream_insert_nav_packets);
  if (VAR_51) return VAR_51;
 }
 return 0;
}
