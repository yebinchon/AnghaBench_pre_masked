
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct retro_hw_render_callback {unsigned int version_major; unsigned int version_minor; scalar_t__ context_type; } ;
struct TYPE_9__ {int video_context_driver; } ;
struct TYPE_8__ {scalar_t__ video_shared_context; } ;
struct TYPE_10__ {TYPE_2__ arrays; TYPE_1__ bools; } ;
typedef TYPE_3__ settings_t ;
struct TYPE_11__ {void* ctx_data; } ;
typedef TYPE_4__ gl_t ;
typedef int gfx_ctx_driver_t ;
typedef enum gfx_ctx_api { ____Placeholder_gfx_ctx_api } gfx_ctx_api ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 TYPE_3__* FUNC_0 () ;
 int VAR_5 ;
 scalar_t__ FUNC_1 () ;
 int * FUNC_2 (TYPE_4__*,int ,int,unsigned int,unsigned int,int,void**) ;
 struct retro_hw_render_callback* FUNC_3 () ;

__attribute__((used)) static const gfx_ctx_driver_t *FUNC_4(gl_t *VAR_6)
{
   enum gfx_ctx_api VAR_7;
   const gfx_ctx_driver_t *VAR_8 = ((void*)0);
   void *VAR_9 = ((void*)0);
   const char *VAR_10 = ((void*)0);
   settings_t *VAR_11 = FUNC_0();
   struct retro_hw_render_callback *VAR_12 = FUNC_3();
   unsigned VAR_13 = VAR_12->version_major;
   unsigned VAR_14 = VAR_12->version_minor;
   VAR_7 = VAR_0;
   VAR_10 = "OpenGL";


   (void)VAR_10;

   VAR_5 = VAR_11->bools.video_shared_context
      && VAR_12->context_type != VAR_2;

   if ( (FUNC_1())
         && (VAR_12->context_type != VAR_2))
      VAR_5 = 1;

   VAR_8 = FUNC_2(VAR_6,
         VAR_11->arrays.video_context_driver,
         VAR_7, VAR_13, VAR_14, VAR_5, &VAR_9);

   if (VAR_9)
      VAR_6->ctx_data = VAR_9;

   return VAR_8;
}
