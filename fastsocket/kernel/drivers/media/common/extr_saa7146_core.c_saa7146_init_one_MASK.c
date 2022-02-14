
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct saa7146_pci_extension_data {struct saa7146_extension* ext; } ;
struct saa7146_extension {scalar_t__ (* attach ) (struct saa7146_dev*,struct saa7146_pci_extension_data*) ;scalar_t__ (* probe ) (struct saa7146_dev*) ;} ;
struct TYPE_6__ {int dma_handle; void* cpu_addr; } ;
struct TYPE_5__ {int dma_handle; void* cpu_addr; } ;
struct TYPE_4__ {int dma_handle; void* cpu_addr; } ;
struct saa7146_dev {int revision; int mem; TYPE_3__ d_rps0; TYPE_2__ d_rps1; TYPE_1__ d_i2c; int item; int v4l2_dev; int i2c_wq; int module; int i2c_lock; int slock; int int_slock; int v4l2_lock; struct saa7146_extension* ext; int name; struct pci_dev* pci; } ;
struct pci_device_id {scalar_t__ driver_data; } ;
struct pci_dev {int irq; int subsystem_device; int subsystem_vendor; } ;


 int FUNC_0 (char*) ;
 int FUNC_1 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (char*) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_3 (char*) ;
 int FUNC_4 (int *) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_5 (int ,void*) ;
 int FUNC_6 (int *) ;
 int VAR_12 ;
 int FUNC_7 (int ,int ) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (struct saa7146_dev*) ;
 struct saa7146_dev* FUNC_10 (int,int ) ;
 int FUNC_11 (int *,int *) ;
 int FUNC_12 (void*,int,int ) ;
 int FUNC_13 (int *) ;
 void* FUNC_14 (struct pci_dev*,int ,int *) ;
 int FUNC_15 (struct pci_dev*) ;
 int FUNC_16 (struct pci_dev*) ;
 int FUNC_17 (struct pci_dev*,int ,void*,int ) ;
 int FUNC_18 (struct pci_dev*,int ,int*) ;
 int FUNC_19 (struct pci_dev*,int ) ;
 int FUNC_20 (struct pci_dev*,int ,char*) ;
 int FUNC_21 (struct pci_dev*,int ) ;
 int FUNC_22 (struct pci_dev*,int ) ;
 int FUNC_23 (struct pci_dev*,int *) ;
 int FUNC_24 (struct pci_dev*) ;
 int FUNC_25 (int ,int ,int,int ,struct saa7146_dev*) ;
 int VAR_13 ;
 int VAR_14 ;
 int FUNC_26 (struct saa7146_dev*,int ,int) ;
 int FUNC_27 (int *) ;
 int FUNC_28 (int ,char*,int) ;
 scalar_t__ FUNC_29 (struct saa7146_dev*) ;
 scalar_t__ FUNC_30 (struct saa7146_dev*,struct saa7146_pci_extension_data*) ;

