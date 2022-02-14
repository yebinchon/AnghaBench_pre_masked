
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_6__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int vm_offset_t ;
typedef int uint8_t ;
typedef scalar_t__ uint64_t ;
typedef int uint32_t ;
struct TYPE_7__ {scalar_t__ phys_start; int len; int type; } ;
typedef TYPE_1__ panic_phys_range_t ;
struct TYPE_8__ {int MemoryMapDescriptorSize; int const MemoryMapSize; scalar_t__ MemoryMap; } ;
typedef TYPE_2__ boot_args ;
typedef int boolean_t ;
struct TYPE_10__ {TYPE_2__* bootArgs; } ;
struct TYPE_9__ {scalar_t__ PhysicalStart; int NumberOfPages; int Type; } ;
typedef TYPE_3__ EfiMemoryRange ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_6__ VAR_2 ;
 TYPE_3__* FUNC_0 (uintptr_t) ;
 int VAR_3 ;
 scalar_t__ FUNC_1 (int ) ;

boolean_t FUNC_2(const void *VAR_4, uint64_t *VAR_5,
        panic_phys_range_t *VAR_6)
{
 *VAR_5 = FUNC_1((vm_offset_t)VAR_4);

 const boot_args *VAR_7 = VAR_2.bootArgs;

 if (!FUNC_1((vm_offset_t)VAR_7))
  return VAR_0;

 const EfiMemoryRange *VAR_8 = FUNC_0((uintptr_t)VAR_7->MemoryMap), *VAR_9 = ((void*)0);
 const uint32_t VAR_10 = VAR_7->MemoryMapDescriptorSize;
 const uint32_t VAR_11 = VAR_7->MemoryMapSize / VAR_10;

 if (VAR_11 > 1024)
  return VAR_0;

 for (uint32_t VAR_12 = 0; VAR_12 < VAR_11; ++VAR_12, VAR_8 = (const EfiMemoryRange *)(const void *)((const uint8_t *)VAR_8 + VAR_10)) {
  if (VAR_8->PhysicalStart + VAR_8->NumberOfPages * VAR_1 > *VAR_5)
   continue;

  if (!VAR_9 || VAR_8->PhysicalStart > VAR_9->PhysicalStart)
   VAR_9 = VAR_8;
 }

 if (!VAR_9)
  return VAR_0;

 VAR_6->type = VAR_9->Type;
 VAR_6->phys_start = VAR_9->PhysicalStart;
 VAR_6->len = VAR_9->NumberOfPages * VAR_1;

 return VAR_3;
}
