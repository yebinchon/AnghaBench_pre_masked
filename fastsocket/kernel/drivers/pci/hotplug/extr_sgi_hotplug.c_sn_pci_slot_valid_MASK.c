
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u16 ;
struct TYPE_2__ {scalar_t__ bs_persist_busnum; } ;
struct pcibus_info {int pbi_valid_devices; TYPE_1__ pbi_buscommon; } ;
struct pci_bus {int dummy; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 struct pcibus_info* FUNC_0 (struct pci_bus*) ;
 int FUNC_1 (struct pci_bus*) ;
 scalar_t__ FUNC_2 (struct pci_bus*) ;

__attribute__((used)) static int FUNC_3(struct pci_bus *VAR_3, int VAR_4)
{
 struct pcibus_info *VAR_5;
 u16 VAR_6, VAR_7, VAR_8;

 VAR_5 = FUNC_0(VAR_3);


 if (!(VAR_5->pbi_valid_devices & (1 << VAR_4)))
  return -VAR_0;

 VAR_8 = FUNC_2(VAR_3);
 VAR_6 = VAR_5->pbi_buscommon.bs_persist_busnum;
 VAR_7 = FUNC_1(VAR_3) & 0xf;


 if ((VAR_8 == VAR_2 ||
      VAR_8 == VAR_1) &&
     (VAR_7 == 1 && VAR_6 == 0 && VAR_4 != 1))
  return -VAR_0;

 return 1;
}
