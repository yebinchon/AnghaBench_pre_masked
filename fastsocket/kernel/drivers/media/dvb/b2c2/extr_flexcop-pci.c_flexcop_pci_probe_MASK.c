
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci_device_id {int dummy; } ;
struct pci_dev {int dev; } ;
struct flexcop_pci {int irq_check_work; struct pci_dev* pdev; struct flexcop_device* fc_dev; } ;
struct flexcop_device {int owner; int * dev; int bus_type; scalar_t__ pid_filtering; int stream_control; int get_mac_addr; int i2c_request; int write_ibi_reg; int read_ibi_reg; struct flexcop_pci* bus_specific; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int ) ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_1 (char*) ;
 int FUNC_2 (struct flexcop_device*) ;
 int FUNC_3 (struct flexcop_device*) ;
 int FUNC_4 (struct flexcop_device*) ;
 struct flexcop_device* FUNC_5 (int) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_6 (struct flexcop_pci*) ;
 int FUNC_7 (struct flexcop_pci*) ;
 int FUNC_8 (struct flexcop_pci*) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_9 (char*) ;
 int VAR_10 ;
 int FUNC_10 (int) ;
 int FUNC_11 (int *,int ) ;

__attribute__((used)) static int FUNC_12(struct pci_dev *VAR_11,
  const struct pci_device_id *VAR_12)
{
 struct flexcop_device *VAR_13;
 struct flexcop_pci *VAR_14;
 int VAR_15 = -VAR_0;

 if ((VAR_13 = FUNC_5(sizeof(struct flexcop_pci))) == ((void*)0)) {
  FUNC_1("out of memory\n");
  return -VAR_0;
 }


 VAR_14 = VAR_13->bus_specific;
 VAR_14->fc_dev = VAR_13;

 VAR_13->read_ibi_reg = VAR_7;
 VAR_13->write_ibi_reg = VAR_9;
 VAR_13->i2c_request = VAR_5;
 VAR_13->get_mac_addr = VAR_4;
 VAR_13->stream_control = VAR_8;

 if (VAR_3)
  FUNC_9("will use the HW PID filter.");
 else
  FUNC_9("will pass the complete TS to the demuxer.");

 VAR_13->pid_filtering = VAR_3;
 VAR_13->bus_type = VAR_1;
 VAR_13->dev = &VAR_11->dev;
 VAR_13->owner = VAR_2;


 VAR_14->pdev = VAR_11;
 if ((VAR_15 = FUNC_8(VAR_14)) != 0)
  goto err_kfree;


 if ((VAR_15 = FUNC_3(VAR_13)) != 0)
  goto err_pci_exit;


 if ((VAR_15 = FUNC_6(VAR_14)) != 0)
  goto err_fc_exit;

 FUNC_0(&VAR_14->irq_check_work, VAR_6);

 if (VAR_10 > 0)
  FUNC_11(&VAR_14->irq_check_work,
    FUNC_10(VAR_10 < 100 ?
     100 :
     VAR_10));
 return VAR_15;

err_fc_exit:
 FUNC_2(VAR_13);
err_pci_exit:
 FUNC_7(VAR_14);
err_kfree:
 FUNC_4(VAR_13);
 return VAR_15;
}
