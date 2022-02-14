
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int current_swapchain_index; } ;
struct TYPE_7__ {TYPE_1__ context; } ;
struct TYPE_6__ {TYPE_3__ vk; } ;
typedef TYPE_2__ khr_display_ctx_data_t ;


 int FUNC_0 (TYPE_3__*) ;
 int FUNC_1 (TYPE_3__*,int ) ;

__attribute__((used)) static void FUNC_2(void *VAR_0, void *VAR_1)
{
   khr_display_ctx_data_t *VAR_2 = (khr_display_ctx_data_t*)VAR_0;
   FUNC_1(&VAR_2->vk, VAR_2->vk.context.current_swapchain_index);
   FUNC_0(&VAR_2->vk);
}
