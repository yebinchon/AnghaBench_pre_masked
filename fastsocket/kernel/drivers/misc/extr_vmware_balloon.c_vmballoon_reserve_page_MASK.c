
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int refused_alloc; int sleep_alloc_fail; int alloc_fail; int sleep_alloc; int alloc; } ;
struct vmballoon {scalar_t__ n_refused_pages; int size; int pages; int refused_pages; scalar_t__ reset_required; TYPE_1__ stats; } ;
struct page {int lru; } ;
typedef int gfp_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (struct page*) ;
 struct page* FUNC_2 (int ) ;
 int FUNC_3 (int *,int *) ;
 int FUNC_4 (struct page*) ;
 int FUNC_5 (struct vmballoon*,int ) ;

__attribute__((used)) static int FUNC_6(struct vmballoon *VAR_5, bool VAR_6)
{
 struct page *VAR_7;
 gfp_t VAR_8;
 bool VAR_9 = 0;

 do {
  if (!VAR_6)
   FUNC_0(VAR_5->stats.alloc);
  else
   FUNC_0(VAR_5->stats.sleep_alloc);

  VAR_8 = VAR_6 ? VAR_3 : VAR_4;
  VAR_7 = FUNC_2(VAR_8);
  if (!VAR_7) {
   if (!VAR_6)
    FUNC_0(VAR_5->stats.alloc_fail);
   else
    FUNC_0(VAR_5->stats.sleep_alloc_fail);
   return -VAR_1;
  }


  VAR_9 = FUNC_5(VAR_5, FUNC_4(VAR_7));
  if (!VAR_9) {
   FUNC_0(VAR_5->stats.refused_alloc);

   if (VAR_5->reset_required) {
    FUNC_1(VAR_7);
    return -VAR_0;
   }






   FUNC_3(&VAR_7->lru, &VAR_5->refused_pages);
   if (++VAR_5->n_refused_pages >= VAR_2)
    return -VAR_0;
  }
 } while (!VAR_9);


 FUNC_3(&VAR_7->lru, &VAR_5->pages);


 VAR_5->size++;

 return 0;
}
