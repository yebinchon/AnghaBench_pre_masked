
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct video_shader {int dummy; } ;
struct TYPE_2__ {int filter_chain; } ;
typedef TYPE_1__ gl_core_t ;


 struct video_shader* FUNC_0 (int ) ;

__attribute__((used)) static struct video_shader *FUNC_1(void *VAR_0)
{
   gl_core_t *VAR_1 = (gl_core_t*)VAR_0;
   if (!VAR_1 || !VAR_1->filter_chain)
      return ((void*)0);

   return FUNC_0(VAR_1->filter_chain);
}
