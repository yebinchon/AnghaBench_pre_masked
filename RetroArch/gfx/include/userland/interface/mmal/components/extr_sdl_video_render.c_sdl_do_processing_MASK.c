
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_41__ TYPE_9__ ;
typedef struct TYPE_40__ TYPE_8__ ;
typedef struct TYPE_39__ TYPE_7__ ;
typedef struct TYPE_38__ TYPE_6__ ;
typedef struct TYPE_37__ TYPE_5__ ;
typedef struct TYPE_36__ TYPE_4__ ;
typedef struct TYPE_35__ TYPE_3__ ;
typedef struct TYPE_34__ TYPE_2__ ;
typedef struct TYPE_33__ TYPE_23__ ;
typedef struct TYPE_32__ TYPE_1__ ;
typedef struct TYPE_31__ TYPE_19__ ;
typedef struct TYPE_30__ TYPE_13__ ;
typedef struct TYPE_29__ TYPE_12__ ;
typedef struct TYPE_28__ TYPE_11__ ;
typedef struct TYPE_27__ TYPE_10__ ;


typedef int uint8_t ;
typedef int uint32_t ;
struct TYPE_41__ {TYPE_19__* format; int component; TYPE_2__* priv; } ;
struct TYPE_40__ {unsigned int w; unsigned int h; scalar_t__ y; int x; } ;
struct TYPE_39__ {unsigned int width; unsigned int height; scalar_t__ y; int x; } ;
struct TYPE_37__ {unsigned int width; unsigned int height; } ;
struct TYPE_38__ {TYPE_5__ video; } ;
struct TYPE_35__ {int* offset; int * pitch; } ;
struct TYPE_36__ {TYPE_3__ video; } ;
struct TYPE_34__ {scalar_t__ (* pf_set_format ) (TYPE_9__*) ;} ;
struct TYPE_33__ {int * pitches; int ** pixels; } ;
struct TYPE_32__ {TYPE_12__* module; } ;
struct TYPE_31__ {TYPE_6__* es; } ;
struct TYPE_30__ {int flags; scalar_t__ length; scalar_t__ offset; TYPE_4__* type; int * data; scalar_t__ cmd; } ;
struct TYPE_29__ {scalar_t__ status; TYPE_23__* sdl_overlay; TYPE_7__ display_region; int queue; } ;
struct TYPE_28__ {TYPE_1__* priv; TYPE_9__** input; } ;
struct TYPE_27__ {int format; } ;
typedef TYPE_8__ SDL_Rect ;
typedef TYPE_9__ MMAL_PORT_T ;
typedef TYPE_10__ MMAL_EVENT_FORMAT_CHANGED_T ;
typedef TYPE_11__ MMAL_COMPONENT_T ;
typedef TYPE_12__ MMAL_COMPONENT_MODULE_T ;
typedef TYPE_13__ MMAL_BUFFER_HEADER_T ;
typedef int MMAL_BOOL_T ;


 int FUNC_0 (char*,...) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (TYPE_23__*,TYPE_8__*) ;
 int FUNC_2 (TYPE_23__*) ;
 int FUNC_3 (TYPE_23__*) ;
 int FUNC_4 (int *,int *,unsigned int) ;
 int FUNC_5 (TYPE_9__*) ;
 scalar_t__ FUNC_6 (int ,scalar_t__) ;
 TYPE_10__* FUNC_7 (TYPE_13__*) ;
 int FUNC_8 (TYPE_19__*,int ) ;
 int FUNC_9 (TYPE_9__*,TYPE_13__*) ;
 TYPE_13__* FUNC_10 (int ) ;
 scalar_t__ FUNC_11 (TYPE_9__*) ;

__attribute__((used)) static MMAL_BOOL_T FUNC_12(MMAL_COMPONENT_T *VAR_2)
{
   MMAL_PORT_T *VAR_3 = VAR_2->input[0];
   MMAL_COMPONENT_MODULE_T *VAR_4 = VAR_2->priv->module;
   unsigned int VAR_5 = VAR_3->format->es->video.width;
   unsigned int VAR_6 = VAR_3->format->es->video.height;
   MMAL_BUFFER_HEADER_T *VAR_7;
   uint8_t *VAR_8[3];
   uint32_t *VAR_9;
   unsigned int VAR_10, VAR_11;
   MMAL_BOOL_T VAR_12;
   SDL_Rect VAR_13;

   VAR_7 = FUNC_10(VAR_4->queue);
   if (!VAR_7)
    return 0;

   VAR_12 = VAR_7->flags & VAR_0;


   if (VAR_7->cmd)
   {
      MMAL_EVENT_FORMAT_CHANGED_T *VAR_14 = FUNC_7(VAR_7);
      if (VAR_14)
      {
         FUNC_8(VAR_3->format, VAR_14->format);
         VAR_4->status = VAR_3->priv->pf_set_format(VAR_3);
         if (VAR_4->status != VAR_1)
         {
            FUNC_0("format not set on port %p", VAR_3);
            if (FUNC_6(VAR_3->component, VAR_4->status) != VAR_1)
               FUNC_0("unable to send an error event buffer");
         }
      }
      else
      {
         FUNC_0("discarding event %i on port %p", (int)VAR_7->cmd, VAR_3);
      }

      VAR_7->length = 0;
      FUNC_9(VAR_3, VAR_7);
      return 1;
   }

   if (VAR_4->status != VAR_1)
      return 1;


   if (!VAR_7->length)
      goto end;




   VAR_9 = VAR_7->type->video.pitch;
   VAR_8[0] = VAR_7->data + VAR_7->type->video.offset[0];
   VAR_8[1] = VAR_7->data + VAR_7->type->video.offset[2];
   VAR_8[2] = VAR_7->data + VAR_7->type->video.offset[1];

   FUNC_2(VAR_4->sdl_overlay);
   for (VAR_10=0; VAR_10<3; VAR_10++)
   {
      uint8_t *VAR_15 = VAR_8[VAR_10];
      uint8_t *VAR_16 = VAR_4->sdl_overlay->pixels[VAR_10];

      if(VAR_10 == 1) {VAR_5 /= 2; VAR_6 /= 2;}
      for(VAR_11 = 0; VAR_11 < VAR_6; VAR_11++)
      {
         FUNC_4(VAR_16, VAR_15, VAR_5);
         VAR_15 += VAR_9[VAR_10];
         VAR_16 += VAR_4->sdl_overlay->pitches[VAR_10];
      }
   }
   FUNC_3(VAR_4->sdl_overlay);

   VAR_5 = VAR_3->format->es->video.width;
   VAR_6 = VAR_3->format->es->video.height;
   VAR_13.x = VAR_4->display_region.x;
   VAR_13.w = VAR_4->display_region.width;
   VAR_6 = VAR_13.w * VAR_6 / VAR_5;
   VAR_13.y = VAR_4->display_region.y + (VAR_4->display_region.height - VAR_6) / 2;
   VAR_13.h = VAR_6;

   FUNC_1(VAR_4->sdl_overlay, &VAR_13);

 end:
   VAR_7->offset = VAR_7->length = 0;
   FUNC_9(VAR_3, VAR_7);


   if (VAR_12)
      FUNC_5(VAR_3);

   return 1;
}
