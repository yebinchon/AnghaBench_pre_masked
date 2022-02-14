
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef scalar_t__ u_int ;
struct TYPE_6__ {scalar_t__ cmd; scalar_t__ cmdsize; } ;
typedef TYPE_1__ kernel_segment_command_t ;
struct TYPE_7__ {scalar_t__ ncmds; } ;
typedef TYPE_2__ kernel_mach_header_t ;


 scalar_t__ VAR_0 ;

kernel_segment_command_t *
FUNC_0(
        kernel_mach_header_t *VAR_1,
        kernel_segment_command_t *VAR_2)
{
    u_int VAR_3 = 0;
    kernel_segment_command_t *VAR_4 = (kernel_segment_command_t *)
        ((uintptr_t)VAR_1 + sizeof(*VAR_1));


    for (VAR_3 = 0; VAR_4 != VAR_2 && VAR_3 < VAR_1->ncmds; VAR_3++) {
        VAR_4 = (kernel_segment_command_t *)((uintptr_t)VAR_4 + VAR_4->cmdsize);
    }


    VAR_3++;
    VAR_4 = (kernel_segment_command_t *)((uintptr_t)VAR_4 + VAR_4->cmdsize);


    for (; VAR_3 < VAR_1->ncmds; VAR_3++) {
        if (VAR_4->cmd == VAR_0) return VAR_4;

        VAR_4 = (kernel_segment_command_t *)((uintptr_t)VAR_4 + VAR_4->cmdsize);
    }

    return (kernel_segment_command_t *)((void*)0);
}
