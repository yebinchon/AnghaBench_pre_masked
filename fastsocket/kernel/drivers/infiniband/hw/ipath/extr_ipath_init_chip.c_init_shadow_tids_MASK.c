
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct page {int dummy; } ;
struct ipath_devdata {int ipath_cfgports; int ipath_rcvtidcnt; int * ipath_physshadow; struct page** ipath_pageshadow; } ;
typedef int dma_addr_t ;


 int FUNC_0 (struct ipath_devdata*,char*) ;
 int FUNC_1 (struct page**) ;
 int * FUNC_2 (int) ;
 struct page** FUNC_3 (int) ;

__attribute__((used)) static void FUNC_4(struct ipath_devdata *VAR_0)
{
 struct page **VAR_1;
 dma_addr_t *VAR_2;

 VAR_1 = FUNC_3(VAR_0->ipath_cfgports * VAR_0->ipath_rcvtidcnt *
   sizeof(struct page *));
 if (!VAR_1) {
  FUNC_0(VAR_0, "failed to allocate shadow page * "
         "array, no expected sends!\n");
  VAR_0->ipath_pageshadow = ((void*)0);
  return;
 }

 VAR_2 = FUNC_2(VAR_0->ipath_cfgports * VAR_0->ipath_rcvtidcnt *
   sizeof(dma_addr_t));
 if (!VAR_2) {
  FUNC_0(VAR_0, "failed to allocate shadow dma handle "
         "array, no expected sends!\n");
  FUNC_1(VAR_1);
  VAR_0->ipath_pageshadow = ((void*)0);
  return;
 }

 VAR_0->ipath_pageshadow = VAR_1;
 VAR_0->ipath_physshadow = VAR_2;
}
