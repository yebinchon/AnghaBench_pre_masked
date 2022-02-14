
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u32 ;
struct video_decoder_resolution {int width; int height; } ;
struct TYPE_7__ {int pixelformat; int width; int height; int colorspace; int sizeimage; scalar_t__ bytesperline; int field; } ;
struct TYPE_8__ {TYPE_3__ pix; } ;
struct v4l2_format {TYPE_4__ fmt; int type; } ;
struct go7007 {int standard; int width; int height; int encoder_v_halve; int encoder_h_halve; int encoder_subsample; int pali; int gop_size; int sensor_framerate; int closed_gop; int repeat_seqhead; int seq_header_enable; int gop_header_enable; int dvd_mode; int ipb; void* aspect_ratio; int format; int i2c_adapter; scalar_t__ i2c_adapter_online; TYPE_2__* board_info; scalar_t__* modet_map; TYPE_1__* modet; int encoder_v_offset; int encoder_h_offset; } ;
struct TYPE_6__ {int sensor_width; int sensor_height; int sensor_flags; int sensor_v_offset; int sensor_h_offset; } ;
struct TYPE_5__ {scalar_t__ enable; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 void* VAR_7 ;
 int VAR_8 ;



 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;



 int FUNC_0 (int *,int ,struct video_decoder_resolution*) ;
 int FUNC_1 (struct v4l2_format*,int ,int) ;

__attribute__((used)) static int FUNC_2(struct go7007 *VAR_12, struct v4l2_format *VAR_13, int VAR_14)
{
 int VAR_15 = 0, VAR_16 = 0;
 int VAR_17, VAR_18, VAR_19;

 if (VAR_13 != ((void*)0) && VAR_13->fmt.pix.pixelformat != 130 &&
   VAR_13->fmt.pix.pixelformat != 129 &&
   VAR_13->fmt.pix.pixelformat != 128)
  return -VAR_1;

 switch (VAR_12->standard) {
 case 133:
  VAR_16 = 720;
  VAR_15 = 480;
  break;
 case 131:
  VAR_16 = 720;
  VAR_15 = 576;
  break;
 case 132:
  VAR_16 = VAR_12->board_info->sensor_width;
  VAR_15 = VAR_12->board_info->sensor_height;
  break;
 }

 if (VAR_13 == ((void*)0)) {
  VAR_17 = VAR_16;
  VAR_18 = VAR_15;
 } else if (VAR_12->board_info->sensor_flags & VAR_8) {
  if (VAR_13->fmt.pix.width > VAR_16)
   VAR_17 = VAR_16;
  else if (VAR_13->fmt.pix.width < 144)
   VAR_17 = 144;
  else
   VAR_17 = VAR_13->fmt.pix.width & ~0x0f;

  if (VAR_13->fmt.pix.height > VAR_15)
   VAR_18 = VAR_15;
  else if (VAR_13->fmt.pix.height < 96)
   VAR_18 = 96;
  else
   VAR_18 = VAR_13->fmt.pix.height & ~0x0f;
 } else {
  int VAR_20 = VAR_13->fmt.pix.width * VAR_13->fmt.pix.height;
  int VAR_21 = VAR_16 * VAR_15;

  if (64 * VAR_20 < 9 * VAR_21) {
   VAR_17 = VAR_16 / 4;
   VAR_18 = VAR_15 / 4;
  } else if (64 * VAR_20 < 36 * VAR_21) {
   VAR_17 = VAR_16 / 2;
   VAR_18 = VAR_15 / 2;
  } else {
   VAR_17 = VAR_16;
   VAR_18 = VAR_15;
  }
  VAR_17 &= ~0xf;
  VAR_18 &= ~0xf;
 }

 if (VAR_13 != ((void*)0)) {
  u32 VAR_22 = VAR_13->fmt.pix.pixelformat;

  FUNC_1(VAR_13, 0, sizeof(*VAR_13));
  VAR_13->type = VAR_9;
  VAR_13->fmt.pix.width = VAR_17;
  VAR_13->fmt.pix.height = VAR_18;
  VAR_13->fmt.pix.pixelformat = VAR_22;
  VAR_13->fmt.pix.field = VAR_11;
  VAR_13->fmt.pix.bytesperline = 0;
  VAR_13->fmt.pix.sizeimage = VAR_2;
  VAR_13->fmt.pix.colorspace = VAR_10;
 }

 if (VAR_14)
  return 0;

 VAR_12->width = VAR_17;
 VAR_12->height = VAR_18;
 VAR_12->encoder_h_offset = VAR_12->board_info->sensor_h_offset;
 VAR_12->encoder_v_offset = VAR_12->board_info->sensor_v_offset;
 for (VAR_19 = 0; VAR_19 < 4; ++VAR_19)
  VAR_12->modet[VAR_19].enable = 0;
 for (VAR_19 = 0; VAR_19 < 1624; ++VAR_19)
  VAR_12->modet_map[VAR_19] = 0;

 if (VAR_12->board_info->sensor_flags & VAR_8) {
  struct video_decoder_resolution VAR_23;

  VAR_23.width = VAR_17;
  if (VAR_18 > VAR_15 / 2) {
   VAR_23.height = VAR_18 / 2;
   VAR_12->encoder_v_halve = 0;
  } else {
   VAR_23.height = VAR_18;
   VAR_12->encoder_v_halve = 1;
  }
  if (VAR_12->i2c_adapter_online)
   FUNC_0(&VAR_12->i2c_adapter,
     VAR_0, &VAR_23);
 } else {
  if (VAR_17 <= VAR_16 / 4) {
   VAR_12->encoder_h_halve = 1;
   VAR_12->encoder_v_halve = 1;
   VAR_12->encoder_subsample = 1;
  } else if (VAR_17 <= VAR_16 / 2) {
   VAR_12->encoder_h_halve = 1;
   VAR_12->encoder_v_halve = 1;
   VAR_12->encoder_subsample = 0;
  } else {
   VAR_12->encoder_h_halve = 0;
   VAR_12->encoder_v_halve = 0;
   VAR_12->encoder_subsample = 0;
  }
 }

 if (VAR_13 == ((void*)0))
  return 0;

 switch (VAR_13->fmt.pix.pixelformat) {
 case 129:
  if (VAR_12->format == VAR_4 ||
    VAR_12->format == VAR_5 ||
    VAR_12->format == VAR_6)
   break;
  VAR_12->format = VAR_4;
  VAR_12->pali = 0;
  VAR_12->aspect_ratio = VAR_7;
  VAR_12->gop_size = VAR_12->sensor_framerate / 1000;
  VAR_12->ipb = 0;
  VAR_12->closed_gop = 1;
  VAR_12->repeat_seqhead = 1;
  VAR_12->seq_header_enable = 1;
  VAR_12->gop_header_enable = 1;
  VAR_12->dvd_mode = 0;
  break;

 case 128:
  if (VAR_12->format == VAR_6)
   break;
  VAR_12->format = VAR_6;
  VAR_12->pali = 0xf5;
  VAR_12->aspect_ratio = VAR_7;
  VAR_12->gop_size = VAR_12->sensor_framerate / 1000;
  VAR_12->ipb = 0;
  VAR_12->closed_gop = 1;
  VAR_12->repeat_seqhead = 1;
  VAR_12->seq_header_enable = 1;
  VAR_12->gop_header_enable = 1;
  VAR_12->dvd_mode = 0;
  break;
 case 130:
  VAR_12->format = VAR_3;
  VAR_12->pali = 0;
  VAR_12->aspect_ratio = VAR_7;
  VAR_12->gop_size = 0;
  VAR_12->ipb = 0;
  VAR_12->closed_gop = 0;
  VAR_12->repeat_seqhead = 0;
  VAR_12->seq_header_enable = 0;
  VAR_12->gop_header_enable = 0;
  VAR_12->dvd_mode = 0;
  break;
 }
 return 0;
}
