
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct audio_mixer_handle {int is_finished; int copy_data_over; TYPE_1__* buffer; } ;
struct TYPE_10__ {scalar_t__ state; } ;
typedef TYPE_2__ retro_task_t ;
struct TYPE_11__ {int path; scalar_t__ is_finished; scalar_t__ data; } ;
typedef TYPE_3__ nbio_handle_t ;
struct TYPE_12__ {int path; int bufsize; int buf; } ;
typedef TYPE_4__ nbio_buf_t ;
struct TYPE_9__ {int bufsize; int buf; } ;


 scalar_t__ FUNC_0 (int,int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (TYPE_2__*) ;
 int FUNC_3 (TYPE_2__*,TYPE_4__*) ;

bool FUNC_4(retro_task_t *VAR_0)
{
   nbio_handle_t *VAR_1 = (nbio_handle_t*)VAR_0->state;
   struct audio_mixer_handle *VAR_2 = (struct audio_mixer_handle*)VAR_1->data;

   if (
         VAR_1->is_finished
         && (VAR_2 && !VAR_2->is_finished)
         && (VAR_2->copy_data_over)
         && (!FUNC_2(VAR_0)))
   {
      nbio_buf_t *VAR_3 = (nbio_buf_t*)FUNC_0(1, sizeof(*VAR_3));

      if (VAR_3)
      {
         VAR_3->buf = VAR_2->buffer->buf;
         VAR_3->bufsize = VAR_2->buffer->bufsize;
         VAR_3->path = FUNC_1(VAR_1->path);
      }

      FUNC_3(VAR_0, VAR_3);

      VAR_2->copy_data_over = 0;
      VAR_2->is_finished = 1;

      return 0;
   }

   return 1;
}
