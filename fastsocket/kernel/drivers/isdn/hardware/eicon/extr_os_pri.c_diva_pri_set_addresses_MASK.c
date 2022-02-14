
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {int* mem_type_id; int * addr; int * bar; } ;
struct TYPE_8__ {TYPE_2__ pci; } ;
struct TYPE_6__ {int prom; int sdram_bar; int cfg; int reset; int ram; int Config; int Control; int Address; } ;
struct TYPE_9__ {TYPE_3__ resources; TYPE_1__ xdi_adapter; } ;
typedef TYPE_4__ diva_os_xdi_adapter_t ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 size_t VAR_5 ;
 size_t VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;

__attribute__((used)) static void FUNC_0(diva_os_xdi_adapter_t * VAR_10)
{
 VAR_10->resources.pci.mem_type_id[VAR_0] = 0;
 VAR_10->resources.pci.mem_type_id[VAR_3] = 2;
 VAR_10->resources.pci.mem_type_id[VAR_2] = 4;
 VAR_10->resources.pci.mem_type_id[VAR_5] = 0;
 VAR_10->resources.pci.mem_type_id[VAR_6] = 2;
 VAR_10->resources.pci.mem_type_id[VAR_1] = 4;
 VAR_10->resources.pci.mem_type_id[VAR_4] = 3;

 VAR_10->xdi_adapter.Address = VAR_10->resources.pci.addr[0];
 VAR_10->xdi_adapter.Control = VAR_10->resources.pci.addr[2];
 VAR_10->xdi_adapter.Config = VAR_10->resources.pci.addr[4];

 VAR_10->xdi_adapter.ram = VAR_10->resources.pci.addr[0];
 VAR_10->xdi_adapter.ram += VAR_9;

 VAR_10->xdi_adapter.reset = VAR_10->resources.pci.addr[2];
 VAR_10->xdi_adapter.reset += VAR_8;

 VAR_10->xdi_adapter.cfg = VAR_10->resources.pci.addr[4];
 VAR_10->xdi_adapter.cfg += VAR_7;

 VAR_10->xdi_adapter.sdram_bar = VAR_10->resources.pci.bar[0];

 VAR_10->xdi_adapter.prom = VAR_10->resources.pci.addr[3];
}
