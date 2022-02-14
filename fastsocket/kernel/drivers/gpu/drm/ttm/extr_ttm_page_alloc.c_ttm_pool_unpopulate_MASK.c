
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ttm_tt {unsigned int num_pages; int state; int caching_state; int page_flags; scalar_t__* pages; TYPE_1__* glob; } ;
struct TYPE_2__ {int mem_glob; } ;


 int VAR_0 ;
 int FUNC_0 (int ,scalar_t__) ;
 int FUNC_1 (scalar_t__*,int,int ,int ) ;

void FUNC_2(struct ttm_tt *VAR_1)
{
 unsigned VAR_2;

 for (VAR_2 = 0; VAR_2 < VAR_1->num_pages; ++VAR_2) {
  if (VAR_1->pages[VAR_2]) {
   FUNC_0(VAR_1->glob->mem_glob,
       VAR_1->pages[VAR_2]);
   FUNC_1(&VAR_1->pages[VAR_2], 1,
          VAR_1->page_flags,
          VAR_1->caching_state);
  }
 }
 VAR_1->state = VAR_0;
}
