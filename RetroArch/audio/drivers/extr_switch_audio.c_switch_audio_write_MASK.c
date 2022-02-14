
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_4__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint32_t ;
struct TYPE_6__ {int latency; int last_append; TYPE_4__* current_buffer; int event; scalar_t__ blocking; } ;
typedef TYPE_1__ switch_audio_t ;
typedef int ssize_t ;
struct TYPE_7__ {int data_size; size_t buffer_size; scalar_t__ buffer; scalar_t__ sample_data; } ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (TYPE_4__**,int*,int ) ;
 int FUNC_2 (int *,void const*,size_t) ;
 int FUNC_3 () ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int*,int *,int,int) ;
 size_t FUNC_6 (int *) ;
 scalar_t__ FUNC_7 (TYPE_1__*,TYPE_4__*) ;
 scalar_t__ FUNC_8 (TYPE_1__*,int) ;

__attribute__((used)) static ssize_t FUNC_9(void *VAR_1, const void *VAR_2, size_t VAR_3)
{
   size_t VAR_4 = VAR_3;
 switch_audio_t *VAR_5 = (switch_audio_t*) VAR_1;

   if (!VAR_5)
      return -1;

 if (!VAR_5->current_buffer)
   {
      uint32_t VAR_6;
      if (FUNC_8(VAR_5, VAR_6) != 0)
      {
         FUNC_0("Failed to get released buffer?\n");
         return -1;
      }

      if (VAR_6 < 1)
         VAR_5->current_buffer = ((void*)0);

      if (!VAR_5->current_buffer)
      {
         if (VAR_5->blocking)
         {
            while(VAR_5->current_buffer == ((void*)0))
            {
               uint32_t VAR_7 = 0;
               VAR_6 = 0;




               FUNC_5(&VAR_7, &VAR_5->event, 1, 33333333);
               FUNC_4(VAR_5->event);

               if (FUNC_8(VAR_5, VAR_6) != 0)
                  return -1;

            }
         }
         else

            return 0;
      }

      VAR_5->current_buffer->data_size = 0;
   }

 if (VAR_4 > FUNC_6(((void*)0)) - VAR_5->current_buffer->data_size)
  VAR_4 = FUNC_6(((void*)0)) - VAR_5->current_buffer->data_size;


 FUNC_2(((uint8_t*) VAR_5->current_buffer->sample_data) + VAR_5->current_buffer->data_size, VAR_2, VAR_4);



 VAR_5->current_buffer->data_size += VAR_4;
 VAR_5->current_buffer->buffer_size = FUNC_6(((void*)0));

 if (VAR_5->current_buffer->data_size > (48000 * VAR_5->latency) / 1000)
   {
         if (FUNC_7(VAR_5, VAR_5->current_buffer) != 0)
            return -1;
  VAR_5->current_buffer = ((void*)0);
 }

 VAR_5->last_append = FUNC_3();

 return VAR_4;
}
