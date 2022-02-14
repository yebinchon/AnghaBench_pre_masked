
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ehci_qh_hw {int dummy; } ;
struct ehci_qh {int refcount; int qh_dma; struct ehci_qh_hw* hw; int * dummy; int qtd_list; struct ehci_hcd* ehci; } ;
struct ehci_hcd {int qh_pool; } ;
typedef int gfp_t ;
typedef int dma_addr_t ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (int ,int ,int *) ;
 int FUNC_2 (int ,struct ehci_qh_hw*,int ) ;
 int FUNC_3 (struct ehci_hcd*,char*) ;
 int * FUNC_4 (struct ehci_hcd*,int ) ;
 int FUNC_5 (struct ehci_qh*) ;
 struct ehci_qh* FUNC_6 (int,int ) ;
 int FUNC_7 (struct ehci_qh_hw*,int ,int) ;

__attribute__((used)) static struct ehci_qh *FUNC_8 (struct ehci_hcd *VAR_1, gfp_t VAR_2)
{
 struct ehci_qh *VAR_3;
 dma_addr_t VAR_4;

 VAR_3 = FUNC_6(sizeof *VAR_3, VAR_0);
 if (!VAR_3)
  goto done;
 VAR_3->hw = (struct ehci_qh_hw *)
  FUNC_1(VAR_1->qh_pool, VAR_2, &VAR_4);
 if (!VAR_3->hw)
  goto fail;
 FUNC_7(VAR_3->hw, 0, sizeof *VAR_3->hw);
 VAR_3->refcount = 1;
 VAR_3->ehci = VAR_1;
 VAR_3->qh_dma = VAR_4;

 FUNC_0 (&VAR_3->qtd_list);


 VAR_3->dummy = FUNC_4 (VAR_1, VAR_2);
 if (VAR_3->dummy == ((void*)0)) {
  FUNC_3 (VAR_1, "no dummy td\n");
  goto fail1;
 }
done:
 return VAR_3;
fail1:
 FUNC_2(VAR_1->qh_pool, VAR_3->hw, VAR_3->qh_dma);
fail:
 FUNC_5(VAR_3);
 return ((void*)0);
}
