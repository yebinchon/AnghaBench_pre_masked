
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_iso_packet_descriptor {int offset; int length; } ;
struct urb {int transfer_buffer_length; struct snd_pcm_substream* context; scalar_t__ transfer_buffer; struct usb_iso_packet_descriptor* iso_frame_desc; } ;
struct snd_pcm_substream {int dummy; } ;
struct snd_line6_pcm {int max_packet_size; int lock_audio_in; int active_urb_in; scalar_t__ buffer_in; struct urb** urb_audio_in; } ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,char*,...) ;
 unsigned int FUNC_1 (int *,unsigned int) ;
 int FUNC_2 (struct snd_pcm_substream*) ;
 int FUNC_3 (unsigned int,int *) ;
 struct snd_line6_pcm* FUNC_4 (struct snd_pcm_substream*) ;
 int FUNC_5 (int *,unsigned long) ;
 int FUNC_6 (int *,unsigned long) ;
 scalar_t__ FUNC_7 (struct urb*,int ) ;

__attribute__((used)) static int FUNC_8(struct snd_pcm_substream *VAR_4)
{
 unsigned int VAR_5;
 unsigned long VAR_6;
 struct snd_line6_pcm *VAR_7 = FUNC_4(VAR_4);
 int VAR_8, VAR_9;
 struct urb *VAR_10;

 FUNC_5(&VAR_7->lock_audio_in, VAR_6);
 VAR_5 = FUNC_1(&VAR_7->active_urb_in, VAR_2);

 if (VAR_5 >= VAR_2) {
  FUNC_6(&VAR_7->lock_audio_in, VAR_6);
  FUNC_0(FUNC_2(VAR_4), "no free URB found\n");
  return -VAR_0;
 }

 VAR_10 = VAR_7->urb_audio_in[VAR_5];
 VAR_9 = 0;

 for (VAR_8 = 0; VAR_8 < VAR_3; ++VAR_8) {
  struct usb_iso_packet_descriptor *VAR_11 = &VAR_10->iso_frame_desc[VAR_8];
  VAR_11->offset = VAR_9;
  VAR_11->length = VAR_7->max_packet_size;
  VAR_9 += VAR_7->max_packet_size;
 }

 VAR_10->transfer_buffer = VAR_7->buffer_in + VAR_5 * VAR_3 * VAR_7->max_packet_size;
 VAR_10->transfer_buffer_length = VAR_9;
 VAR_10->context = VAR_4;

 if (FUNC_7(VAR_10, VAR_1) == 0)
  FUNC_3(VAR_5, &VAR_7->active_urb_in);
 else
  FUNC_0(FUNC_2(VAR_4), "URB in #%d submission failed\n", VAR_5);

 FUNC_6(&VAR_7->lock_audio_in, VAR_6);
 return 0;
}
