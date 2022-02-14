
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
struct pci_dev {int dummy; } ;
struct bcma_drv_pci {TYPE_2__* core; } ;
struct bcma_device {int core_index; TYPE_1__* bus; } ;
struct TYPE_6__ {struct pci_dev* host_pci; } ;
struct TYPE_5__ {TYPE_3__* bus; } ;
struct TYPE_4__ {scalar_t__ hosttype; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct pci_dev*,int ,int*) ;
 int FUNC_2 (struct pci_dev*,int ,int) ;

int FUNC_3(struct bcma_drv_pci *VAR_2, struct bcma_device *VAR_3,
     bool VAR_4)
{
 struct pci_dev *VAR_5;
 u32 VAR_6, VAR_7;
 int VAR_8 = 0;

 if (!VAR_2 || VAR_3->bus->hosttype != VAR_0) {



  goto out;
 }

 VAR_5 = VAR_2->core->bus->host_pci;

 VAR_8 = FUNC_1(VAR_5, VAR_1, &VAR_7);
 if (VAR_8)
  goto out;

 VAR_6 = FUNC_0(VAR_3->core_index) << 8;
 if (VAR_4)
  VAR_7 |= VAR_6;
 else
  VAR_7 &= ~VAR_6;

 VAR_8 = FUNC_2(VAR_5, VAR_1, VAR_7);

out:
 return VAR_8;
}
