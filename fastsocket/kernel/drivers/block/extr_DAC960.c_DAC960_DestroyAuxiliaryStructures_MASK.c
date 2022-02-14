
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct pci_pool {int dummy; } ;
typedef int dma_addr_t ;
struct TYPE_9__ {int RequestSenseDMA; scalar_t__ RequestSense; int ScatterGatherListDMA; scalar_t__ ScatterGatherList; } ;
struct TYPE_8__ {int ScatterGatherListDMA; scalar_t__ ScatterGatherList; } ;
struct TYPE_12__ {int CommandIdentifier; TYPE_2__ V2; TYPE_1__ V1; } ;
struct TYPE_10__ {TYPE_5__** InquiryUnitSerialNumber; TYPE_5__** PhysicalDeviceInformation; TYPE_5__** LogicalDeviceInformation; struct pci_pool* RequestSensePool; } ;
struct TYPE_11__ {scalar_t__ FirmwareType; int DriverQueueDepth; int CommandAllocationGroupSize; TYPE_3__ V2; int * CurrentStatusBuffer; TYPE_5__* CombinedStatusBuffer; TYPE_5__** Commands; int * FreeCommands; struct pci_pool* ScatterGatherPool; } ;
typedef TYPE_4__ DAC960_Controller_T ;
typedef TYPE_5__ DAC960_Command_T ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (TYPE_5__*) ;
 int FUNC_1 (struct pci_pool*) ;
 int FUNC_2 (struct pci_pool*,void*,int ) ;

__attribute__((used)) static void FUNC_3(DAC960_Controller_T *VAR_4)
{
  int VAR_5;
  struct pci_pool *VAR_6 = VAR_4->ScatterGatherPool;
  struct pci_pool *VAR_7 = ((void*)0);
  void *VAR_8;
  dma_addr_t VAR_9;
  void *VAR_10;
  dma_addr_t VAR_11;
  DAC960_Command_T *VAR_12 = ((void*)0);


  if (VAR_4->FirmwareType == VAR_2)
        VAR_7 = VAR_4->V2.RequestSensePool;

  VAR_4->FreeCommands = ((void*)0);
  for (VAR_5 = 0; VAR_5 < VAR_4->DriverQueueDepth; VAR_5++)
    {
      DAC960_Command_T *VAR_13 = VAR_4->Commands[VAR_5];

      if (VAR_13 == ((void*)0))
   continue;

      if (VAR_4->FirmwareType == VAR_1) {
   VAR_8 = (void *)VAR_13->V1.ScatterGatherList;
   VAR_9 = VAR_13->V1.ScatterGatherListDMA;
   VAR_10 = ((void*)0);
   VAR_11 = (dma_addr_t)0;
      } else {
          VAR_8 = (void *)VAR_13->V2.ScatterGatherList;
   VAR_9 = VAR_13->V2.ScatterGatherListDMA;
   VAR_10 = (void *)VAR_13->V2.RequestSense;
   VAR_11 = VAR_13->V2.RequestSenseDMA;
      }
      if (VAR_8 != ((void*)0))
          FUNC_2(VAR_6, VAR_8, VAR_9);
      if (VAR_10 != ((void*)0))
          FUNC_2(VAR_7, VAR_10, VAR_11);

      if ((VAR_13->CommandIdentifier
    % VAR_4->CommandAllocationGroupSize) == 1) {






    FUNC_0(VAR_12);
    VAR_12 = VAR_13;
      }
      VAR_4->Commands[VAR_5] = ((void*)0);
    }
  FUNC_0(VAR_12);

  if (VAR_4->CombinedStatusBuffer != ((void*)0))
    {
      FUNC_0(VAR_4->CombinedStatusBuffer);
      VAR_4->CombinedStatusBuffer = ((void*)0);
      VAR_4->CurrentStatusBuffer = ((void*)0);
    }

  if (VAR_6 != ((void*)0))
   FUNC_1(VAR_6);
  if (VAR_4->FirmwareType == VAR_1)
   return;

  if (VAR_7 != ((void*)0))
 FUNC_1(VAR_7);

  for (VAR_5 = 0; VAR_5 < VAR_0; VAR_5++) {
 FUNC_0(VAR_4->V2.LogicalDeviceInformation[VAR_5]);
 VAR_4->V2.LogicalDeviceInformation[VAR_5] = ((void*)0);
  }

  for (VAR_5 = 0; VAR_5 < VAR_3; VAR_5++)
    {
      FUNC_0(VAR_4->V2.PhysicalDeviceInformation[VAR_5]);
      VAR_4->V2.PhysicalDeviceInformation[VAR_5] = ((void*)0);
      FUNC_0(VAR_4->V2.InquiryUnitSerialNumber[VAR_5]);
      VAR_4->V2.InquiryUnitSerialNumber[VAR_5] = ((void*)0);
    }
}
