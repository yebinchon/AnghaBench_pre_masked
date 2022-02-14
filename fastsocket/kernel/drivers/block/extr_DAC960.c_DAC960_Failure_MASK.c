
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ IO_Address; int PCI_Address; int Function; int Device; int Bus; } ;
typedef TYPE_1__ DAC960_Controller_T ;


 int FUNC_0 (char*,TYPE_1__*,...) ;

__attribute__((used)) static bool FUNC_1(DAC960_Controller_T *VAR_0,
         unsigned char *VAR_1)
{
  FUNC_0("While configuring DAC960 PCI RAID Controller at\n",
        VAR_0);
  if (VAR_0->IO_Address == 0)
    FUNC_0("PCI Bus %d Device %d Function %d I/O Address N/A "
   "PCI Address 0x%X\n", VAR_0,
   VAR_0->Bus, VAR_0->Device,
   VAR_0->Function, VAR_0->PCI_Address);
  else FUNC_0("PCI Bus %d Device %d Function %d I/O Address "
      "0x%X PCI Address 0x%X\n", VAR_0,
      VAR_0->Bus, VAR_0->Device,
      VAR_0->Function, VAR_0->IO_Address,
      VAR_0->PCI_Address);
  FUNC_0("%s FAILED - DETACHING\n", VAR_0, VAR_1);
  return 0;
}
