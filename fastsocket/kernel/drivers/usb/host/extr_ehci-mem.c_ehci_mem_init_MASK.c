
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct ehci_sitd {int dummy; } ;
struct ehci_qtd {int dummy; } ;
struct ehci_qh_hw {int hw_token; void* hw_alt_next; void* hw_qtd_next; void* hw_next; } ;
struct ehci_itd {int dummy; } ;
struct ehci_hcd {int periodic_size; int * pshadow; void** periodic; TYPE_2__* dummy; scalar_t__ use_dummy_qh; int periodic_dma; void* sitd_pool; void* itd_pool; void* async; void* qh_pool; void* qtd_pool; } ;
typedef int gfp_t ;
typedef void* __le32 ;
struct TYPE_4__ {int controller; } ;
struct TYPE_6__ {TYPE_1__ self; } ;
struct TYPE_5__ {void* qh_dma; struct ehci_qh_hw* hw; } ;


 void* FUNC_0 (struct ehci_hcd*) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (int ,int,int *,int ) ;
 void* FUNC_2 (char*,int ,int,int,int) ;
 int FUNC_3 (struct ehci_hcd*,char*) ;
 int FUNC_4 (struct ehci_hcd*) ;
 void* FUNC_5 (struct ehci_hcd*,int ) ;
 TYPE_3__* FUNC_6 (struct ehci_hcd*) ;
 int * FUNC_7 (int,int,int ) ;

__attribute__((used)) static int FUNC_8 (struct ehci_hcd *VAR_2, gfp_t VAR_3)
{
 int VAR_4;


 VAR_2->qtd_pool = FUNC_2 ("ehci_qtd",
   FUNC_6(VAR_2)->self.controller,
   sizeof (struct ehci_qtd),
   32 ,
   4096 );
 if (!VAR_2->qtd_pool) {
  goto fail;
 }


 VAR_2->qh_pool = FUNC_2 ("ehci_qh",
   FUNC_6(VAR_2)->self.controller,
   sizeof(struct ehci_qh_hw),
   32 ,
   4096 );
 if (!VAR_2->qh_pool) {
  goto fail;
 }
 VAR_2->async = FUNC_5 (VAR_2, VAR_3);
 if (!VAR_2->async) {
  goto fail;
 }


 VAR_2->itd_pool = FUNC_2 ("ehci_itd",
   FUNC_6(VAR_2)->self.controller,
   sizeof (struct ehci_itd),
   32 ,
   4096 );
 if (!VAR_2->itd_pool) {
  goto fail;
 }


 VAR_2->sitd_pool = FUNC_2 ("ehci_sitd",
   FUNC_6(VAR_2)->self.controller,
   sizeof (struct ehci_sitd),
   32 ,
   4096 );
 if (!VAR_2->sitd_pool) {
  goto fail;
 }


 VAR_2->periodic = (__le32 *)
  FUNC_1 (FUNC_6(VAR_2)->self.controller,
   VAR_2->periodic_size * sizeof(__le32),
   &VAR_2->periodic_dma, 0);
 if (VAR_2->periodic == ((void*)0)) {
  goto fail;
 }

 if (VAR_2->use_dummy_qh) {
  struct ehci_qh_hw *VAR_5;
  VAR_2->dummy = FUNC_5(VAR_2, VAR_3);
  if (!VAR_2->dummy)
   goto fail;

  VAR_5 = VAR_2->dummy->hw;
  VAR_5->hw_next = FUNC_0(VAR_2);
  VAR_5->hw_qtd_next = FUNC_0(VAR_2);
  VAR_5->hw_alt_next = FUNC_0(VAR_2);
  VAR_5->hw_token &= ~VAR_1;
  VAR_2->dummy->hw = VAR_5;

  for (VAR_4 = 0; VAR_4 < VAR_2->periodic_size; VAR_4++)
   VAR_2->periodic[VAR_4] = VAR_2->dummy->qh_dma;
 } else {
  for (VAR_4 = 0; VAR_4 < VAR_2->periodic_size; VAR_4++)
   VAR_2->periodic[VAR_4] = FUNC_0(VAR_2);
 }


 VAR_2->pshadow = FUNC_7(VAR_2->periodic_size, sizeof(void *), VAR_3);
 if (VAR_2->pshadow != ((void*)0))
  return 0;

fail:
 FUNC_3 (VAR_2, "couldn't init memory\n");
 FUNC_4 (VAR_2);
 return -VAR_0;
}
