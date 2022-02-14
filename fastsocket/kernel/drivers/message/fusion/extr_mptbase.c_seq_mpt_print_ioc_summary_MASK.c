
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int u8 ;
struct seq_file {int dummy; } ;
struct TYPE_11__ {int HardwareAddressLow; } ;
struct TYPE_8__ {int Word; } ;
struct TYPE_9__ {int NumberOfPorts; TYPE_1__ FWVersion; } ;
struct TYPE_12__ {int active; int pci_irq; TYPE_4__ lan_cnfg_page1; TYPE_3__* pfacts; int req_depth; TYPE_2__ facts; int prod_name; int name; } ;
struct TYPE_10__ {int ProtocolFlags; } ;
typedef TYPE_5__ MPT_ADAPTER ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,TYPE_5__*) ;
 int FUNC_1 (struct seq_file*,char*,...) ;
 int FUNC_2 (struct seq_file*,char) ;

__attribute__((used)) static void FUNC_3(MPT_ADAPTER *VAR_2, struct seq_file *VAR_3, int VAR_4)
{
 char VAR_5[32];

 FUNC_0(VAR_5, VAR_2);




 FUNC_1(VAR_3, "%s: %s, %s%08xh%s, Ports=%d, MaxQ=%d",
   VAR_2->name,
   VAR_2->prod_name,
   VAR_1,
   VAR_2->facts.FWVersion.Word,
   VAR_5,
   VAR_2->facts.NumberOfPorts,
   VAR_2->req_depth);

 if (VAR_4 && (VAR_2->pfacts[0].ProtocolFlags & VAR_0)) {
  u8 *VAR_6 = (u8*)&VAR_2->lan_cnfg_page1.HardwareAddressLow;
  FUNC_1(VAR_3, ", LanAddr=%02X:%02X:%02X:%02X:%02X:%02X",
   VAR_6[5], VAR_6[4], VAR_6[3], VAR_6[2], VAR_6[1], VAR_6[0]);
 }

 FUNC_1(VAR_3, ", IRQ=%d", VAR_2->pci_irq);

 if (!VAR_2->active)
  FUNC_1(VAR_3, " (disabled)");

 FUNC_2(VAR_3, '\n');
}
