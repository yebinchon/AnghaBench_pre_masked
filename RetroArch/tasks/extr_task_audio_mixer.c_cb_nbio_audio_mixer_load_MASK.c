
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct audio_mixer_handle {int copy_data_over; TYPE_2__* buffer; } ;
struct TYPE_3__ {int is_finished; int handle; scalar_t__ data; } ;
typedef TYPE_1__ nbio_handle_t ;
struct TYPE_4__ {unsigned int bufsize; void* buf; } ;
typedef TYPE_2__ nbio_buf_t ;


 scalar_t__ FUNC_0 (int,int) ;
 void* FUNC_1 (int ,size_t*) ;

__attribute__((used)) static int FUNC_2(void *VAR_0, size_t VAR_1)
{
   nbio_handle_t *VAR_2 = (nbio_handle_t*)VAR_0;
   struct audio_mixer_handle *VAR_3= (struct audio_mixer_handle*)VAR_2->data;
   void *VAR_4 = FUNC_1(VAR_2->handle, &VAR_1);
   nbio_buf_t *VAR_5 = (nbio_buf_t*)FUNC_0(1, sizeof(*VAR_3->buffer));

   if (!VAR_5)
      return -1;

   VAR_3->buffer = VAR_5;
   VAR_3->buffer->buf = VAR_4;
   VAR_3->buffer->bufsize = (unsigned)VAR_1;
   VAR_3->copy_data_over = 1;
   VAR_2->is_finished = 1;

   return 0;
}
