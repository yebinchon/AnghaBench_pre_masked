
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_8__ ;
typedef struct TYPE_14__ TYPE_7__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef int u8 ;
typedef int u64 ;
struct pci_dev {scalar_t__ bus; scalar_t__ devfn; } ;
struct falcon_nic_data {int stats_disable_count; struct pci_dev* pci_dev2; int stats_timer; } ;
struct TYPE_10__ {int * parent; } ;
struct TYPE_13__ {int name; TYPE_1__ dev; TYPE_7__* algo_data; int owner; } ;
struct TYPE_14__ {struct efx_nic* data; } ;
struct falcon_board {TYPE_4__ i2c_adap; TYPE_2__* type; TYPE_7__ i2c_data; } ;
struct TYPE_15__ {int dma_addr; int addr; } ;
struct efx_nic {int timer_quantum_ns; struct falcon_nic_data* nic_data; TYPE_8__ irq_status; int net_dev; TYPE_3__* pci_dev; } ;
typedef int efx_oword_t ;
struct TYPE_12__ {int revision; scalar_t__ bus; scalar_t__ devfn; int dev; } ;
struct TYPE_11__ {int (* init ) (struct efx_nic*) ;} ;


 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int ,int ) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_2 (struct efx_nic*,int ) ;
 int FUNC_3 (struct efx_nic*,TYPE_8__*,int) ;
 scalar_t__ FUNC_4 (struct efx_nic*) ;
 int FUNC_5 (struct efx_nic*,TYPE_8__*) ;
 scalar_t__ FUNC_6 (struct efx_nic*) ;
 int FUNC_7 (struct efx_nic*,int *,int ) ;
 struct falcon_board* FUNC_8 (struct efx_nic*) ;
 TYPE_7__ VAR_12 ;
 int FUNC_9 (struct efx_nic*) ;
 int FUNC_10 (struct efx_nic*) ;
 int VAR_13 ;
 int FUNC_11 (TYPE_4__*) ;
 int FUNC_12 (TYPE_4__*) ;
 int FUNC_13 (struct falcon_nic_data*) ;
 struct falcon_nic_data* FUNC_14 (int,int ) ;
 int FUNC_15 (TYPE_4__*,int ,int) ;
 int FUNC_16 (struct efx_nic*,int ,int ,char*,int ,int ,int ) ;
 int FUNC_17 (struct efx_nic*,int ,int ,char*) ;
 struct pci_dev* FUNC_18 (TYPE_3__*) ;
 int FUNC_19 (struct pci_dev*) ;
 struct pci_dev* FUNC_20 (int ,int ,struct pci_dev*) ;
 int VAR_14 ;
 int FUNC_21 (int *,int *,unsigned long) ;
 int FUNC_22 (int ,char*,int) ;
 int FUNC_23 (struct efx_nic*) ;
 scalar_t__ FUNC_24 (int ) ;

