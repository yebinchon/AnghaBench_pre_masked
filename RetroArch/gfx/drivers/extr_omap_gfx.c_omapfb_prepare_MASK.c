
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int used; } ;
typedef TYPE_1__ omapfb_page_t ;
struct TYPE_8__ {TYPE_1__* cur_page; TYPE_1__* old_page; } ;
typedef TYPE_2__ omapfb_data_t ;


 TYPE_1__* FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static void FUNC_3(omapfb_data_t *VAR_0)
{
   omapfb_page_t *VAR_1 = ((void*)0);


   FUNC_1(VAR_0);

   VAR_1 = FUNC_0(VAR_0);

   FUNC_2(VAR_1 != ((void*)0));

   VAR_0->old_page = VAR_0->cur_page;
   VAR_0->cur_page = VAR_1;

   VAR_0->cur_page->used = 1;
}
