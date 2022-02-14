
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct uhci_td {int frame; int fl_list; int list; int dma_handle; } ;
struct uhci_hcd {int td_pool; } ;
typedef int dma_addr_t ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 struct uhci_td* FUNC_1 (int ,int ,int *) ;

__attribute__((used)) static struct uhci_td *FUNC_2(struct uhci_hcd *VAR_1)
{
 dma_addr_t VAR_2;
 struct uhci_td *VAR_3;

 VAR_3 = FUNC_1(VAR_1->td_pool, VAR_0, &VAR_2);
 if (!VAR_3)
  return ((void*)0);

 VAR_3->dma_handle = VAR_2;
 VAR_3->frame = -1;

 FUNC_0(&VAR_3->list);
 FUNC_0(&VAR_3->fl_list);

 return VAR_3;
}
