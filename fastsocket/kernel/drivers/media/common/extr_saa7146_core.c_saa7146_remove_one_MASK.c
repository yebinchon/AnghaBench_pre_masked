
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct v4l2_device {int dummy; } ;
struct TYPE_7__ {int dma_handle; int * cpu_addr; } ;
struct TYPE_6__ {int dma_handle; int * cpu_addr; } ;
struct TYPE_5__ {int dma_handle; int * cpu_addr; } ;
struct saa7146_dev {int item; int mem; TYPE_4__* ext; TYPE_3__ d_rps0; TYPE_2__ d_rps1; TYPE_1__ d_i2c; } ;
struct pci_dev {int irq; } ;
typedef int dma_addr_t ;
struct TYPE_8__ {int (* detach ) (struct saa7146_dev*) ;} ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int ,struct saa7146_dev*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct saa7146_dev*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (struct pci_dev*) ;
 int FUNC_6 (struct pci_dev*,int ,void*,int ) ;
 struct v4l2_device* FUNC_7 (struct pci_dev*) ;
 int FUNC_8 (struct pci_dev*,int ) ;
 int FUNC_9 (struct pci_dev*,int *) ;
 int VAR_3 ;
 int FUNC_10 (struct saa7146_dev*,int ,int) ;
 int FUNC_11 (struct saa7146_dev*) ;
 struct saa7146_dev* FUNC_12 (struct v4l2_device*) ;

__attribute__((used)) static void FUNC_13(struct pci_dev *VAR_4)
{
 struct v4l2_device *VAR_5 = FUNC_7(VAR_4);
 struct saa7146_dev *VAR_6 = FUNC_12(VAR_5);
 struct {
  void *addr;
  dma_addr_t dma;
 } VAR_7[] = {
  { VAR_6->d_i2c.cpu_addr, VAR_6->d_i2c.dma_handle },
  { VAR_6->d_rps1.cpu_addr, VAR_6->d_rps1.dma_handle },
  { VAR_6->d_rps0.cpu_addr, VAR_6->d_rps0.dma_handle },
  { ((void*)0), 0 }
 }, *VAR_8;

 FUNC_0(("dev:%p\n",VAR_6));

 VAR_6->ext->detach(VAR_6);

 FUNC_9(VAR_4, ((void*)0));


 FUNC_10(VAR_6, VAR_1, 0x00ff0000);


 FUNC_10(VAR_6, VAR_0, 0);

 FUNC_1(VAR_4->irq, VAR_6);

 for (VAR_8 = VAR_7; VAR_8->addr; VAR_8++)
  FUNC_6(VAR_4, VAR_2, VAR_8->addr, VAR_8->dma);

 FUNC_2(VAR_6->mem);
 FUNC_8(VAR_4, 0);
 FUNC_4(&VAR_6->item);
 FUNC_5(VAR_4);
 FUNC_3(VAR_6);

 VAR_3--;
}
