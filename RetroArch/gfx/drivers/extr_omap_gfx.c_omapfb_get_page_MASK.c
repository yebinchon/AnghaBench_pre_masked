
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int used; } ;
typedef TYPE_1__ omapfb_page_t ;
struct TYPE_6__ {unsigned int num_pages; TYPE_1__* pages; TYPE_1__* old_page; TYPE_1__* cur_page; } ;
typedef TYPE_2__ omapfb_data_t ;



__attribute__((used)) static omapfb_page_t *FUNC_0(omapfb_data_t *VAR_0)
{
   unsigned VAR_1;
   omapfb_page_t *VAR_2 = ((void*)0);

   for (VAR_1 = 0; VAR_1 < VAR_0->num_pages; ++VAR_1)
   {
      if (&VAR_0->pages[VAR_1] == VAR_0->cur_page)
         continue;
      if (&VAR_0->pages[VAR_1] == VAR_0->old_page)
         continue;

      if (!VAR_0->pages[VAR_1].used)
      {
         VAR_2 = &VAR_0->pages[VAR_1];
         break;
      }
   }

   return VAR_2;
}
