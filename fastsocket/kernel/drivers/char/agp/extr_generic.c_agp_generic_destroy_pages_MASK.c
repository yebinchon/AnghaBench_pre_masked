
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct page {int dummy; } ;
struct agp_memory {int page_count; struct page** pages; } ;
struct TYPE_2__ {int current_memory_agp; } ;


 int FUNC_0 (struct page*) ;
 TYPE_1__* VAR_0 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct page*) ;
 int FUNC_3 (struct page**,int) ;
 int FUNC_4 (struct page*) ;

void FUNC_5(struct agp_memory *VAR_1)
{
 int VAR_2;
 struct page *VAR_3;

 if (!VAR_1)
  return;





 for (VAR_2 = 0; VAR_2 < VAR_1->page_count; VAR_2++) {
  VAR_3 = VAR_1->pages[VAR_2];


  FUNC_4(VAR_3);

  FUNC_2(VAR_3);
  FUNC_0(VAR_3);
  FUNC_1(&VAR_0->current_memory_agp);
  VAR_1->pages[VAR_2] = ((void*)0);
 }
}