__attribute__((used)) static int FUNC_31(struct pci_dev *VAR_15, const struct pci_device_id *VAR_16)
{
 struct saa7146_pci_extension_data *VAR_17 = (struct saa7146_pci_extension_data *)VAR_16->driver_data;
 struct saa7146_extension *VAR_18 = VAR_17->ext;
 struct saa7146_dev *VAR_19;
 int VAR_20 = -VAR_1;


 VAR_19 = FUNC_10(sizeof(struct saa7146_dev), VAR_2);
 if (!VAR_19) {
  FUNC_2(("out of memory.\n"));
  goto out;
 }

 FUNC_1(("pci:%p\n",VAR_15));

 VAR_20 = FUNC_16(VAR_15);
 if (VAR_20 < 0) {
  FUNC_2(("pci_enable_device() failed.\n"));
  goto err_free;
 }


 FUNC_24(VAR_15);

 VAR_19->pci = VAR_15;


 VAR_20 = FUNC_18(VAR_15, VAR_9, &VAR_19->revision);
 if (VAR_20 < 0) {
  FUNC_2(("pci_read_config_dword() failed.\n"));
  goto err_disable;
 }
 VAR_19->revision &= 0xf;



 VAR_20 = FUNC_20(VAR_15, 0, "saa7146");
 if (VAR_20 < 0)
  goto err_disable;

 VAR_19->mem = FUNC_7(FUNC_22(VAR_15, 0),
      FUNC_21(VAR_15, 0));
 if (!VAR_19->mem) {
  FUNC_2(("ioremap() failed.\n"));
  VAR_20 = -VAR_0;
  goto err_release;
 }
 FUNC_26(VAR_19, VAR_3, 0);


 FUNC_26(VAR_19, VAR_6, 0x30ff0000);


 FUNC_26(VAR_19, VAR_7, 0xf8000000);


 VAR_20 = FUNC_25(VAR_15->irq, VAR_12, VAR_5 | VAR_4,
     VAR_19->name, VAR_19);
 if (VAR_20 < 0) {
  FUNC_2(("request_irq() failed.\n"));
  goto err_unmap;
 }

 VAR_20 = -VAR_1;


 VAR_19->d_rps0.cpu_addr = FUNC_14(VAR_15, VAR_10,
          &VAR_19->d_rps0.dma_handle);
 if (!VAR_19->d_rps0.cpu_addr)
  goto err_free_irq;
 FUNC_12(VAR_19->d_rps0.cpu_addr, 0x0, VAR_10);

 VAR_19->d_rps1.cpu_addr = FUNC_14(VAR_15, VAR_10,
          &VAR_19->d_rps1.dma_handle);
 if (!VAR_19->d_rps1.cpu_addr)
  goto err_free_rps0;
 FUNC_12(VAR_19->d_rps1.cpu_addr, 0x0, VAR_10);

 VAR_19->d_i2c.cpu_addr = FUNC_14(VAR_15, VAR_10,
         &VAR_19->d_i2c.dma_handle);
 if (!VAR_19->d_i2c.cpu_addr)
  goto err_free_rps1;
 FUNC_12(VAR_19->d_i2c.cpu_addr, 0x0, VAR_10);




 FUNC_28(VAR_19->name, "saa7146 (%d)", VAR_14);

 FUNC_3(("found saa7146 @ mem %p (revision %d, irq %d) (0x%04x,0x%04x).\n", VAR_19->mem, VAR_19->revision, VAR_15->irq, VAR_15->subsystem_vendor, VAR_15->subsystem_device));
 VAR_19->ext = VAR_18;

 FUNC_13(&VAR_19->v4l2_lock);
 FUNC_27(&VAR_19->int_slock);
 FUNC_27(&VAR_19->slock);

 FUNC_13(&VAR_19->i2c_lock);

 VAR_19->module = VAR_11;
 FUNC_6(&VAR_19->i2c_wq);


 FUNC_26(VAR_19, VAR_8, 0x1c00101f);



 VAR_20 = -VAR_0;

 if (VAR_18->probe && VAR_18->probe(VAR_19)) {
  FUNC_0(("ext->probe() failed for %p. skipping device.\n",VAR_19));
  goto err_free_i2c;
 }

 if (VAR_18->attach(VAR_19, VAR_17)) {
  FUNC_0(("ext->attach() failed for %p. skipping device.\n",VAR_19));
  goto err_free_i2c;
 }



 FUNC_23(VAR_15, &VAR_19->v4l2_dev);

 FUNC_4(&VAR_19->item);
 FUNC_11(&VAR_19->item,&VAR_13);
 VAR_14++;

 VAR_20 = 0;
out:
 return VAR_20;

err_free_i2c:
 FUNC_17(VAR_15, VAR_10, VAR_19->d_i2c.cpu_addr,
       VAR_19->d_i2c.dma_handle);
err_free_rps1:
 FUNC_17(VAR_15, VAR_10, VAR_19->d_rps1.cpu_addr,
       VAR_19->d_rps1.dma_handle);
err_free_rps0:
 FUNC_17(VAR_15, VAR_10, VAR_19->d_rps0.cpu_addr,
       VAR_19->d_rps0.dma_handle);
err_free_irq:
 FUNC_5(VAR_15->irq, (void *)VAR_19);
err_unmap:
 FUNC_8(VAR_19->mem);
err_release:
 FUNC_19(VAR_15, 0);
err_disable:
 FUNC_15(VAR_15);
err_free:
 FUNC_9(VAR_19);
 goto out;
}
