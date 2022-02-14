
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ vm_offset_t ;
typedef scalar_t__ vm_address_t ;
typedef scalar_t__ ppnum_t ;
struct TYPE_3__ {unsigned int MemoryMapDescriptorSize; unsigned int MemoryMapSize; scalar_t__ MemoryMap; scalar_t__ ksize; scalar_t__ kaddr; } ;
typedef TYPE_1__ boot_args ;
struct TYPE_4__ {unsigned long NumberOfPages; int PhysicalStart; scalar_t__ Type; } ;
typedef TYPE_2__ EfiMemoryRange ;


 unsigned long VAR_0 ;
 int VAR_1 ;
 unsigned long VAR_2 ;
 unsigned long VAR_3 ;
 int FUNC_0 () ;
 scalar_t__ VAR_4 ;
 void* VAR_5 ;
 void* VAR_6 ;
 void* FUNC_1 (scalar_t__) ;
 int FUNC_2 (char*) ;
 unsigned long VAR_7 ;
 unsigned long VAR_8 ;
 unsigned long VAR_9 ;
 unsigned long VAR_10 ;
 unsigned int VAR_11 ;
 int VAR_12 ;

void
FUNC_3(void *VAR_13)
{
 boot_args *VAR_14 = (boot_args *)VAR_13;
 vm_address_t VAR_15 = VAR_14->kaddr;
 vm_address_t VAR_16 = VAR_14->kaddr + VAR_14->ksize;

 VAR_5 = FUNC_1(VAR_15);
 VAR_6 = FUNC_1(VAR_16);

 EfiMemoryRange *VAR_17, *VAR_18;
 unsigned int VAR_19;
 unsigned int VAR_20;
 unsigned int VAR_21;
 unsigned long VAR_22;
 unsigned long VAR_23;

 VAR_17 = (EfiMemoryRange *)FUNC_1((vm_offset_t)VAR_14->MemoryMap);
 VAR_20 = VAR_14->MemoryMapDescriptorSize;
 VAR_19 = VAR_14->MemoryMapSize / VAR_20;


 VAR_22 = 0;
 for (VAR_21 = 0, VAR_18 = VAR_17; VAR_21 < VAR_19; VAR_21++, VAR_18 = (EfiMemoryRange *)(((vm_offset_t)VAR_18) + VAR_20)) {
  VAR_22 += VAR_18->NumberOfPages;
 }

 VAR_23 = (VAR_22 * VAR_3) / 100 + (VAR_2 / VAR_0);


 for (VAR_21 = 0, VAR_18 = VAR_17; VAR_21 < VAR_19; VAR_21++, VAR_18 = (EfiMemoryRange *)(((vm_offset_t)VAR_18) + VAR_20)) {
  ppnum_t VAR_24, VAR_25;
  VAR_24 = (ppnum_t)(VAR_18->PhysicalStart >> VAR_1);
  VAR_25 = (ppnum_t)((VAR_18->PhysicalStart >> VAR_1) + VAR_18->NumberOfPages - 1);

  if ((VAR_18->Type == VAR_4) && (VAR_18->NumberOfPages > VAR_23)) {

   VAR_18->NumberOfPages -= VAR_23;

   VAR_8 = VAR_18->PhysicalStart + (VAR_18->NumberOfPages << VAR_1);
   VAR_10 = VAR_8 + (VAR_23 << VAR_1);
   VAR_9 = VAR_8;
   VAR_7 = VAR_23;
   VAR_11 = VAR_21;


   VAR_12 = FUNC_0();

   return;
  }
 }

 FUNC_2("KASAN: could not reserve memory");
}
