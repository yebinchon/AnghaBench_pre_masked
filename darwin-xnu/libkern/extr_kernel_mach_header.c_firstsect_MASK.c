
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ nsects; } ;
typedef TYPE_1__ kernel_segment_command_t ;
typedef int kernel_section_t ;



kernel_section_t *
FUNC_0(kernel_segment_command_t *VAR_0)
{
 if (!VAR_0 || VAR_0->nsects == 0)
  return (kernel_section_t *)((void*)0);

 return (kernel_section_t *)(VAR_0+1);
}
