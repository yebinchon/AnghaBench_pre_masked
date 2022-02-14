
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u32 ;
typedef int u16 ;
struct TYPE_2__ {scalar_t__ bs_asic_type; } ;
struct pcibus_info {TYPE_1__ pbi_buscommon; } ;
struct pci_bus {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;





 scalar_t__ VAR_2 ;
 struct pcibus_info* FUNC_0 (struct pci_bus*) ;
 int FUNC_1 (struct pci_bus*) ;

__attribute__((used)) static int FUNC_2(struct pci_bus *VAR_3)
{
 struct pcibus_info *VAR_4;
 u32 VAR_5;
 u16 VAR_6;


 VAR_4 = FUNC_0(VAR_3);
 VAR_5 = VAR_4->pbi_buscommon.bs_asic_type;
 if (VAR_5 == VAR_2)
  return -VAR_1;


 VAR_6 = FUNC_1(VAR_3);
 switch (VAR_6) {
  case 130:
  case 128:
  case 131:
  case 129:
  case 132:
   return 1;
   break;
  default:
   return -VAR_1;
   break;
 }

 return -VAR_0;
}
