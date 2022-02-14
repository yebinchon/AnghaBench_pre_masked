
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct urb {int actual_length; unsigned char* transfer_buffer; struct poseidon_audio* context; } ;
struct snd_pcm_runtime {int frame_bits; unsigned int buffer_size; scalar_t__ period_size; scalar_t__ dma_area; } ;
struct poseidon_audio {unsigned int rcv_position; scalar_t__ copied_position; TYPE_1__* capture_pcm_substream; } ;
struct TYPE_3__ {struct snd_pcm_runtime* runtime; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (scalar_t__,unsigned char*,int) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (TYPE_1__*) ;

__attribute__((used)) static inline void FUNC_3(struct urb *VAR_2, int *VAR_3)
{
 struct poseidon_audio *VAR_4 = VAR_2->context;
 struct snd_pcm_runtime *VAR_5 = VAR_4->capture_pcm_substream->runtime;

 int VAR_6 = VAR_5->frame_bits >> 3;
 int VAR_7 = VAR_2->actual_length / VAR_6;
 unsigned char *VAR_8 = VAR_2->transfer_buffer;
 unsigned int VAR_9 = VAR_4->rcv_position;

 if (VAR_2->actual_length == VAR_0 - 4)
  VAR_7 -= (VAR_1 / VAR_6);


 if (VAR_9 + VAR_7 >= VAR_5->buffer_size) {
  unsigned int VAR_10 = VAR_5->buffer_size - VAR_9;

  FUNC_0(VAR_5->dma_area + VAR_9 * VAR_6, VAR_8, VAR_10 * VAR_6);
  FUNC_0(VAR_5->dma_area, (VAR_8 + VAR_10 * VAR_6),
     (VAR_7 * VAR_6 - VAR_10 * VAR_6));
 } else
  FUNC_0(VAR_5->dma_area + VAR_9 * VAR_6, VAR_8, VAR_7 * VAR_6);


 FUNC_1(VAR_4->capture_pcm_substream);
 VAR_4->rcv_position += VAR_7;
 if (VAR_4->rcv_position >= VAR_5->buffer_size)
  VAR_4->rcv_position -= VAR_5->buffer_size;

 VAR_4->copied_position += (VAR_7);
 if (VAR_4->copied_position >= VAR_5->period_size) {
  VAR_4->copied_position -= VAR_5->period_size;
  *VAR_3 = 1;
 }
 FUNC_2(VAR_4->capture_pcm_substream);
}
