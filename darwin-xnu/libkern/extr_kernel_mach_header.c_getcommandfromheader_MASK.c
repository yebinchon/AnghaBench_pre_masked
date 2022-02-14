
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ uint32_t ;
struct load_command {scalar_t__ cmd; scalar_t__ cmdsize; } ;
struct TYPE_3__ {unsigned long ncmds; } ;
typedef TYPE_1__ kernel_mach_header_t ;



void *
FUNC_0(kernel_mach_header_t *VAR_0, uint32_t VAR_1) {
 struct load_command *VAR_2;
 unsigned long VAR_3;

 VAR_2 = (struct load_command *) (VAR_0 + 1);
 for(VAR_3 = 0; VAR_3 < VAR_0->ncmds; VAR_3++){
  if(VAR_2->cmd == VAR_1) {
   return (void *)VAR_2;
  }

  VAR_2 = (struct load_command *)((uintptr_t)VAR_2 + VAR_2->cmdsize);
 }

 return ((void*)0);
}
