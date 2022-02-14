
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct urb {TYPE_2__* iso_frame_desc; scalar_t__ context; } ;
struct snd_pcm_substream {struct snd_pcm_runtime* runtime; } ;
struct snd_pcm_runtime {scalar_t__ buffer_size; } ;
struct snd_line6_pcm {scalar_t__ pos_out_done; int bytes_out; int period_out; int lock_audio_out; int unlink_urb_out; int active_urb_out; TYPE_1__* properties; struct urb** urb_audio_out; } ;
struct TYPE_4__ {int status; scalar_t__ length; } ;
struct TYPE_3__ {int bytes_per_frame; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int,int *) ;
 int FUNC_1 (struct snd_pcm_substream*) ;
 struct snd_line6_pcm* FUNC_2 (struct snd_pcm_substream*) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (struct snd_pcm_substream*) ;
 scalar_t__ FUNC_6 (int,int *) ;

__attribute__((used)) static void FUNC_7(struct urb *VAR_3)
{
 int VAR_4, VAR_5, VAR_6 = 0, VAR_7 = 0;
 unsigned long VAR_8;

 struct snd_pcm_substream *VAR_9 = (struct snd_pcm_substream *)VAR_3->context;
 struct snd_line6_pcm *VAR_10 = FUNC_2(VAR_9);
 struct snd_pcm_runtime *VAR_11 = VAR_9->runtime;


 for (VAR_5 = VAR_1; VAR_5--;)
  if (VAR_3 == VAR_10->urb_audio_out[VAR_5])
   break;

 if (VAR_5 < 0)
  return;

 for (VAR_4 = VAR_2; VAR_4--;)
  VAR_6 += VAR_3->iso_frame_desc[VAR_4].length;

 FUNC_3(&VAR_10->lock_audio_out, VAR_8);
 VAR_10->pos_out_done += VAR_6 / VAR_10->properties->bytes_per_frame;

 if (VAR_10->pos_out_done >= VAR_11->buffer_size)
  VAR_10->pos_out_done -= VAR_11->buffer_size;

 FUNC_0(VAR_5, &VAR_10->active_urb_out);

 for (VAR_4 = VAR_2; VAR_4--;)
  if (VAR_3->iso_frame_desc[VAR_4].status == -VAR_0) {
   VAR_7 = 1;
   break;
  }

 if (FUNC_6(VAR_5, &VAR_10->unlink_urb_out))
  VAR_7 = 1;

 FUNC_4(&VAR_10->lock_audio_out, VAR_8);

 if (!VAR_7) {
  FUNC_5(VAR_9);

  if ((VAR_10->bytes_out += VAR_6) >= VAR_10->period_out) {
   VAR_10->bytes_out -= VAR_10->period_out;
   FUNC_1(VAR_9);
  }
 }
}
