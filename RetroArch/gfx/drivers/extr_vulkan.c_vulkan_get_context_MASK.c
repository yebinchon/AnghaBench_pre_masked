
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {void* ctx_data; } ;
typedef TYPE_2__ vk_t ;
struct TYPE_7__ {int video_context_driver; } ;
struct TYPE_9__ {TYPE_1__ arrays; } ;
typedef TYPE_3__ settings_t ;
typedef int gfx_ctx_driver_t ;
typedef enum gfx_ctx_api { ____Placeholder_gfx_ctx_api } gfx_ctx_api ;


 int VAR_0 ;
 TYPE_3__* FUNC_0 () ;
 int * FUNC_1 (TYPE_2__*,int ,int,unsigned int,unsigned int,int,void**) ;

__attribute__((used)) static const gfx_ctx_driver_t *FUNC_2(vk_t *VAR_1)
{
   void *VAR_2 = ((void*)0);
   unsigned VAR_3 = 1;
   unsigned VAR_4 = 0;
   settings_t *VAR_5 = FUNC_0();
   enum gfx_ctx_api VAR_6 = VAR_0;
   const gfx_ctx_driver_t *VAR_7 = FUNC_1(
         VAR_1, VAR_5->arrays.video_context_driver,
         VAR_6, VAR_3, VAR_4, 0, &VAR_2);

   if (VAR_2)
      VAR_1->ctx_data = VAR_2;

   return VAR_7;
}
