
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef unsigned int vm_size_t ;
typedef scalar_t__ vm_offset_t ;
typedef scalar_t__ vm_map_offset_t ;
typedef scalar_t__ uint32_t ;
struct TYPE_4__ {unsigned int MemoryMapDescriptorSize; unsigned int MemoryMapSize; scalar_t__ Version; scalar_t__ efiSystemTable; int efiMode; int Revision; scalar_t__ efiRuntimeServicesPageCount; scalar_t__ efiRuntimeServicesPageStart; scalar_t__ MemoryMap; } ;
typedef TYPE_1__ boot_args ;
struct TYPE_6__ {scalar_t__ bootArgs; } ;
struct TYPE_5__ {int Attribute; scalar_t__ Type; scalar_t__ NumberOfPages; scalar_t__ PhysicalStart; scalar_t__ VirtualStart; } ;
typedef TYPE_2__ EfiMemoryRange ;
typedef int EFI_SYSTEM_TABLE_64 ;
typedef int EFI_SYSTEM_TABLE_32 ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 TYPE_3__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 scalar_t__ FUNC_2 (scalar_t__) ;
 int VAR_12 ;
 scalar_t__ VAR_13 ;
 scalar_t__ VAR_14 ;
 int VAR_15 ;
 int FUNC_3 (char*,...) ;
 scalar_t__ FUNC_4 (scalar_t__) ;
 int FUNC_5 (char*,scalar_t__,int ) ;
 int FUNC_6 (scalar_t__,scalar_t__,scalar_t__,int,int ) ;
 int FUNC_7 (int ,scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_8 (scalar_t__) ;
 scalar_t__ FUNC_9 (scalar_t__) ;

void
FUNC_10(void * VAR_16, vm_size_t VAR_17, uint32_t VAR_18)
{
    boot_args *VAR_19 = (boot_args *)VAR_3.bootArgs;

    FUNC_3("Reinitializing EFI runtime services\n");

    do
    {
        vm_offset_t VAR_20, VAR_21;
 vm_map_offset_t VAR_22;
 EfiMemoryRange *VAR_23;
 unsigned int VAR_24, VAR_25;
 unsigned int VAR_26;

 VAR_11 = 0;
 VAR_10 = 0;

 VAR_18 += FUNC_8(VAR_19->efiRuntimeServicesPageStart);

 FUNC_3("Old system table 0x%x, new 0x%x\n",
     (uint32_t)VAR_19->efiSystemTable, VAR_18);

 VAR_19->efiSystemTable = VAR_18;

 FUNC_3("Old map:\n");
 VAR_24 = VAR_19->MemoryMapDescriptorSize;
 VAR_25 = VAR_19->MemoryMapSize / VAR_24;
 VAR_23 = (EfiMemoryRange *)FUNC_4(VAR_19->MemoryMap);
 for (VAR_26=0; VAR_26 < VAR_25; VAR_26++, VAR_23 = (EfiMemoryRange *)(((vm_offset_t)VAR_23) + VAR_24)) {
     if ((VAR_23->Attribute & VAR_0) == VAR_0) {

  VAR_20 = (vm_offset_t)FUNC_2((uint32_t)VAR_23->NumberOfPages);
  VAR_21 = (vm_offset_t) VAR_23->VirtualStart;

  if (VAR_21 < VAR_4)
   VAR_21 |= VAR_4;
  VAR_22 = (vm_map_offset_t) VAR_23->PhysicalStart;

  FUNC_3("mapping[%u] %qx @ %lx, %llu\n", VAR_23->Type, VAR_22, (unsigned long)VAR_21, VAR_23->NumberOfPages);
     }
 }

 FUNC_7(VAR_15, FUNC_2(VAR_19->efiRuntimeServicesPageStart),
     FUNC_2(VAR_19->efiRuntimeServicesPageStart + VAR_19->efiRuntimeServicesPageCount));

 FUNC_3("New map:\n");
 VAR_24 = VAR_19->MemoryMapDescriptorSize;
 VAR_25 = (unsigned int )(VAR_17 / VAR_24);
 VAR_23 = VAR_16;
 for (VAR_26=0; VAR_26 < VAR_25; VAR_26++, VAR_23 = (EfiMemoryRange *)(((vm_offset_t)VAR_23) + VAR_24)) {
     if ((VAR_23->Attribute & VAR_0) == VAR_0) {

  VAR_20 = (vm_offset_t)FUNC_2((uint32_t)VAR_23->NumberOfPages);
  VAR_21 = (vm_offset_t) VAR_23->VirtualStart;
  if (VAR_21 < VAR_4)
   VAR_21 |= VAR_4;
  VAR_22 = (vm_map_offset_t) VAR_23->PhysicalStart;

  FUNC_3("mapping[%u] %qx @ %lx, %llu\n", VAR_23->Type, VAR_22, (unsigned long)VAR_21, VAR_23->NumberOfPages);

  FUNC_6(VAR_21, VAR_22, VAR_22 + FUNC_9(VAR_20),
    (VAR_23->Type == VAR_14) ? VAR_6 | VAR_5 : VAR_6|VAR_7,
    (VAR_23->Type == VAR_1) ? VAR_8 : VAR_9);
     }
 }

        if (VAR_19->Version != VAR_13)
            FUNC_5("Incompatible boot args version %d revision %d\n", VAR_19->Version, VAR_19->Revision);

        FUNC_3("Boot args version %d revision %d mode %d\n", VAR_19->Version, VAR_19->Revision, VAR_19->efiMode);
        if (VAR_19->efiMode == VAR_12) {
     FUNC_1((EFI_SYSTEM_TABLE_64 *) FUNC_4(VAR_19->efiSystemTable));
        } else {
     FUNC_0((EFI_SYSTEM_TABLE_32 *) FUNC_4(VAR_19->efiSystemTable));
        }
    }
    while (VAR_2);

    FUNC_3("Done reinitializing EFI runtime services\n");

    return;
}
