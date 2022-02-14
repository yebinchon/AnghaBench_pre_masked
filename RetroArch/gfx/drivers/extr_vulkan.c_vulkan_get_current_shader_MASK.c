
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int vulkan_filter_chain_t ;
struct TYPE_2__ {scalar_t__ filter_chain; } ;
typedef TYPE_1__ vk_t ;
struct video_shader {int dummy; } ;


 struct video_shader* FUNC_0 (int *) ;

__attribute__((used)) static struct video_shader *FUNC_1(void *VAR_0)
{
   vk_t *VAR_1 = (vk_t*)VAR_0;
   if (!VAR_1 || !VAR_1->filter_chain)
      return ((void*)0);

   return FUNC_0((vulkan_filter_chain_t*)VAR_1->filter_chain);
}
