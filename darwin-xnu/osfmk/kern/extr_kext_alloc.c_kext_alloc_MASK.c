
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ vm_size_t ;
typedef scalar_t__ vm_offset_t ;
typedef scalar_t__ mach_vm_offset_t ;
typedef scalar_t__ kern_return_t ;
typedef scalar_t__ boolean_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_0 (scalar_t__,scalar_t__) ;
 scalar_t__ VAR_12 ;
 scalar_t__ VAR_13 ;
 int FUNC_1 (scalar_t__,scalar_t__) ;
 scalar_t__ VAR_14 ;
 scalar_t__ FUNC_2 (int ,scalar_t__*,scalar_t__,int,int ) ;
 scalar_t__ FUNC_3 (int ,scalar_t__*,scalar_t__,int ,int,int ,int ,int ,int ,int ,int ,int ,int ) ;
 int FUNC_4 (char*,scalar_t__) ;

kern_return_t
FUNC_5(vm_offset_t *VAR_15, vm_size_t VAR_16, boolean_t VAR_17)
{
    kern_return_t VAR_18 = 0;



    mach_vm_offset_t VAR_19 = (VAR_17) ? *VAR_15 : VAR_12;

    int VAR_20 = (VAR_17) ? VAR_5 : VAR_4;
    VAR_18 = FUNC_2(VAR_11, &VAR_19, VAR_16, VAR_20, VAR_7);
    if (VAR_18 != VAR_1) {
        FUNC_4("vm_allocate failed - %d\n", VAR_18);
        goto finish;
    }



    if ((VAR_19 + VAR_16) > VAR_13) {
        FUNC_1((vm_offset_t)VAR_19, VAR_16);
        VAR_18 = VAR_0;
        goto finish;
    }

    *VAR_15 = (vm_offset_t)VAR_19;
    VAR_18 = VAR_1;




finish:
    return VAR_18;
}
