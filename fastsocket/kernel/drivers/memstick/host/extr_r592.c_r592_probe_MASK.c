
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct r592_device {int mmio; int io_thread; int dummy_dma_page_physical_address; scalar_t__ dummy_dma_page; int irq; int detect_timer; int pio_fifo; int dma_done; int io_thread_lock; int irq_lock; struct pci_dev* pci_dev; struct memstick_host* host; } ;
struct pci_device_id {int dummy; } ;
struct pci_dev {int irq; int dev; } ;
struct memstick_host {int set_param; int request; int caps; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ) ;
 int VAR_2 ;
 scalar_t__ FUNC_2 (int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,struct r592_device*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ,struct r592_device*,char*) ;
 int FUNC_8 (int ) ;
 scalar_t__ FUNC_9 (struct memstick_host*) ;
 struct memstick_host* FUNC_10 (int,int *) ;
 int FUNC_11 (struct memstick_host*) ;
 struct r592_device* FUNC_12 (struct memstick_host*) ;
 int FUNC_13 (char*) ;
 scalar_t__ FUNC_14 (struct pci_dev*,int ,int *) ;
 int FUNC_15 (struct pci_dev*) ;
 int FUNC_16 (struct pci_dev*) ;
 int FUNC_17 (struct pci_dev*,int ,scalar_t__,int ) ;
 int FUNC_18 (struct pci_dev*,int ) ;
 int FUNC_19 (struct pci_dev*) ;
 int FUNC_20 (struct pci_dev*,int ) ;
 int FUNC_21 (struct pci_dev*,int ) ;
 int FUNC_22 (struct pci_dev*,struct r592_device*) ;
 int FUNC_23 (struct pci_dev*) ;
 int FUNC_24 (struct r592_device*) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_25 (struct r592_device*,int ) ;
 int VAR_9 ;
 int FUNC_26 (struct r592_device*) ;
 scalar_t__ FUNC_27 (int ,int *,int ,int ,struct r592_device*) ;
 int FUNC_28 (int *,int ,unsigned long) ;
 int FUNC_29 (int *) ;

__attribute__((used)) static int FUNC_30(struct pci_dev *VAR_10, const struct pci_device_id *VAR_11)
{
 int VAR_12 = -VAR_1;
 struct memstick_host *VAR_13;
 struct r592_device *VAR_14;


 VAR_13 = FUNC_10(sizeof(struct r592_device), &VAR_10->dev);
 if (!VAR_13)
  goto error1;

 VAR_14 = FUNC_12(VAR_13);
 VAR_14->host = VAR_13;
 VAR_14->pci_dev = VAR_10;
 FUNC_22(VAR_10, VAR_14);


 VAR_12 = FUNC_16(VAR_10);
 if (VAR_12)
  goto error2;

 FUNC_23(VAR_10);
 VAR_12 = FUNC_21(VAR_10, FUNC_0(32));
 if (VAR_12)
  goto error3;

 VAR_12 = FUNC_20(VAR_10, VAR_0);
 if (VAR_12)
  goto error3;

 VAR_14->mmio = FUNC_18(VAR_10, 0);
 if (!VAR_14->mmio)
  goto error4;

 VAR_14->irq = VAR_10->irq;
 FUNC_29(&VAR_14->irq_lock);
 FUNC_29(&VAR_14->io_thread_lock);
 FUNC_5(&VAR_14->dma_done);
 FUNC_1(VAR_14->pio_fifo);
 FUNC_28(&VAR_14->detect_timer,
  VAR_5, (long unsigned int)VAR_14);


 VAR_13->caps = VAR_3;
 VAR_13->request = VAR_9;
 VAR_13->set_param = VAR_8;
 FUNC_24(VAR_14);

 VAR_14->io_thread = FUNC_7(VAR_7, VAR_14, "r592_io");
 if (FUNC_2(VAR_14->io_thread)) {
  VAR_12 = FUNC_3(VAR_14->io_thread);
  goto error5;
 }


 VAR_14->dummy_dma_page = FUNC_14(VAR_10, VAR_4,
  &VAR_14->dummy_dma_page_physical_address);
 FUNC_25(VAR_14 , 0);

 if (FUNC_27(VAR_14->irq, &VAR_6, VAR_2,
     VAR_0, VAR_14))
  goto error6;

 FUNC_26(VAR_14);
 if (FUNC_9(VAR_13))
  goto error7;

 FUNC_13("driver succesfully loaded");
 return 0;
error7:
 FUNC_4(VAR_14->irq, VAR_14);
error6:
 if (VAR_14->dummy_dma_page)
  FUNC_17(VAR_10, VAR_4, VAR_14->dummy_dma_page,
   VAR_14->dummy_dma_page_physical_address);

 FUNC_8(VAR_14->io_thread);
error5:
 FUNC_6(VAR_14->mmio);
error4:
 FUNC_19(VAR_10);
error3:
 FUNC_15(VAR_10);
error2:
 FUNC_11(VAR_13);
error1:
 return VAR_12;
}
