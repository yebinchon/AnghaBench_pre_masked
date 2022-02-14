
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct audio_mixer_handle {int (* cb ) (TYPE_1__*,int *,int *,int *) ;TYPE_2__* buffer; } ;
struct TYPE_7__ {scalar_t__ state; } ;
typedef TYPE_1__ retro_task_t ;
struct TYPE_8__ {int handle; struct TYPE_8__* data; struct TYPE_8__* path; } ;
typedef TYPE_2__ nbio_handle_t ;


 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (TYPE_2__*) ;
 int FUNC_3 (TYPE_1__*,int *,int *,int *) ;

__attribute__((used)) static void FUNC_4(retro_task_t *VAR_0)
{
   nbio_handle_t *VAR_1 = (nbio_handle_t*)VAR_0->state;
   struct audio_mixer_handle *VAR_2 = (struct audio_mixer_handle*)VAR_1->data;

   if (VAR_2)
   {
      if (VAR_2->buffer)
      {
         if (VAR_2->buffer->path)
            FUNC_0(VAR_2->buffer->path);
         FUNC_0(VAR_2->buffer);
      }

      if (VAR_2->cb)
         VAR_2->cb(VAR_0, ((void*)0), ((void*)0), ((void*)0));
   }

   if (!FUNC_2(VAR_1->path))
      FUNC_0(VAR_1->path);
   if (VAR_1->data)
      FUNC_0(VAR_1->data);
   FUNC_1(VAR_1->handle);
   FUNC_0(VAR_1);
}
