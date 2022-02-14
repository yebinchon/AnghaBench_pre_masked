
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct r592_device {int dummy_dma_page_physical_address; scalar_t__ dummy_dma_page; int host; int mmio; int irq; TYPE_1__* req; int io_thread; } ;
struct pci_dev {int dummy; } ;
struct TYPE_2__ {int error; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,struct r592_device*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,TYPE_1__**) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (struct pci_dev*) ;
 int FUNC_7 (struct pci_dev*,int ,scalar_t__,int ) ;
 struct r592_device* FUNC_8 (struct pci_dev*) ;
 int FUNC_9 (struct pci_dev*) ;
 int FUNC_10 (struct r592_device*,int) ;

__attribute__((used)) static void FUNC_11(struct pci_dev *VAR_2)
{
 int VAR_3 = 0;
 struct r592_device *VAR_4 = FUNC_8(VAR_2);



 FUNC_2(VAR_4->io_thread);

 FUNC_10(VAR_4, 0);

 while (!VAR_3 && VAR_4->req) {
  VAR_4->req->error = -VAR_0;
  VAR_3 = FUNC_4(VAR_4->host, &VAR_4->req);
 }
 FUNC_5(VAR_4->host);

 FUNC_0(VAR_4->irq, VAR_4);
 FUNC_1(VAR_4->mmio);
 FUNC_9(VAR_2);
 FUNC_6(VAR_2);
 FUNC_3(VAR_4->host);

 if (VAR_4->dummy_dma_page)
  FUNC_7(VAR_2, VAR_1, VAR_4->dummy_dma_page,
   VAR_4->dummy_dma_page_physical_address);
}
