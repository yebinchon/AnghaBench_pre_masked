
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_7__ ;
typedef struct TYPE_14__ TYPE_6__ ;
typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_13__ {int planes; unsigned int* pitch; unsigned int* offset; } ;
struct TYPE_15__ {unsigned int frame_size; TYPE_5__ frame; } ;
struct TYPE_14__ {unsigned int buffer_size_min; unsigned int buffer_size_recommended; TYPE_4__* format; TYPE_1__* priv; } ;
struct TYPE_12__ {int encoding; TYPE_3__* es; } ;
struct TYPE_10__ {unsigned int width; unsigned int height; } ;
struct TYPE_11__ {TYPE_2__ video; } ;
struct TYPE_9__ {TYPE_7__* module; } ;
typedef int MMAL_STATUS_T ;
typedef TYPE_6__ MMAL_PORT_T ;
typedef TYPE_7__ MMAL_PORT_MODULE_T ;





 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static MMAL_STATUS_T FUNC_0(MMAL_PORT_T *VAR_2)
{
   MMAL_PORT_MODULE_T *VAR_3 = VAR_2->priv->module;
   unsigned int VAR_4 = VAR_2->format->es->video.width;
   unsigned int VAR_5 = VAR_2->format->es->video.height;
   VAR_4 = (VAR_4 + 31) & ~31;
   VAR_5 = (VAR_5 + 15) & ~15;


   switch(VAR_2->format->encoding)
   {
   case 130:
      VAR_3->frame_size = VAR_4 * VAR_5 * 3 / 2;
      VAR_3->frame.planes = 3;
      VAR_3->frame.pitch[0] = VAR_4;
      VAR_3->frame.offset[1] = VAR_3->frame.pitch[0] * VAR_5;
      VAR_3->frame.pitch[1] = VAR_4 / 2;
      VAR_3->frame.offset[2] = VAR_3->frame.offset[1] + VAR_3->frame.pitch[1] * VAR_5 / 2;
      VAR_3->frame.pitch[2] = VAR_4 / 2;
      break;
   case 128:
      VAR_3->frame_size = VAR_4 * VAR_5 * 3 / 2;
      VAR_3->frame.planes = 2;
      VAR_3->frame.pitch[0] = VAR_4;
      VAR_3->frame.offset[1] = VAR_3->frame.pitch[0] * VAR_5;
      VAR_3->frame.pitch[1] = VAR_4;
      break;
   case 129:
      VAR_3->frame_size = VAR_4 * VAR_5 * 2;
      VAR_3->frame.planes = 3;
      VAR_3->frame.pitch[0] = VAR_4;
      VAR_3->frame.offset[1] = VAR_3->frame.pitch[0] * VAR_5;
      VAR_3->frame.pitch[1] = VAR_4 / 2;
      VAR_3->frame.offset[2] = VAR_3->frame.offset[1] + VAR_3->frame.pitch[1] * VAR_5;
      VAR_3->frame.pitch[2] = VAR_4 / 2;
      break;
   default:
      return VAR_0;
   }

   VAR_2->buffer_size_min = VAR_2->buffer_size_recommended = VAR_3->frame_size;
   return VAR_1;
}
