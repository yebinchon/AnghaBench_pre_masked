
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct texture_image {int member_3; unsigned int width; unsigned int height; int supports_rgba; scalar_t__ pixels; int * member_2; int member_1; int member_0; } ;
struct TYPE_11__ {scalar_t__ width; scalar_t__ height; int supports_rgba; scalar_t__ pixels; } ;
struct nbio_image_handle {int status; int (* cb ) (TYPE_2__*,size_t) ;scalar_t__ upscale_threshold; TYPE_3__ ti; scalar_t__ is_finished; int handle; int type; scalar_t__ frame_duration; int is_blocking; int is_blocking_on_processing; } ;
typedef scalar_t__ retro_time_t ;
struct TYPE_9__ {scalar_t__ state; } ;
typedef TYPE_1__ retro_task_t ;
struct TYPE_10__ {scalar_t__ is_finished; scalar_t__ data; } ;
typedef TYPE_2__ nbio_handle_t ;







 scalar_t__ FUNC_0 () ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (int ,int ) ;
 scalar_t__ FUNC_3 (int) ;
 int FUNC_4 (TYPE_2__*,size_t) ;
 int FUNC_5 (TYPE_2__*,size_t) ;
 int FUNC_6 (TYPE_1__*) ;
 int FUNC_7 (struct nbio_image_handle*) ;
 int FUNC_8 (TYPE_1__*,struct texture_image*) ;
 scalar_t__ FUNC_9 (unsigned int,TYPE_3__*,struct texture_image*) ;

bool FUNC_10(retro_task_t *VAR_0)
{
   nbio_handle_t *VAR_1 = (nbio_handle_t*)VAR_0->state;
   struct nbio_image_handle *VAR_2 = (struct nbio_image_handle*)VAR_1->data;

   if (VAR_2)
   {
      switch (VAR_2->status)
      {
         case 128:
            return 1;
         case 132:
            if (FUNC_7(VAR_2) == -1)
               VAR_2->status = 131;
            break;
         case 129:
            if (VAR_2->handle && VAR_2->cb)
            {
               size_t VAR_3 = 0;
               if (VAR_2->cb(VAR_1, VAR_3) == -1)
                  return 0;
            }
            if (VAR_2->is_blocking_on_processing)
               VAR_2->status = 132;
            break;
         case 130:
            if (!VAR_2->is_blocking && !VAR_2->is_finished)
            {
               retro_time_t VAR_4 = FUNC_0();
               do
               {
                  if (!FUNC_2(VAR_2->handle, VAR_2->type))
                  {
                     VAR_2->status = 129;
                     break;
                  }
               }
               while (FUNC_0() - VAR_4 < VAR_2->frame_duration);
            }
            break;
         case 131:
            if (VAR_2->handle && VAR_2->cb)
            {
               size_t VAR_5 = 0;
               if (VAR_2->cb(VAR_1, VAR_5) == -1)
                  return 0;
            }
            if (!VAR_2->is_finished)
               break;
      }
   }

   if ( VAR_1->is_finished
         && (VAR_2 && VAR_2->is_finished)
         && (!FUNC_6(VAR_0)))
   {
      struct texture_image *VAR_6 = (struct texture_image*)FUNC_3(sizeof(struct texture_image));

      if (VAR_6)
      {

         if (VAR_2->upscale_threshold > 0)
         {
            if (((VAR_2->ti.width > 0) && (VAR_2->ti.height > 0)) &&
                ((VAR_2->ti.width < VAR_2->upscale_threshold) ||
                 (VAR_2->ti.height < VAR_2->upscale_threshold)))
            {
               unsigned VAR_7 = (VAR_2->ti.width < VAR_2->ti.height) ?
                                                      VAR_2->ti.width : VAR_2->ti.height;
               float VAR_8 = (float)VAR_2->upscale_threshold /
                                                      (float)VAR_7;
               unsigned VAR_9 = (unsigned)VAR_8;
               struct texture_image VAR_10 = {
                  0,
                  0,
                  ((void*)0),
                  0
               };

               if (VAR_8 - (float)VAR_9 > 0.0f)
                  VAR_9 += 1;

               if (FUNC_9(VAR_9, &VAR_2->ti, &VAR_10))
               {
                  VAR_2->ti.width = VAR_10.width;
                  VAR_2->ti.height = VAR_10.height;

                  if (VAR_2->ti.pixels)
                     FUNC_1(VAR_2->ti.pixels);
                  VAR_2->ti.pixels = VAR_10.pixels;
               }
            }
         }

         VAR_6->width = VAR_2->ti.width;
         VAR_6->height = VAR_2->ti.height;
         VAR_6->pixels = VAR_2->ti.pixels;
         VAR_6->supports_rgba = VAR_2->ti.supports_rgba;
      }

      FUNC_8(VAR_0, VAR_6);

      return 0;
   }

   return 1;
}
