
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_5__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct msix_entry {unsigned int entry; int vector; } ;
struct efx_nic {scalar_t__ interrupt_mode; unsigned int n_channels; unsigned int n_tx_channels; unsigned int n_rx_channels; int rss_spread; TYPE_2__** extra_channel_type; TYPE_3__* pci_dev; int legacy_irq; int net_dev; TYPE_1__* type; } ;
struct TYPE_9__ {TYPE_2__* type; int irq; } ;
struct TYPE_8__ {int irq; } ;
struct TYPE_7__ {int (* handle_no_channel ) (struct efx_nic*) ;} ;
struct TYPE_6__ {unsigned int phys_addr_channels; } ;


 int FUNC_0 (int) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 unsigned int VAR_4 ;
 int VAR_5 ;
 TYPE_5__* FUNC_1 (struct efx_nic*,unsigned int) ;
 int FUNC_2 (struct efx_nic*) ;
 int FUNC_3 (struct efx_nic*) ;
 unsigned int FUNC_4 (struct efx_nic*) ;
 void* FUNC_5 (unsigned int,unsigned int) ;
 unsigned int FUNC_6 (unsigned int,unsigned int) ;
 int FUNC_7 (struct efx_nic*,int ,int ,char*,...) ;
 int FUNC_8 (TYPE_3__*) ;
 int FUNC_9 (TYPE_3__*,struct msix_entry*,unsigned int) ;
 scalar_t__ VAR_6 ;
 int FUNC_10 (struct efx_nic*) ;

__attribute__((used)) static int FUNC_11(struct efx_nic *VAR_7)
{
 unsigned int VAR_8 =
  FUNC_6(VAR_7->type->phys_addr_channels, VAR_3);
 unsigned int VAR_9 = 0;
 unsigned int VAR_10, VAR_11;
 int VAR_12;

 for (VAR_10 = 0; VAR_10 < VAR_4; VAR_10++)
  if (VAR_7->extra_channel_type[VAR_10])
   ++VAR_9;

 if (VAR_7->interrupt_mode == VAR_2) {
  struct msix_entry VAR_13[VAR_3];
  unsigned int VAR_14;

  VAR_14 = FUNC_4(VAR_7);
  if (VAR_6)
   VAR_14 *= 2;
  VAR_14 += VAR_9;
  VAR_14 = FUNC_6(VAR_14, VAR_8);

  for (VAR_10 = 0; VAR_10 < VAR_14; VAR_10++)
   VAR_13[VAR_10].entry = VAR_10;
  VAR_12 = FUNC_9(VAR_7->pci_dev, VAR_13, VAR_14);
  if (VAR_12 > 0) {
   FUNC_7(VAR_7, VAR_5, VAR_7->net_dev,
      "WARNING: Insufficient MSI-X vectors"
      " available (%d < %u).\n", VAR_12, VAR_14);
   FUNC_7(VAR_7, VAR_5, VAR_7->net_dev,
      "WARNING: Performance may be reduced.\n");
   FUNC_0(VAR_12 >= VAR_14);
   VAR_14 = VAR_12;
   VAR_12 = FUNC_9(VAR_7->pci_dev, VAR_13,
          VAR_14);
  }

  if (VAR_12 == 0) {
   VAR_7->n_channels = VAR_14;
   if (VAR_14 > VAR_9)
    VAR_14 -= VAR_9;
   if (VAR_6) {
    VAR_7->n_tx_channels = FUNC_5(VAR_14 / 2, 1U);
    VAR_7->n_rx_channels = FUNC_5(VAR_14 -
        VAR_7->n_tx_channels,
        1U);
   } else {
    VAR_7->n_tx_channels = VAR_14;
    VAR_7->n_rx_channels = VAR_14;
   }
   for (VAR_10 = 0; VAR_10 < VAR_7->n_channels; VAR_10++)
    FUNC_1(VAR_7, VAR_10)->irq =
     VAR_13[VAR_10].vector;
  } else {

   VAR_7->interrupt_mode = VAR_1;
   FUNC_7(VAR_7, VAR_5, VAR_7->net_dev,
      "could not enable MSI-X\n");
  }
 }


 if (VAR_7->interrupt_mode == VAR_1) {
  VAR_7->n_channels = 1;
  VAR_7->n_rx_channels = 1;
  VAR_7->n_tx_channels = 1;
  VAR_12 = FUNC_8(VAR_7->pci_dev);
  if (VAR_12 == 0) {
   FUNC_1(VAR_7, 0)->irq = VAR_7->pci_dev->irq;
  } else {
   FUNC_7(VAR_7, VAR_5, VAR_7->net_dev,
      "could not enable MSI\n");
   VAR_7->interrupt_mode = VAR_0;
  }
 }


 if (VAR_7->interrupt_mode == VAR_0) {
  VAR_7->n_channels = 1 + (VAR_6 ? 1 : 0);
  VAR_7->n_rx_channels = 1;
  VAR_7->n_tx_channels = 1;
  VAR_7->legacy_irq = VAR_7->pci_dev->irq;
 }


 VAR_11 = VAR_7->n_channels;
 for (VAR_10 = 0; VAR_10 < VAR_4; VAR_10++) {
  if (!VAR_7->extra_channel_type[VAR_10])
   continue;
  if (VAR_7->interrupt_mode != VAR_2 ||
   VAR_7->n_channels <= VAR_9) {
   VAR_7->extra_channel_type[VAR_10]->handle_no_channel(VAR_7);
  } else {
   --VAR_11;
   FUNC_1(VAR_7, VAR_11)->type =
    VAR_7->extra_channel_type[VAR_10];
  }
 }


 VAR_7->rss_spread = ((VAR_7->n_rx_channels > 1 || !FUNC_2(VAR_7)) ?
      VAR_7->n_rx_channels : FUNC_3(VAR_7));

 return 0;
}
