
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_7__ ;
typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_14__ {void* scaler_type; void* out_fmt; int in_fmt; int out_height; int out_width; int in_height; int in_width; } ;
struct TYPE_11__ {int streamed; TYPE_7__ scaler_rgb; TYPE_7__ scaler_bgr; } ;
struct TYPE_10__ {int height; int width; } ;
struct TYPE_12__ {TYPE_3__ readback; TYPE_2__ vp; } ;
typedef TYPE_4__ vk_t ;
struct TYPE_9__ {scalar_t__ video_gpu_record; } ;
struct TYPE_13__ {TYPE_1__ bools; } ;
typedef TYPE_5__ settings_t ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 void* VAR_2 ;
 void* VAR_3 ;
 TYPE_5__* FUNC_1 () ;
 int FUNC_2 () ;
 int FUNC_3 (TYPE_7__*) ;

__attribute__((used)) static void FUNC_4(vk_t *VAR_4)
{





   settings_t *VAR_5 = FUNC_1();
   bool VAR_6 = FUNC_2();
   VAR_4->readback.streamed = VAR_5->bools.video_gpu_record && VAR_6;

   if (!VAR_4->readback.streamed)
      return;

   VAR_4->readback.scaler_bgr.in_width = VAR_4->vp.width;
   VAR_4->readback.scaler_bgr.in_height = VAR_4->vp.height;
   VAR_4->readback.scaler_bgr.out_width = VAR_4->vp.width;
   VAR_4->readback.scaler_bgr.out_height = VAR_4->vp.height;
   VAR_4->readback.scaler_bgr.in_fmt = VAR_1;
   VAR_4->readback.scaler_bgr.out_fmt = VAR_2;
   VAR_4->readback.scaler_bgr.scaler_type = VAR_3;

   VAR_4->readback.scaler_rgb.in_width = VAR_4->vp.width;
   VAR_4->readback.scaler_rgb.in_height = VAR_4->vp.height;
   VAR_4->readback.scaler_rgb.out_width = VAR_4->vp.width;
   VAR_4->readback.scaler_rgb.out_height = VAR_4->vp.height;
   VAR_4->readback.scaler_rgb.in_fmt = VAR_0;
   VAR_4->readback.scaler_rgb.out_fmt = VAR_2;
   VAR_4->readback.scaler_rgb.scaler_type = VAR_3;

   if (!FUNC_3(&VAR_4->readback.scaler_bgr))
   {
      VAR_4->readback.streamed = 0;
      FUNC_0("[Vulkan]: Failed to initialize scaler context.\n");
   }

   if (!FUNC_3(&VAR_4->readback.scaler_rgb))
   {
      VAR_4->readback.streamed = 0;
      FUNC_0("[Vulkan]: Failed to initialize scaler context.\n");
   }
}
