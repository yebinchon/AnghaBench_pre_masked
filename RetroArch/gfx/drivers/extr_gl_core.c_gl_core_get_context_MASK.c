
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_5__ ;
typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


struct retro_hw_render_callback {scalar_t__ context_type; unsigned int version_major; unsigned int version_minor; } ;
struct TYPE_12__ {int video_context_driver; } ;
struct TYPE_13__ {TYPE_1__ arrays; } ;
typedef TYPE_2__ settings_t ;
struct TYPE_14__ {int use_shared_context; void* ctx_data; } ;
typedef TYPE_3__ gl_core_t ;
struct TYPE_15__ {scalar_t__ flags; } ;
typedef TYPE_4__ gfx_ctx_flags_t ;
struct TYPE_16__ {int (* bind_hw_render ) (void*,int) ;} ;
typedef TYPE_5__ gfx_ctx_driver_t ;
typedef enum gfx_ctx_api { ____Placeholder_gfx_ctx_api } gfx_ctx_api ;


 int FUNC_0 (scalar_t__,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 TYPE_2__* FUNC_1 () ;
 int FUNC_2 (int) ;
 int FUNC_3 (void*,int) ;
 TYPE_5__* FUNC_4 (TYPE_3__*,int ,int,unsigned int,unsigned int,int,void**) ;
 int FUNC_5 (TYPE_4__*) ;
 struct retro_hw_render_callback* FUNC_6 () ;

__attribute__((used)) static const gfx_ctx_driver_t *FUNC_7(gl_core_t *VAR_6)
{
   unsigned VAR_7;
   unsigned VAR_8;
   enum gfx_ctx_api VAR_9;
   gfx_ctx_flags_t VAR_10;
   const gfx_ctx_driver_t *VAR_11 = ((void*)0);
   void *VAR_12 = ((void*)0);
   settings_t *VAR_13 = FUNC_1();
   struct retro_hw_render_callback *VAR_14 = FUNC_6();
   VAR_9 = VAR_1;
   if (VAR_14 && VAR_14->context_type != VAR_3)
   {
      VAR_7 = VAR_14->version_major;
      VAR_8 = VAR_14->version_minor;
      FUNC_2(VAR_14->context_type == VAR_5);
      if (VAR_14->context_type == VAR_5)
      {
         VAR_10.flags = 0;
         FUNC_0(VAR_10.flags, VAR_0);
         FUNC_5(&VAR_10);
      }
   }
   else
   {
      VAR_7 = 3;
      VAR_8 = 2;
      FUNC_2(1);
      VAR_10.flags = 0;
      FUNC_0(VAR_10.flags, VAR_0);
      FUNC_5(&VAR_10);
   }



   if (VAR_14)
      VAR_6->use_shared_context = VAR_14->context_type != VAR_3;

   VAR_11 = FUNC_4(VAR_6,
         VAR_13->arrays.video_context_driver,
         VAR_9, VAR_7, VAR_8, VAR_6->use_shared_context, &VAR_12);

   if (VAR_12)
      VAR_6->ctx_data = VAR_12;


   if (VAR_11->bind_hw_render)
      VAR_11->bind_hw_render(VAR_12, VAR_6->use_shared_context);
   return VAR_11;
}
