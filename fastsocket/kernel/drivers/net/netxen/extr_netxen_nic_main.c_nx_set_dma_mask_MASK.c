
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint64_t ;
struct pci_dev {int dummy; } ;
struct TYPE_2__ {int revision_id; } ;
struct netxen_adapter {int pci_using_dac; TYPE_1__ ahw; struct pci_dev* pdev; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (struct pci_dev*,int ) ;
 scalar_t__ FUNC_3 (struct pci_dev*,int ) ;

__attribute__((used)) static int FUNC_4(struct netxen_adapter *VAR_1)
{
 struct pci_dev *VAR_2 = VAR_1->pdev;
 uint64_t VAR_3, VAR_4;

 VAR_1->pci_using_dac = 0;

 VAR_3 = FUNC_0(32);
 VAR_4 = FUNC_0(32);

 if (FUNC_1(VAR_1->ahw.revision_id)) {

  VAR_3 = FUNC_0(35);

 } else {
  VAR_3 = FUNC_0(39);
  VAR_4 = VAR_3;
 }

 if (FUNC_3(VAR_2, VAR_3) == 0 &&
  FUNC_2(VAR_2, VAR_4) == 0) {
  VAR_1->pci_using_dac = 1;
  return 0;
 }

 return -VAR_0;
}
