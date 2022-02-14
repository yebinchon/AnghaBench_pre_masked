
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct comedi_device {int dummy; } ;
typedef scalar_t__ resource_size_t ;
struct TYPE_2__ {int io_addr; scalar_t__ phys_addr; int pci_dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char*) ;
 TYPE_1__* VAR_2 ;
 int FUNC_1 (scalar_t__,int ) ;
 scalar_t__ FUNC_2 (int ,int ) ;
 int FUNC_3 (char*,unsigned long long,int ) ;

__attribute__((used)) static int FUNC_4(struct comedi_device *VAR_3)
{
 resource_size_t VAR_4;
 int VAR_5;

 VAR_5 = FUNC_0(VAR_2->pci_dev, "dt3000");
 if (VAR_5 < 0)
  return VAR_5;

 VAR_4 = FUNC_2(VAR_2->pci_dev, 0);
 VAR_2->phys_addr = VAR_4;
 VAR_2->io_addr = FUNC_1(VAR_2->phys_addr, VAR_0);
 if (!VAR_2->io_addr)
  return -VAR_1;





 return 0;
}
