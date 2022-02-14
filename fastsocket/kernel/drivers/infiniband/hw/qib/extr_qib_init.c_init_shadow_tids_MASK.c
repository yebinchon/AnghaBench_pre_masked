
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct qib_devdata {int cfgctxts; int rcvtidcnt; struct page** pageshadow; int * physshadow; } ;
struct page {int dummy; } ;
typedef int dma_addr_t ;


 int FUNC_0 (struct qib_devdata*,char*) ;
 int FUNC_1 (struct page**) ;
 void* FUNC_2 (int) ;

__attribute__((used)) static void FUNC_3(struct qib_devdata *VAR_0)
{
 struct page **VAR_1;
 dma_addr_t *VAR_2;

 VAR_1 = FUNC_2(VAR_0->cfgctxts * VAR_0->rcvtidcnt * sizeof(struct page *));
 if (!VAR_1) {
  FUNC_0(VAR_0,
   "failed to allocate shadow page * array, no expected sends!\n");
  goto bail;
 }

 VAR_2 = FUNC_2(VAR_0->cfgctxts * VAR_0->rcvtidcnt * sizeof(dma_addr_t));
 if (!VAR_2) {
  FUNC_0(VAR_0,
   "failed to allocate shadow dma handle array, no expected sends!\n");
  goto bail_free;
 }

 VAR_0->pageshadow = VAR_1;
 VAR_0->physshadow = VAR_2;
 return;

bail_free:
 FUNC_1(VAR_1);
bail:
 VAR_0->pageshadow = ((void*)0);
}
