
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct retro_hw_render_interface_vulkan {int get_instance_proc_addr; int get_device_proc_addr; int set_signal_semaphore; int unlock_queue; int lock_queue; int set_command_buffers; int wait_sync_index; int get_sync_index_mask; int get_sync_index; int set_image; TYPE_3__* handle; int queue_index; int queue; int device; int gpu; int instance; int interface_version; int interface_type; } ;
struct TYPE_5__ {int enable; struct retro_hw_render_interface_vulkan iface; } ;
struct TYPE_7__ {TYPE_2__* context; TYPE_1__ hw; } ;
typedef TYPE_3__ vk_t ;
struct retro_hw_render_callback {scalar_t__ context_type; } ;
struct TYPE_6__ {int graphics_queue_index; int queue; int device; int gpu; int instance; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct retro_hw_render_callback* FUNC_0 () ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_1 () ;
 int VAR_10 ;
 int VAR_11 ;

__attribute__((used)) static void FUNC_2(vk_t *VAR_12)
{
   struct retro_hw_render_interface_vulkan *VAR_13 =
      &VAR_12->hw.iface;
   struct retro_hw_render_callback *VAR_14 =
      FUNC_0();

   if (VAR_14->context_type != VAR_0)
      return;

   VAR_12->hw.enable = 1;

   VAR_13->interface_type = VAR_1;
   VAR_13->interface_version = VAR_2;
   VAR_13->instance = VAR_12->context->instance;
   VAR_13->gpu = VAR_12->context->gpu;
   VAR_13->device = VAR_12->context->device;

   VAR_13->queue = VAR_12->context->queue;
   VAR_13->queue_index = VAR_12->context->graphics_queue_index;

   VAR_13->handle = VAR_12;
   VAR_13->set_image = VAR_8;
   VAR_13->get_sync_index = VAR_4;
   VAR_13->get_sync_index_mask = VAR_5;
   VAR_13->wait_sync_index = VAR_11;
   VAR_13->set_command_buffers = VAR_7;
   VAR_13->lock_queue = VAR_6;
   VAR_13->unlock_queue = VAR_10;
   VAR_13->set_signal_semaphore = VAR_9;

   VAR_13->get_device_proc_addr = VAR_3;
   VAR_13->get_instance_proc_addr = FUNC_1();
}
