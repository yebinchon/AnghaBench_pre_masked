
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct xhci_hcd {int dummy; } ;
struct xhci_erst_entry {int rsvd; int seg_size; int seg_addr; } ;
struct xhci_erst {int erst_dma_addr; int num_entries; struct xhci_erst_entry* entries; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (struct xhci_hcd*,char*,int,int ,int ,int ,int ) ;

void FUNC_5(struct xhci_hcd *VAR_0, struct xhci_erst *VAR_1)
{
 u64 VAR_2 = VAR_1->erst_dma_addr;
 int VAR_3;
 struct xhci_erst_entry *VAR_4;

 for (VAR_3 = 0; VAR_3 < VAR_1->num_entries; ++VAR_3) {
  VAR_4 = &VAR_1->entries[VAR_3];
  FUNC_4(VAR_0, "@%016llx %08x %08x %08x %08x\n",
    VAR_2,
    FUNC_2(FUNC_1(VAR_4->seg_addr)),
    FUNC_3(FUNC_1(VAR_4->seg_addr)),
    FUNC_0(VAR_4->seg_size),
    FUNC_0(VAR_4->rsvd));
  VAR_2 += sizeof(*VAR_4);
 }
}