__attribute__((used)) static int FUNC_25(struct efx_nic *VAR_15)
{
 struct falcon_nic_data *VAR_16;
 struct falcon_board *VAR_17;
 int VAR_18;


 VAR_16 = FUNC_14(sizeof(*VAR_16), VAR_9);
 if (!VAR_16)
  return -VAR_4;
 VAR_15->nic_data = VAR_16;

 VAR_18 = -VAR_3;

 if (FUNC_4(VAR_15) != 0) {
  FUNC_17(VAR_15, VAR_14, VAR_15->net_dev,
     "Falcon FPGA not supported\n");
  goto fail1;
 }

 if (FUNC_6(VAR_15) <= VAR_0) {
  efx_oword_t VAR_19;
  struct pci_dev *VAR_20;
  u8 VAR_21 = VAR_15->pci_dev->revision;

  if ((VAR_21 == 0xff) || (VAR_21 == 0)) {
   FUNC_17(VAR_15, VAR_14, VAR_15->net_dev,
      "Falcon rev A0 not supported\n");
   goto fail1;
  }
  FUNC_7(VAR_15, &VAR_19, VAR_8);
  if (FUNC_1(VAR_19, VAR_7) == 0) {
   FUNC_17(VAR_15, VAR_14, VAR_15->net_dev,
      "Falcon rev A1 1G not supported\n");
   goto fail1;
  }
  if (FUNC_1(VAR_19, VAR_6) == 0) {
   FUNC_17(VAR_15, VAR_14, VAR_15->net_dev,
      "Falcon rev A1 PCI-X not supported\n");
   goto fail1;
  }

  VAR_20 = FUNC_18(VAR_15->pci_dev);
  while ((VAR_20 = FUNC_20(VAR_1, VAR_5,
          VAR_20))) {
   if (VAR_20->bus == VAR_15->pci_dev->bus &&
       VAR_20->devfn == VAR_15->pci_dev->devfn + 1) {
    VAR_16->pci_dev2 = VAR_20;
    break;
   }
  }
  if (!VAR_16->pci_dev2) {
   FUNC_17(VAR_15, VAR_14, VAR_15->net_dev,
      "failed to find secondary function\n");
   VAR_18 = -VAR_3;
   goto fail2;
  }
 }


 VAR_18 = FUNC_2(VAR_15, VAR_10);
 if (VAR_18) {
  FUNC_17(VAR_15, VAR_14, VAR_15->net_dev, "failed to reset NIC\n");
  goto fail3;
 }


 VAR_18 = FUNC_3(VAR_15, &VAR_15->irq_status, sizeof(efx_oword_t));
 if (VAR_18)
  goto fail4;
 FUNC_0(VAR_15->irq_status.dma_addr & 0x0f);

 FUNC_16(VAR_15, VAR_14, VAR_15->net_dev,
    "INT_KER at %llx (virt %p phys %llx)\n",
    (u64)VAR_15->irq_status.dma_addr,
    VAR_15->irq_status.addr,
    (u64)FUNC_24(VAR_15->irq_status.addr));

 FUNC_10(VAR_15);


 VAR_18 = FUNC_9(VAR_15);
 if (VAR_18) {
  if (VAR_18 == -VAR_2)
   FUNC_17(VAR_15, VAR_14, VAR_15->net_dev, "NVRAM is invalid\n");
  goto fail5;
 }

 VAR_15->timer_quantum_ns = 4968;


 VAR_17 = FUNC_8(VAR_15);
 VAR_17->i2c_adap.owner = VAR_11;
 VAR_17->i2c_data = VAR_12;
 VAR_17->i2c_data.data = VAR_15;
 VAR_17->i2c_adap.algo_data = &VAR_17->i2c_data;
 VAR_17->i2c_adap.dev.parent = &VAR_15->pci_dev->dev;
 FUNC_22(VAR_17->i2c_adap.name, "SFC4000 GPIO",
  sizeof(VAR_17->i2c_adap.name));
 VAR_18 = FUNC_11(&VAR_17->i2c_adap);
 if (VAR_18)
  goto fail5;

 VAR_18 = FUNC_8(VAR_15)->type->init(VAR_15);
 if (VAR_18) {
  FUNC_17(VAR_15, VAR_14, VAR_15->net_dev,
     "failed to initialise board\n");
  goto fail6;
 }

 VAR_16->stats_disable_count = 1;
 FUNC_21(&VAR_16->stats_timer, &VAR_13,
      (unsigned long)VAR_15);

 return 0;

 fail6:
 FUNC_0(FUNC_12(&VAR_17->i2c_adap));
 FUNC_15(&VAR_17->i2c_adap, 0, sizeof(VAR_17->i2c_adap));
 fail5:
 FUNC_5(VAR_15, &VAR_15->irq_status);
 fail4:
 fail3:
 if (VAR_16->pci_dev2) {
  FUNC_19(VAR_16->pci_dev2);
  VAR_16->pci_dev2 = ((void*)0);
 }
 fail2:
 fail1:
 FUNC_13(VAR_15->nic_data);
 return VAR_18;
}
