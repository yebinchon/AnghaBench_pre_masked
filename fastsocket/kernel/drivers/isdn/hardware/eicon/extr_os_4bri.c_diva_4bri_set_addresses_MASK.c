
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int dword ;
struct TYPE_8__ {int ControllerNumber; int * reset; int * prom; int * ctlReg; int * ram; int * Control; int * Address; } ;
struct TYPE_6__ {int qoffset; int* mem_type_id; int ** addr; } ;
struct TYPE_7__ {TYPE_1__ pci; } ;
struct TYPE_9__ {TYPE_3__ xdi_adapter; TYPE_2__ resources; } ;
typedef TYPE_4__ diva_os_xdi_adapter_t ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 size_t VAR_5 ;
 int VAR_6 ;

__attribute__((used)) static void FUNC_0(diva_os_xdi_adapter_t *VAR_7)
{
 dword VAR_8 = VAR_7->resources.pci.qoffset;
 dword VAR_9 = VAR_8 * VAR_7->xdi_adapter.ControllerNumber;

 VAR_7->resources.pci.mem_type_id[VAR_4] = 2;
 VAR_7->resources.pci.mem_type_id[VAR_0] = 2;
 VAR_7->resources.pci.mem_type_id[VAR_1] = 2;
 VAR_7->resources.pci.mem_type_id[VAR_5] = 0;
 VAR_7->resources.pci.mem_type_id[VAR_2] = 3;
 VAR_7->resources.pci.mem_type_id[VAR_3] = 0;




 VAR_7->xdi_adapter.Address = VAR_7->resources.pci.addr[2];
 VAR_7->xdi_adapter.Address += VAR_9;

 VAR_7->xdi_adapter.Control = VAR_7->resources.pci.addr[2];

 VAR_7->xdi_adapter.ram = VAR_7->resources.pci.addr[2];
 VAR_7->xdi_adapter.ram += VAR_9 + (VAR_8 - VAR_6);

 VAR_7->xdi_adapter.reset = VAR_7->resources.pci.addr[0];



 VAR_7->xdi_adapter.ctlReg = VAR_7->resources.pci.addr[3];



 VAR_7->xdi_adapter.prom = &VAR_7->xdi_adapter.reset[0x6E];
}
