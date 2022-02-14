
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct config_int_setting {int dummy; } ;
struct TYPE_4__ {int content_favorites_size; int d3d12_gpu_index; int d3d11_gpu_index; int d3d10_gpu_index; int vulkan_gpu_index; int crt_switch_center_adjust; int audio_wasapi_sh_buffer_length; int netplay_check_frames; int state_slot; } ;
struct TYPE_5__ {TYPE_1__ ints; } ;
typedef TYPE_2__ settings_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (char*,int *,int,int ,int) ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int,int) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;

__attribute__((used)) static struct config_int_setting *FUNC_3(settings_t *VAR_9, int *VAR_10)
{
   unsigned VAR_11 = 0;
   struct config_int_setting *VAR_12 = (struct config_int_setting*)FUNC_2((*VAR_10 + 1), sizeof(struct config_int_setting));

   if (!VAR_12)
      return ((void*)0);

   FUNC_0("state_slot", &VAR_9->ints.state_slot, 0, 0 , 0);







   FUNC_0("crt_switch_center_adjust", &VAR_9->ints.crt_switch_center_adjust, 0, VAR_0, 0);
   FUNC_0("content_favorites_size", &VAR_9->ints.content_favorites_size, 1, VAR_6, 0);

   *VAR_10 = VAR_11;

   return VAR_12;
}
