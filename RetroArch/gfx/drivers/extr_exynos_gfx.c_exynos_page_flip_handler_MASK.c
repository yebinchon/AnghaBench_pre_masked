
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct exynos_page {int used; TYPE_1__* base; } ;
struct TYPE_2__ {struct exynos_page* cur_page; int pageflip_pending; } ;


 int FUNC_0 (char*,struct exynos_page*) ;

__attribute__((used)) static void FUNC_1(int VAR_0, unsigned VAR_1, unsigned VAR_2,
      unsigned VAR_3, void *VAR_4)
{
   struct exynos_page *VAR_5 = VAR_4;





   if (VAR_5->base->cur_page)
      VAR_5->base->cur_page->used = 0;

   VAR_5->base->pageflip_pending--;
   VAR_5->base->cur_page = VAR_5;
}
