
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {uintptr_t nsects; } ;
typedef TYPE_1__ kernel_segment_command_t ;
typedef int kernel_section_t ;


 int * FUNC_0 (TYPE_1__*) ;

kernel_section_t *
FUNC_1(kernel_segment_command_t *VAR_0, kernel_section_t *VAR_1)
{
 kernel_section_t *VAR_2 = FUNC_0(VAR_0);

 if (((uintptr_t)(VAR_1 - VAR_2) + 1) >= VAR_0->nsects)
  return (kernel_section_t *)((void*)0);

 return VAR_1+1;
}
