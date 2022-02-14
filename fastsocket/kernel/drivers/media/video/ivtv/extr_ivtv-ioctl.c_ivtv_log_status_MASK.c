
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
struct v4l2_output {char* name; } ;
struct v4l2_input {char* name; } ;
struct v4l2_audioout {int name; } ;
struct v4l2_audio {int name; } ;
struct tveeprom {int dummy; } ;
struct TYPE_6__ {int buffers; } ;
struct ivtv_stream {int buffers; int buf_size; TYPE_3__ q_free; int s_flags; int name; int * vdev; } ;
struct ivtv_open_id {struct ivtv* itv; } ;
struct TYPE_5__ {int name; } ;
struct TYPE_4__ {int hdl; } ;
struct ivtv {int v4l2_cap; char* instance; int hw_flags; int dualwatch_stereo_mode; int output_mode; size_t audio_stereo_mode; size_t audio_bilingual_mode; char* i_flags; scalar_t__ vbi_data_inserted; scalar_t__ mpg_data_received; struct ivtv_stream* streams; TYPE_2__ v4l2_dev; TYPE_1__ cxhdl; int active_output; int audio_input; int active_input; int card_name; } ;
struct file {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (char*,...) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_1 (struct ivtv*,int ,int ) ;
 int FUNC_2 (struct ivtv*,int ,struct v4l2_audio*) ;
 int FUNC_3 (struct ivtv*,int ,struct v4l2_audioout*) ;
 int FUNC_4 (struct ivtv*,int ,struct v4l2_input*) ;
 int FUNC_5 (struct ivtv*,int ,struct v4l2_output*) ;
 int FUNC_6 (struct ivtv*,struct tveeprom*) ;
 int FUNC_7 (struct ivtv*,int*,int ,int ) ;
 int VAR_10 ;
 int FUNC_8 (int) ;
 scalar_t__ FUNC_9 (int ,char**) ;
 int FUNC_10 (int *,int ) ;

__attribute__((used)) static int FUNC_11(struct file *VAR_11, void *VAR_12)
{
 struct ivtv *VAR_13 = ((struct ivtv_open_id *)VAR_12)->itv;
 u32 VAR_14[VAR_0];

 int VAR_15 = VAR_13->v4l2_cap & VAR_8;
 struct v4l2_input VAR_16;
 struct v4l2_audio VAR_17;
 int VAR_18;

 FUNC_0("=================  START STATUS CARD #%d  =================\n",
         VAR_13->instance);
 FUNC_0("Version: %s Card: %s\n", VAR_5, VAR_13->card_name);
 if (VAR_13->hw_flags & VAR_3) {
  struct tveeprom VAR_19;

  FUNC_6(VAR_13, &VAR_19);
 }
 FUNC_1(VAR_13, VAR_9, VAR_10);
 FUNC_4(VAR_13, VAR_13->active_input, &VAR_16);
 FUNC_2(VAR_13, VAR_13->audio_input, &VAR_17);
 FUNC_0("Video Input:  %s\n", VAR_16.name);
 FUNC_0("Audio Input:  %s%s\n", VAR_17.name,
  (VAR_13->dualwatch_stereo_mode & ~0x300) == 0x200 ? " (Bilingual)" : "");
 if (VAR_15) {
  struct v4l2_output VAR_20;
  struct v4l2_audioout VAR_21;
  int VAR_22 = VAR_13->output_mode;
  static const char * const VAR_23[5] = {
   "None",
   "MPEG Streaming",
   "YUV Streaming",
   "YUV Frames",
   "Passthrough",
  };
  static const char * const VAR_24[5] = {
   "Stereo",
   "Left",
   "Right",
   "Mono",
   "Swapped"
  };
  static const char * const VAR_25[4] = {
   "None",
   "Global",
   "Local",
   "Global and Local"
  };
  static const char * const VAR_26[16] = {
   "ARGB Indexed",
   "RGB 5:6:5",
   "ARGB 1:5:5:5",
   "ARGB 1:4:4:4",
   "ARGB 8:8:8:8",
   "5",
   "6",
   "7",
   "AYUV Indexed",
   "YUV 5:6:5",
   "AYUV 1:5:5:5",
   "AYUV 1:4:4:4",
   "AYUV 8:8:8:8",
   "13",
   "14",
   "15",
  };

  FUNC_5(VAR_13, VAR_13->active_output, &VAR_20);
  FUNC_3(VAR_13, 0, &VAR_21);
  FUNC_0("Video Output: %s\n", VAR_20.name);
  FUNC_0("Audio Output: %s (Stereo/Bilingual: %s/%s)\n", VAR_21.name,
   VAR_24[VAR_13->audio_stereo_mode],
   VAR_24[VAR_13->audio_bilingual_mode]);
  if (VAR_22 < 0 || VAR_22 > VAR_7)
   VAR_22 = VAR_6;
  FUNC_0("Output Mode:  %s\n", VAR_23[VAR_22]);
  FUNC_7(VAR_13, VAR_14, VAR_1, 0);
  VAR_14[0] |= (FUNC_8(0x2a00) >> 7) & 0x40;
  FUNC_0("Overlay:      %s, Alpha: %s, Pixel Format: %s\n",
   VAR_14[0] & 1 ? "On" : "Off",
   VAR_25[(VAR_14[0] >> 1) & 0x3],
   VAR_26[(VAR_14[0] >> 3) & 0xf]);
 }
 FUNC_0("Tuner:  %s\n",
  FUNC_9(VAR_2, &VAR_13->i_flags) ? "Radio" : "TV");
 FUNC_10(&VAR_13->cxhdl.hdl, VAR_13->v4l2_dev.name);
 FUNC_0("Status flags:    0x%08lx\n", VAR_13->i_flags);
 for (VAR_18 = 0; VAR_18 < VAR_4; VAR_18++) {
  struct ivtv_stream *VAR_27 = &VAR_13->streams[VAR_18];

  if (VAR_27->vdev == ((void*)0) || VAR_27->buffers == 0)
   continue;
  FUNC_0("Stream %s: status 0x%04lx, %d%% of %d KiB (%d buffers) in use\n", VAR_27->name, VAR_27->s_flags,
    (VAR_27->buffers - VAR_27->q_free.buffers) * 100 / VAR_27->buffers,
    (VAR_27->buffers * VAR_27->buf_size) / 1024, VAR_27->buffers);
 }

 FUNC_0("Read MPG/VBI: %lld/%lld bytes\n",
   (long long)VAR_13->mpg_data_received,
   (long long)VAR_13->vbi_data_inserted);
 FUNC_0("==================  END STATUS CARD #%d  ==================\n",
   VAR_13->instance);

 return 0;
}
