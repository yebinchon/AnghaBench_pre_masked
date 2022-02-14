
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct islpci_membuf {int * mem; scalar_t__ size; scalar_t__ pci_addr; } ;
struct TYPE_5__ {int acl; int ** data_low_rx; scalar_t__* pci_map_rx_address; int pdev; struct islpci_membuf* mgmt_rx; int * control_block; scalar_t__ device_psm_buffer; scalar_t__ device_host_address; int * driver_mem_address; int * device_base; } ;
typedef TYPE_1__ islpci_private ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (int ,int ,int *,scalar_t__) ;
 int FUNC_5 (int ,scalar_t__,scalar_t__,int ) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (TYPE_1__*) ;

int
FUNC_8(islpci_private *VAR_5)
{
 int VAR_6;

 if (VAR_5->device_base)
  FUNC_1(VAR_5->device_base);
 VAR_5->device_base = ((void*)0);


 if (VAR_5->driver_mem_address)
  FUNC_4(VAR_5->pdev, VAR_0,
        VAR_5->driver_mem_address,
        VAR_5->device_host_address);


 VAR_5->driver_mem_address = ((void*)0);
 VAR_5->device_host_address = 0;
 VAR_5->device_psm_buffer = 0;
 VAR_5->control_block = ((void*)0);


        for (VAR_6 = 0; VAR_6 < VAR_1; VAR_6++) {
  struct islpci_membuf *VAR_7 = &VAR_5->mgmt_rx[VAR_6];
  if (VAR_7->pci_addr)
   FUNC_5(VAR_5->pdev, VAR_7->pci_addr,
      VAR_7->size, VAR_4);
  VAR_7->pci_addr = 0;
  FUNC_2(VAR_7->mem);
  VAR_7->size = 0;
  VAR_7->mem = ((void*)0);
        }


 for (VAR_6 = 0; VAR_6 < VAR_2; VAR_6++) {
  if (VAR_5->pci_map_rx_address[VAR_6])
   FUNC_5(VAR_5->pdev,
      VAR_5->pci_map_rx_address[VAR_6],
      VAR_3 + 2,
      VAR_4);
  VAR_5->pci_map_rx_address[VAR_6] = 0;

  if (VAR_5->data_low_rx[VAR_6])
   FUNC_0(VAR_5->data_low_rx[VAR_6]);
  VAR_5->data_low_rx[VAR_6] = ((void*)0);
 }


 FUNC_6(&VAR_5->acl);
 FUNC_7(VAR_5);
 FUNC_3(VAR_5);

 return 0;
}
