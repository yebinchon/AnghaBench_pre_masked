
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int HardwareType; size_t ControllerNumber; scalar_t__* disks; int PCIDevice; scalar_t__ IO_Address; scalar_t__ IRQ_Channel; scalar_t__ MemoryMappedAddress; int BaseAddress; int DmaPages; } ;
typedef TYPE_1__ DAC960_Controller_T ;



 int FUNC_0 (int ) ;
 int ** VAR_0 ;

 int FUNC_1 (int ) ;

 int FUNC_2 (int ) ;

 int FUNC_3 (int ) ;
 int VAR_1 ;

 int FUNC_4 (int ) ;

 int FUNC_5 (int ) ;

 int FUNC_6 (int ,int *) ;
 int FUNC_7 (scalar_t__,TYPE_1__*) ;
 int FUNC_8 (scalar_t__) ;
 int FUNC_9 (TYPE_1__*) ;
 int FUNC_10 (int ) ;
 int FUNC_11 (scalar_t__) ;
 int FUNC_12 (scalar_t__,int) ;

__attribute__((used)) static void FUNC_13(DAC960_Controller_T *VAR_2)
{
  int VAR_3;


  FUNC_6(VAR_2->PCIDevice, &VAR_2->DmaPages);
  if (VAR_2->MemoryMappedAddress) {
   switch(VAR_2->HardwareType)
   {
  case 133:
   FUNC_1(VAR_2->BaseAddress);
   break;
  case 134:
   FUNC_0(VAR_2->BaseAddress);
   break;
  case 131:
   FUNC_3(VAR_2->BaseAddress);
   break;
  case 132:
   FUNC_2(VAR_2->BaseAddress);
   break;
  case 129:
   FUNC_5(VAR_2->BaseAddress);
   break;
  case 130:
   FUNC_4(VAR_2->BaseAddress);
   break;
  case 128:
   FUNC_4(VAR_2->BaseAddress);
   break;
   }
   FUNC_8(VAR_2->MemoryMappedAddress);
  }
  if (VAR_2->IRQ_Channel)
   FUNC_7(VAR_2->IRQ_Channel, VAR_2);
  if (VAR_2->IO_Address)
 FUNC_12(VAR_2->IO_Address, 0x80);
  FUNC_10(VAR_2->PCIDevice);
  for (VAR_3 = 0; (VAR_3 < VAR_1) && VAR_2->disks[VAR_3]; VAR_3++)
       FUNC_11(VAR_2->disks[VAR_3]);
  VAR_0[VAR_2->ControllerNumber] = ((void*)0);
  FUNC_9(VAR_2);
}
