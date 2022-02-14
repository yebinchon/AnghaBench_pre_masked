
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct v4l2_input {char* name; } ;
struct v4l2_audio {char* name; } ;
struct tveeprom {int dummy; } ;
struct file {int dummy; } ;
struct TYPE_4__ {int depth; } ;
struct cx18_stream {int buffers; int bufs_per_mdl; int buf_size; TYPE_2__ q_full; int s_flags; int name; int * video_dev; } ;
struct cx18_open_id {struct cx18* cx; } ;
struct TYPE_3__ {int name; } ;
struct cx18 {char* instance; int hw_flags; char* i_flags; scalar_t__ vbi_data_inserted; scalar_t__ mpg_data_received; struct cx18_stream* streams; TYPE_1__ v4l2_dev; int params; int gpio_lock; int gpio_val; int gpio_dir; int audio_input; int active_input; int card_name; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,...) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int *) ;
 int VAR_4 ;
 int FUNC_2 (struct cx18*,int ,int ) ;
 int FUNC_3 (struct cx18*,int ,struct v4l2_audio*) ;
 int FUNC_4 (struct cx18*,int ,struct v4l2_input*) ;
 int FUNC_5 (struct cx18*,struct tveeprom*) ;
 int FUNC_6 (int *,int ) ;
 int VAR_5 ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 scalar_t__ FUNC_9 (int ,char**) ;

__attribute__((used)) static int FUNC_10(struct file *VAR_6, void *VAR_7)
{
 struct cx18 *VAR_8 = ((struct cx18_open_id *)VAR_7)->cx;
 struct v4l2_input VAR_9;
 struct v4l2_audio VAR_10;
 int VAR_11;

 FUNC_0("=================  START STATUS CARD #%d  "
    "=================\n", VAR_8->instance);
 FUNC_0("Version: %s  Card: %s\n", VAR_3, VAR_8->card_name);
 if (VAR_8->hw_flags & VAR_1) {
  struct tveeprom VAR_12;

  FUNC_5(VAR_8, &VAR_12);
 }
 FUNC_2(VAR_8, VAR_4, VAR_5);
 FUNC_4(VAR_8, VAR_8->active_input, &VAR_9);
 FUNC_3(VAR_8, VAR_8->audio_input, &VAR_10);
 FUNC_0("Video Input: %s\n", VAR_9.name);
 FUNC_0("Audio Input: %s\n", VAR_10.name);
 FUNC_7(&VAR_8->gpio_lock);
 FUNC_0("GPIO:  direction 0x%08x, value 0x%08x\n",
  VAR_8->gpio_dir, VAR_8->gpio_val);
 FUNC_8(&VAR_8->gpio_lock);
 FUNC_0("Tuner: %s\n",
  FUNC_9(VAR_0, &VAR_8->i_flags) ? "Radio" : "TV");
 FUNC_6(&VAR_8->params, VAR_8->v4l2_dev.name);
 FUNC_0("Status flags: 0x%08lx\n", VAR_8->i_flags);
 for (VAR_11 = 0; VAR_11 < VAR_2; VAR_11++) {
  struct cx18_stream *VAR_13 = &VAR_8->streams[VAR_11];

  if (VAR_13->video_dev == ((void*)0) || VAR_13->buffers == 0)
   continue;
  FUNC_0("Stream %s: status 0x%04lx, %d%% of %d KiB (%d buffers) in use\n",
     VAR_13->name, VAR_13->s_flags,
     FUNC_1(&VAR_13->q_full.depth) * VAR_13->bufs_per_mdl * 100
      / VAR_13->buffers,
     (VAR_13->buffers * VAR_13->buf_size) / 1024, VAR_13->buffers);
 }
 FUNC_0("Read MPEG/VBI: %lld/%lld bytes\n",
   (long long)VAR_8->mpg_data_received,
   (long long)VAR_8->vbi_data_inserted);
 FUNC_0("==================  END STATUS CARD #%d  "
    "==================\n", VAR_8->instance);
 return 0;
}
