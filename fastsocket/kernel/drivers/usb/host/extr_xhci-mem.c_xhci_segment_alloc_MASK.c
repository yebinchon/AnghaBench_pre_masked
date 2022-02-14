
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct xhci_segment {int * next; int dma; TYPE_2__* trbs; } ;
struct xhci_hcd {int segment_pool; } ;
typedef int gfp_t ;
typedef int dma_addr_t ;
struct TYPE_4__ {int control; } ;
struct TYPE_5__ {TYPE_1__ link; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_2__* FUNC_0 (int ,int ,int *) ;
 int FUNC_1 (struct xhci_segment*) ;
 struct xhci_segment* FUNC_2 (int,int ) ;
 int FUNC_3 (TYPE_2__*,int ,int ) ;

__attribute__((used)) static struct xhci_segment *FUNC_4(struct xhci_hcd *VAR_3,
     unsigned int VAR_4, gfp_t VAR_5)
{
 struct xhci_segment *VAR_6;
 dma_addr_t VAR_7;
 int VAR_8;

 VAR_6 = FUNC_2(sizeof *VAR_6, VAR_5);
 if (!VAR_6)
  return ((void*)0);

 VAR_6->trbs = FUNC_0(VAR_3->segment_pool, VAR_5, &VAR_7);
 if (!VAR_6->trbs) {
  FUNC_1(VAR_6);
  return ((void*)0);
 }

 FUNC_3(VAR_6->trbs, 0, VAR_2);

 if (VAR_4 == 0) {
  for (VAR_8 = 0; VAR_8 < VAR_0; VAR_8++)
   VAR_6->trbs[VAR_8].link.control |= VAR_1;
 }
 VAR_6->dma = VAR_7;
 VAR_6->next = ((void*)0);

 return VAR_6;
}
