
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int thread_video_t ;
struct TYPE_5__ {void const** font_driver; void** font_handle; char const* font_path; float font_size; int is_threaded; int api; int return_value; void* video_data; int method; } ;
struct TYPE_6__ {TYPE_1__ font_init; } ;
struct TYPE_7__ {TYPE_2__ data; int type; } ;
typedef TYPE_3__ thread_packet_t ;
typedef enum font_driver_render_api { ____Placeholder_font_driver_render_api } font_driver_render_api ;
typedef int custom_font_command_method_t ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (int *,TYPE_3__*) ;

bool FUNC_2(const void **VAR_1, void **VAR_2,
      void *VAR_3, const char *VAR_4, float VAR_5,
      enum font_driver_render_api VAR_6, custom_font_command_method_t VAR_7,
      bool VAR_8)
{
   thread_packet_t VAR_9;
   thread_video_t *VAR_10 = (thread_video_t*)FUNC_0(1);

   if (!VAR_10)
      return 0;

   VAR_9.type = VAR_0;
   VAR_9.data.font_init.method = VAR_7;
   VAR_9.data.font_init.font_driver = VAR_1;
   VAR_9.data.font_init.font_handle = VAR_2;
   VAR_9.data.font_init.video_data = VAR_3;
   VAR_9.data.font_init.font_path = VAR_4;
   VAR_9.data.font_init.font_size = VAR_5;
   VAR_9.data.font_init.is_threaded = VAR_8;
   VAR_9.data.font_init.api = VAR_6;

   FUNC_1(VAR_10, &VAR_9);

   return VAR_9.data.font_init.return_value;
}
