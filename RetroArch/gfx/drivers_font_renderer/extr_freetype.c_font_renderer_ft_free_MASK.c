
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {TYPE_2__* buffer; } ;
struct TYPE_5__ {scalar_t__ lib; scalar_t__ face; TYPE_1__ atlas; } ;
typedef TYPE_2__ ft_font_renderer_t ;


 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (TYPE_2__*) ;

__attribute__((used)) static void FUNC_3(void *VAR_0)
{
   ft_font_renderer_t *VAR_1 = (ft_font_renderer_t*)VAR_0;
   if (!VAR_1)
      return;

   FUNC_2(VAR_1->atlas.buffer);

   if (VAR_1->face)
      FUNC_0(VAR_1->face);
   if (VAR_1->lib)
      FUNC_1(VAR_1->lib);
   FUNC_2(VAR_1);
}
