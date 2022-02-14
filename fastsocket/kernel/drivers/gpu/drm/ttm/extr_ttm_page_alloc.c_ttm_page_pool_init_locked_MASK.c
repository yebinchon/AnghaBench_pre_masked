
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ttm_page_pool {int fill_lock; int gfp_flags; char* name; scalar_t__ nfrees; scalar_t__ npages; int list; int lock; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static void FUNC_2(struct ttm_page_pool *VAR_0, int VAR_1,
  char *VAR_2)
{
 FUNC_1(&VAR_0->lock);
 VAR_0->fill_lock = 0;
 FUNC_0(&VAR_0->list);
 VAR_0->npages = VAR_0->nfrees = 0;
 VAR_0->gfp_flags = VAR_1;
 VAR_0->name = VAR_2;
}
