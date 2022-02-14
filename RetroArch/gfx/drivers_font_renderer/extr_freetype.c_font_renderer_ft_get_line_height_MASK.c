
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_8__ {TYPE_3__* face; } ;
typedef TYPE_4__ ft_font_renderer_t ;
struct TYPE_7__ {TYPE_2__* size; } ;
struct TYPE_5__ {int height; } ;
struct TYPE_6__ {TYPE_1__ metrics; } ;



__attribute__((used)) static int FUNC_0(void* VAR_0)
{
   ft_font_renderer_t *VAR_1 = (ft_font_renderer_t*)VAR_0;
   if (!VAR_1 || !VAR_1->face)
      return 0;
   return VAR_1->face->size->metrics.height/64;
}
