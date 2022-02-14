
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct ttm_page_pool {scalar_t__ npages; int lock; int list; } ;
struct page {int lru; } ;
typedef enum ttm_caching_state { ____Placeholder_ttm_caching_state } ttm_caching_state ;
struct TYPE_3__ {scalar_t__ max_size; } ;
struct TYPE_4__ {TYPE_1__ options; } ;


 unsigned int VAR_0 ;
 int FUNC_0 (struct page*) ;
 TYPE_2__* VAR_1 ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (struct page*) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (int *,unsigned long) ;
 struct ttm_page_pool* FUNC_6 (int,int) ;
 int FUNC_7 (struct ttm_page_pool*,unsigned int) ;

__attribute__((used)) static void FUNC_8(struct page **VAR_2, unsigned VAR_3, int VAR_4,
     enum ttm_caching_state VAR_5)
{
 unsigned long VAR_6;
 struct ttm_page_pool *VAR_7 = FUNC_6(VAR_4, VAR_5);
 unsigned VAR_8;

 if (VAR_7 == ((void*)0)) {

  for (VAR_8 = 0; VAR_8 < VAR_3; VAR_8++) {
   if (VAR_2[VAR_8]) {
    if (FUNC_2(VAR_2[VAR_8]) != 1)
     FUNC_3("Erroneous page count. Leaking pages.\n");
    FUNC_0(VAR_2[VAR_8]);
    VAR_2[VAR_8] = ((void*)0);
   }
  }
  return;
 }

 FUNC_4(&VAR_7->lock, VAR_6);
 for (VAR_8 = 0; VAR_8 < VAR_3; VAR_8++) {
  if (VAR_2[VAR_8]) {
   if (FUNC_2(VAR_2[VAR_8]) != 1)
    FUNC_3("Erroneous page count. Leaking pages.\n");
   FUNC_1(&VAR_2[VAR_8]->lru, &VAR_7->list);
   VAR_2[VAR_8] = ((void*)0);
   VAR_7->npages++;
  }
 }

 VAR_3 = 0;
 if (VAR_7->npages > VAR_1->options.max_size) {
  VAR_3 = VAR_7->npages - VAR_1->options.max_size;


  if (VAR_3 < VAR_0)
   VAR_3 = VAR_0;
 }
 FUNC_5(&VAR_7->lock, VAR_6);
 if (VAR_3)
  FUNC_7(VAR_7, VAR_3);
}
