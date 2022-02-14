
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct qlcnic_adapter {int mac_addr; struct pci_dev* pdev; } ;
struct pci_dev {scalar_t__ vendor; scalar_t__ device; } ;
struct TYPE_2__ {scalar_t__ vendor; scalar_t__ device; char* short_name; } ;


 int VAR_0 ;
 TYPE_1__* VAR_1 ;
 scalar_t__ FUNC_0 (struct qlcnic_adapter*,int) ;
 int FUNC_1 (char*,char*,int ,...) ;

__attribute__((used)) static void FUNC_2(struct qlcnic_adapter *VAR_2, char *VAR_3)
{
 struct pci_dev *VAR_4 = VAR_2->pdev;
 int VAR_5, VAR_6 = 0;

 for (VAR_5 = 0; VAR_5 < VAR_0; ++VAR_5) {
  if (VAR_1[VAR_5].vendor == VAR_4->vendor &&
      VAR_1[VAR_5].device == VAR_4->device &&
      FUNC_0(VAR_2, VAR_5)) {
   VAR_6 = 1;
   break;
  }
 }

 if (!VAR_6)
  FUNC_1(VAR_3, "%pM Gigabit Ethernet", VAR_2->mac_addr);
 else
  FUNC_1(VAR_3, "%pM: %s" , VAR_2->mac_addr,
   VAR_1[VAR_5].short_name);
}
