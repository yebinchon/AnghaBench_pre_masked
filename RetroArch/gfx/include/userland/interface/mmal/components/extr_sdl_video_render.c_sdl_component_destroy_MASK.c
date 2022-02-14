
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_11__ {scalar_t__ queue; scalar_t__ sdl_surface; scalar_t__ sdl_overlay; scalar_t__ thread; int quit; } ;
struct TYPE_10__ {int input; scalar_t__ input_num; TYPE_1__* priv; } ;
struct TYPE_9__ {int member_0; } ;
struct TYPE_8__ {TYPE_4__* module; } ;
typedef TYPE_2__ SDL_Event ;
typedef int MMAL_STATUS_T ;
typedef TYPE_3__ MMAL_COMPONENT_T ;
typedef TYPE_4__ MMAL_COMPONENT_MODULE_T ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (scalar_t__) ;
 int VAR_2 ;
 int FUNC_2 (TYPE_2__*) ;
 int VAR_3 ;
 int FUNC_3 (int ) ;
 int FUNC_4 (scalar_t__,int *) ;
 int FUNC_5 (int ,int) ;
 int FUNC_6 (scalar_t__) ;
 int FUNC_7 (TYPE_4__*) ;

__attribute__((used)) static MMAL_STATUS_T FUNC_8(MMAL_COMPONENT_T *VAR_4)
{
   MMAL_COMPONENT_MODULE_T *VAR_5 = VAR_4->priv->module;
   SDL_Event VAR_6 = {VAR_3};

   VAR_5->quit = VAR_1;
   FUNC_2(&VAR_6);
   if(VAR_5->thread)
      FUNC_4(VAR_5->thread, ((void*)0));
   if(VAR_5->sdl_overlay)
      FUNC_1(VAR_5->sdl_overlay);
   if(VAR_5->sdl_surface)
      FUNC_0(VAR_5->sdl_surface);
   FUNC_3(VAR_2);

   if(VAR_4->input_num) FUNC_5(VAR_4->input, 1);
   if(VAR_5->queue) FUNC_6(VAR_5->queue);
   FUNC_7(VAR_5);
   return VAR_0;
}
