
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct uhci_td {int dma_handle; int fl_list; int list; } ;
struct uhci_hcd {int td_pool; } ;


 int FUNC_0 (int ,char*,struct uhci_td*) ;
 int FUNC_1 (int ,struct uhci_td*,int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct uhci_hcd*) ;

__attribute__((used)) static void FUNC_4(struct uhci_hcd *VAR_0, struct uhci_td *VAR_1)
{
 if (!FUNC_2(&VAR_1->list))
  FUNC_0(FUNC_3(VAR_0), "td %p still in list!\n", VAR_1);
 if (!FUNC_2(&VAR_1->fl_list))
  FUNC_0(FUNC_3(VAR_0), "td %p still in fl_list!\n", VAR_1);

 FUNC_1(VAR_0->td_pool, VAR_1, VAR_1->dma_handle);
}
