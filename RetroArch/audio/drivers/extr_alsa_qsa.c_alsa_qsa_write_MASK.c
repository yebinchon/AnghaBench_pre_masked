
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint8_t ;
typedef int ssize_t ;
typedef size_t snd_pcm_sframes_t ;
struct TYPE_3__ {scalar_t__ buf_size; scalar_t__ buffer_ptr; scalar_t__* buffer; size_t buffer_index; int buf_count; int pcm; } ;
typedef TYPE_1__ alsa_qsa_t ;


 size_t VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 size_t FUNC_0 (scalar_t__,size_t) ;
 int VAR_3 ;
 int FUNC_1 (TYPE_1__*,int ) ;
 int FUNC_2 (scalar_t__,void const*,size_t) ;
 size_t FUNC_3 (int ,scalar_t__,scalar_t__) ;

__attribute__((used)) static ssize_t FUNC_4(void *VAR_4, const void *VAR_5, size_t VAR_6)
{
   alsa_qsa_t *VAR_7 = (alsa_qsa_t*)VAR_4;
   snd_pcm_sframes_t VAR_8 = 0;

   while (VAR_6)
   {
      size_t VAR_9 = FUNC_0(VAR_7->buf_size - VAR_7->buffer_ptr, VAR_6);

      if (VAR_9)
      {
         FUNC_2(VAR_7->buffer[VAR_7->buffer_index] +
               VAR_7->buffer_ptr, VAR_5, VAR_9);

         VAR_7->buffer_ptr += VAR_9;
         VAR_5 = (void*)((uint8_t*)VAR_5 + VAR_9);
         VAR_6 -= VAR_9;
         VAR_8 += VAR_9;
      }

      if (VAR_7->buffer_ptr >= VAR_7->buf_size)
      {
         snd_pcm_sframes_t VAR_10 = FUNC_3(VAR_7->pcm,
               VAR_7->buffer[VAR_7->buffer_index], VAR_7->buf_size);

         VAR_7->buffer_index = (VAR_7->buffer_index + 1) % VAR_7->buf_count;
         VAR_7->buffer_ptr = 0;

         if (VAR_10 <= 0)
         {
            int VAR_11;

            if (VAR_10 == -VAR_0)
               continue;

            VAR_11 = FUNC_1(VAR_7, VAR_3);

            if (VAR_11 == -VAR_2 || VAR_11 == -VAR_1)
               return -1;
         }
      }

   }

   return VAR_8;
}
