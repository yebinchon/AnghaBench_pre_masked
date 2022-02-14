
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct font_atlas {int dummy; } ;
struct TYPE_2__ {struct font_atlas atlas; } ;
typedef TYPE_1__ ct_font_renderer_t ;



__attribute__((used)) static struct font_atlas *FUNC_0(void *VAR_0)
{
   ct_font_renderer_t *VAR_1 = (ct_font_renderer_t*)VAR_0;
   if (!VAR_1)
      return ((void*)0);
   return &VAR_1->atlas;
}
