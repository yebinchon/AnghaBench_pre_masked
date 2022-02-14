
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_7__ ;
typedef struct TYPE_15__ TYPE_6__ ;
typedef struct TYPE_14__ TYPE_5__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_16__ {int width; int height; scalar_t__ sdl_overlay; int sdl_surface; } ;
struct TYPE_15__ {TYPE_1__* priv; } ;
struct TYPE_14__ {int buffer_size_min; TYPE_4__* format; TYPE_6__* component; } ;
struct TYPE_13__ {scalar_t__ encoding; TYPE_3__* es; } ;
struct TYPE_11__ {int width; int height; } ;
struct TYPE_12__ {TYPE_2__ video; } ;
struct TYPE_10__ {TYPE_7__* module; } ;
typedef int MMAL_STATUS_T ;
typedef TYPE_5__ MMAL_PORT_T ;
typedef TYPE_6__ MMAL_COMPONENT_T ;
typedef TYPE_7__ MMAL_COMPONENT_MODULE_T ;


 int FUNC_0 (char*) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_1 (int,int,int ,int ) ;
 int FUNC_2 (scalar_t__) ;
 int VAR_4 ;
 int FUNC_3 (TYPE_7__*) ;

__attribute__((used)) static MMAL_STATUS_T FUNC_4(MMAL_PORT_T *VAR_5)
{
   MMAL_COMPONENT_T *VAR_6 = VAR_5->component;
   MMAL_COMPONENT_MODULE_T *VAR_7 = VAR_6->priv->module;
   MMAL_STATUS_T VAR_8;

   if ((VAR_8=FUNC_3(VAR_7)) != VAR_3)
      return VAR_8;


   if (VAR_5->format->encoding != VAR_0)
      return VAR_2;


   if (VAR_7->sdl_overlay &&
       VAR_7->width == VAR_5->format->es->video.width &&
       VAR_7->height == VAR_5->format->es->video.height)
      return VAR_3;

   if (VAR_7->sdl_overlay)
      FUNC_2(VAR_7->sdl_overlay);


   VAR_7->sdl_overlay =
      FUNC_1(VAR_5->format->es->video.width,
                           VAR_5->format->es->video.height,
                           VAR_4, VAR_7->sdl_surface);
   if (!VAR_7->sdl_overlay)
   {
      FUNC_0("cannot create SDL overlay");
      return VAR_1;
   }
   VAR_7->width = VAR_5->format->es->video.width;
   VAR_7->height = VAR_5->format->es->video.height;

   VAR_5->buffer_size_min = VAR_7->width * VAR_7->height * 3 / 2;
   return VAR_3;
}
