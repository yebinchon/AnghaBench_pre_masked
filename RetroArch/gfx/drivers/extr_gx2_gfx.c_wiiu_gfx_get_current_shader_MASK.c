
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {struct video_shader* shader_preset; } ;
typedef TYPE_1__ wiiu_video_t ;
struct video_shader {int dummy; } ;



__attribute__((used)) static struct video_shader *FUNC_0(void *VAR_0)
{
   wiiu_video_t *VAR_1 = (wiiu_video_t *)VAR_0;

   if (!VAR_1)
      return ((void*)0);

   return VAR_1->shader_preset;
}
