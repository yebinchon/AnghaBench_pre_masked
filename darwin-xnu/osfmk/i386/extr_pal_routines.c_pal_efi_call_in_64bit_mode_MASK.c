
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint64_t ;
struct pal_efi_registers {scalar_t__ rax; } ;
typedef int kern_return_t ;


 int FUNC_0 (char*,scalar_t__,struct pal_efi_registers*,void*,size_t,scalar_t__*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_1 (scalar_t__,struct pal_efi_registers*,void*,size_t) ;
 int VAR_5 ;
 int VAR_6 ;

kern_return_t
FUNC_2(uint64_t VAR_7,
                           struct pal_efi_registers *VAR_8,
                           void *VAR_9,
                           size_t VAR_10,
                           uint64_t *VAR_11)
{
    FUNC_0("pal_efi_call_in_64bit_mode(0x%016llx, %p, %p, %lu, %p)\n",
        VAR_7, VAR_8, VAR_9, VAR_10, VAR_11);

    if (VAR_7 == 0) {
        return VAR_0;
    }

    if ((VAR_8 == ((void*)0))
        || (VAR_9 == ((void*)0))
        || (VAR_10 % 16 != 0)) {
        return VAR_1;
    }

    if (!VAR_6 || !VAR_5) {
        return VAR_2;
    }

    if (VAR_7 < VAR_4) {




        return VAR_0;
    }

    FUNC_1(VAR_7,
                                    VAR_8,
                                    VAR_9,
                                    VAR_10);

    *VAR_11 = VAR_8->rax;

    return VAR_3;
}
