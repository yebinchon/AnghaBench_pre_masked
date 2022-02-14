
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct xhci_stream_ctx {int dummy; } ;
struct xhci_hcd {int medium_streams_pool; int small_streams_pool; } ;
struct pci_dev {int dev; } ;
typedef int dma_addr_t ;
struct TYPE_3__ {int controller; } ;
struct TYPE_4__ {TYPE_1__ self; } ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 int FUNC_0 (int *,int,struct xhci_stream_ctx*,int ) ;
 void FUNC_1 (int ,struct xhci_stream_ctx*,int ) ;
 struct pci_dev* FUNC_2 (int ) ;
 TYPE_2__* FUNC_3 (struct xhci_hcd*) ;

__attribute__((used)) static void FUNC_4(struct xhci_hcd *VAR_2,
  unsigned int VAR_3,
  struct xhci_stream_ctx *VAR_4, dma_addr_t VAR_5)
{
 struct pci_dev *VAR_6 = FUNC_2(FUNC_3(VAR_2)->self.controller);

 if (VAR_3 > VAR_0)
  FUNC_0(&VAR_6->dev,
    sizeof(struct xhci_stream_ctx)*VAR_3,
    VAR_4, VAR_5);
 else if (VAR_3 <= VAR_1)
  return FUNC_1(VAR_2->small_streams_pool,
    VAR_4, VAR_5);
 else
  return FUNC_1(VAR_2->medium_streams_pool,
    VAR_4, VAR_5);
}
