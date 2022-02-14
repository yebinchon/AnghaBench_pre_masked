
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct go7007_board_info {int sensor_flags; int sensor_width; int sensor_height; int sensor_framerate; int sensor_h_offset; int sensor_v_offset; } ;
struct go7007 {int tuner_type; int width; int height; int sensor_framerate; int bitrate; int fps_scale; int stream; scalar_t__ audio_enabled; int * audio_deliver; scalar_t__* modet_map; TYPE_1__* modet; scalar_t__ interlace_coding; scalar_t__ dvd_mode; scalar_t__ gop_header_enable; scalar_t__ seq_header_enable; scalar_t__ repeat_seqhead; scalar_t__ closed_gop; scalar_t__ ipb; scalar_t__ gop_size; int aspect_ratio; scalar_t__ pali; int format; scalar_t__ streaming; scalar_t__ encoder_subsample; scalar_t__ encoder_v_halve; scalar_t__ encoder_h_halve; int encoder_h_offset; int encoder_v_offset; int standard; scalar_t__ input; scalar_t__ in_use; int interrupt_waitq; scalar_t__ interrupt_available; scalar_t__ i2c_adapter_online; int i2c_adapter; int status; scalar_t__ ref_count; int * video_dev; int spinlock; int frame_waitq; int hw_lock; scalar_t__* name; scalar_t__ channel_number; scalar_t__ board_id; struct go7007_board_info* board_info; struct device* dev; } ;
struct device {int dummy; } ;
struct TYPE_2__ {scalar_t__ enable; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int *) ;
 int VAR_6 ;
 int FUNC_1 (int *) ;
 struct go7007* FUNC_2 (int,int ) ;
 int FUNC_3 (int *,int ,int) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

struct go7007 *FUNC_6(struct go7007_board_info *VAR_7, struct device *VAR_8)
{
 struct go7007 *VAR_9;
 int VAR_10;

 VAR_9 = FUNC_2(sizeof(struct go7007), VAR_0);
 if (VAR_9 == ((void*)0))
  return ((void*)0);
 VAR_9->dev = VAR_8;
 VAR_9->board_info = VAR_7;
 VAR_9->board_id = 0;
 VAR_9->tuner_type = -1;
 VAR_9->channel_number = 0;
 VAR_9->name[0] = 0;
 FUNC_4(&VAR_9->hw_lock);
 FUNC_1(&VAR_9->frame_waitq);
 FUNC_5(&VAR_9->spinlock);
 VAR_9->video_dev = ((void*)0);
 VAR_9->ref_count = 0;
 VAR_9->status = VAR_6;
 FUNC_3(&VAR_9->i2c_adapter, 0, sizeof(VAR_9->i2c_adapter));
 VAR_9->i2c_adapter_online = 0;
 VAR_9->interrupt_available = 0;
 FUNC_1(&VAR_9->interrupt_waitq);
 VAR_9->in_use = 0;
 VAR_9->input = 0;
 if (VAR_7->sensor_flags & VAR_3) {
  VAR_9->standard = VAR_4;
  VAR_9->width = 720;
  VAR_9->height = 480;
  VAR_9->sensor_framerate = 30000;
 } else {
  VAR_9->standard = VAR_5;
  VAR_9->width = VAR_7->sensor_width;
  VAR_9->height = VAR_7->sensor_height;
  VAR_9->sensor_framerate = VAR_7->sensor_framerate;
 }
 VAR_9->encoder_v_offset = VAR_7->sensor_v_offset;
 VAR_9->encoder_h_offset = VAR_7->sensor_h_offset;
 VAR_9->encoder_h_halve = 0;
 VAR_9->encoder_v_halve = 0;
 VAR_9->encoder_subsample = 0;
 VAR_9->streaming = 0;
 VAR_9->format = VAR_1;
 VAR_9->bitrate = 1500000;
 VAR_9->fps_scale = 1;
 VAR_9->pali = 0;
 VAR_9->aspect_ratio = VAR_2;
 VAR_9->gop_size = 0;
 VAR_9->ipb = 0;
 VAR_9->closed_gop = 0;
 VAR_9->repeat_seqhead = 0;
 VAR_9->seq_header_enable = 0;
 VAR_9->gop_header_enable = 0;
 VAR_9->dvd_mode = 0;
 VAR_9->interlace_coding = 0;
 for (VAR_10 = 0; VAR_10 < 4; ++VAR_10)
  VAR_9->modet[VAR_10].enable = 0;;
 for (VAR_10 = 0; VAR_10 < 1624; ++VAR_10)
  VAR_9->modet_map[VAR_10] = 0;
 VAR_9->audio_deliver = ((void*)0);
 VAR_9->audio_enabled = 0;
 FUNC_0(&VAR_9->stream);

 return VAR_9;
}
