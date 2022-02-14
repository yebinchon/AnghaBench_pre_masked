
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ vm_offset_t ;
struct TYPE_4__ {scalar_t__ cmd; scalar_t__ vmaddr; scalar_t__ vmsize; scalar_t__ cmdsize; } ;
typedef TYPE_1__ kernel_segment_command_t ;
struct TYPE_5__ {unsigned long ncmds; } ;
typedef TYPE_2__ kernel_mach_header_t ;


 scalar_t__ VAR_0 ;
 TYPE_2__ VAR_1 ;

vm_offset_t
FUNC_0(void)
{
 kernel_segment_command_t *VAR_2;
 vm_offset_t VAR_3 = 0;
 kernel_mach_header_t *VAR_4 = &VAR_1;
 unsigned long VAR_5;

 VAR_2 = (kernel_segment_command_t *)
  ((uintptr_t)VAR_4 + sizeof(kernel_mach_header_t));
 for (VAR_5 = 0; VAR_5 < VAR_4->ncmds; VAR_5++){
  if (VAR_2->cmd == VAR_0) {
   if (VAR_2->vmaddr + VAR_2->vmsize > VAR_3)
    VAR_3 = VAR_2->vmaddr + VAR_2->vmsize;
  }
  VAR_2 = (kernel_segment_command_t *)((uintptr_t)VAR_2 + VAR_2->cmdsize);
 }
 return VAR_3;
}
