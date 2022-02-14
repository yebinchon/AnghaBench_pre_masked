
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {TYPE_1__* current_output; } ;
typedef TYPE_2__ gfx_ctx_wayland_data_t ;
typedef enum display_metric_types { ____Placeholder_display_metric_types } display_metric_types ;
struct TYPE_3__ {scalar_t__ physical_width; scalar_t__ physical_height; scalar_t__ width; } ;






__attribute__((used)) static bool FUNC_0(void *VAR_0,
      enum display_metric_types VAR_1, float *VAR_2)
{
   gfx_ctx_wayland_data_t *VAR_3 = (gfx_ctx_wayland_data_t*)VAR_0;

   if (!VAR_3 || !VAR_3->current_output || VAR_3->current_output->physical_width == 0 || VAR_3->current_output->physical_height == 0)
      return 0;

   switch (VAR_1)
   {
      case 128:
         *VAR_2 = (float)VAR_3->current_output->physical_width;
         break;

      case 129:
         *VAR_2 = (float)VAR_3->current_output->physical_height;
         break;

      case 130:
         *VAR_2 = (float)VAR_3->current_output->width * 25.4f / (float)VAR_3->current_output->physical_width;
         break;

      default:
         *VAR_2 = 0.0f;
         return 0;
   }

   return 1;
}
