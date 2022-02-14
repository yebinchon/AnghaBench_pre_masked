
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct video_shader {int dummy; } ;
struct TYPE_2__ {struct video_shader* shader; } ;
typedef TYPE_1__ glsl_shader_data_t ;



__attribute__((used)) static struct video_shader *FUNC_0(void *VAR_0)
{
   glsl_shader_data_t *VAR_1 = (glsl_shader_data_t*)VAR_0;
   if (!VAR_1)
      return ((void*)0);
   return VAR_1->shader;
}
